# 02 The mongod

## Lab - Launching Mongod
**Problem**:
In this lab, you're going to launch your own mongod with a few basic command line arguments.

Applying what you've learned so far about the mongod process, launch a mongod instance, from the command line, with the following requirements:
- run on port 27000
- data files are stored in /data/db/
- listens to connections from the IP address 192.168.103.100 and localhost
- authentication is enabled
By default, a mongod that enforces authentication but has no configured users only allows connections through the localhost. Use the mongo shell on the Vagrant box to use the localhost exception and connect to this node.

Use the following command to connect to the Mongo shell and create the following user. You will need this user in order to validate subsequent labs.
```sh
mongo admin --host localhost:27000 --eval '
  db.createUser({
    user: "m103-admin",
    pwd: "m103-pass",
    roles: [
      {role: "root", db: "admin"}
    ]
  })
'
```
The above command creates a user with the following credentials:
- Role: root on admin database
- Username: m103-admin
- Password: m103-pass
When you're finished, run the following validation script in your vagrant and outside the mongo shell and enter the validation key you receive below. If you receive an error, it should give you some idea of what went wrong.
```sh
vagrant@m103:~$ validate_lab_launch_mongod
```
Hint: You want to make sure all applicable command line options are set! Also, in case you need to restart the mongod daemon, you may need to kill the process using it's pid.

You can use the following command to find the pid of the process:
```sh
ps -ef | grep mongod
```
To kill the process, you can use this command:
```sh
kill <pid>
```

**Answer**:
```sh
mongod --port 27000 --dbpath=/data/db/ --bind_ip 192.168.103.100,localhost
```
5a21c6dd403b6546001e79c0

## Lab - Configuration File
**Problem**:
In this lab, you're going to launch a mongod instance in the vagrant environment with the same exact settings as the previous lab. However this time, those settings will be defined in a configuration file instead of the command line. It is required for this lab that you use the YAML format to construct this config file.

As a reminder, here are the requirements of your mongod instance:
- run on port 27000
- data files are stored in /data/db/
- listens to connections from the IP address 192.168.103.100 and localhost
- authentication is enabled
If you created the user from the previous lab, you don't need to create any new users. If you did not create the user, do so now. Here are the requirements for that user:
- Role: root on admin database
- Username: m103-admin
- Password: m103-pass.
When your config file is complete, launch mongod with the --config <config_filepath> command line option with the filepath to your config file in place of config_filepath (you can also use the -f option instead of --config).

When you're finished, run the following validation script in your vagrant and outside the mongo shell and enter the validation key you receive below. If you receive an error, it should give you some idea of what went wrong.
```sh
vagrant@m103:~$ validate_lab_configuration_file
```

**Answer**:
```yaml
storage:
  dbPath: /data/db/
net:
  bindIp: 192.168.103.100,localhost
  port: 27000
```
5a2f0e41ae3c4e2f7427ee8f

## Lab - Change the Default DB Path
**Problem**:
In this lab, you're going to edit the config file from the previous lab to include a different DB path than the default path /data/db. Mongod will now store data files in this new directory instead.

Using what you know about the configuration file and Linux user groups, please complete the following:
- create a new folder /var/mongodb/db/ and allow mongod to write files to this directory
  - create this directory with sudo, because /var is owned by root
  - use chown to change the owner of this directory to vagrant:vagrant
- edit your config file to use this new directory as the dbpath
Here are the updated requirements for your mongod instance:
- runs on port 27000
- stores its data files in /var/mongodb/db/
- listens to connections from the IP address 192.168.103.100 and localhost
- uses authentication
Now that your config file has changed, you have to restart mongod so the server will reflect those changes. As a reminder, here is the way to safely shutdown from the mongo shell:
```mongo
use admin
db.shutdownServer()
quit()
```
Once your mongod is safely stopped, you can launch it again with your new config file.

We could have kept the previous DB and users, however in this lab we will start with a new empty database directory, meaning empty database.

Let's recreate the user m103-admin with the same requirements as earlier, as we will need this user for the validation scripts and later tasks.
- Role: root on admin database
- Username: m103-admin
- Password: m103-pass
When you're finished, run the following validation script in your vagrant and outside the mongo shell and enter the validation key you receive below. If you receive an error, it should give you some idea of what went wrong.
```sh
vagrant@m103:~$ validate_lab_change_dbpath
```

**Answer**: 5a2f973bcb6b357b57e6bf43

## Lab - Logging to a Different Facility
**Problem**:

By default, mongod sends diagnostic logging information to the standard output, occupying the terminal window where mongod was started. In this lab, you will tell mongod to send those logs to a file so you can fork the mongod process and continue to use the terminal window where mongod was started. You'll also change some of the default log settings.

Your task for this lab is to change the config file such that:

mongod sends logs to /var/mongodb/db/mongod.log
mongod is forked and run as a daemon (this will not work without a logpath)
any query that takes 50ms or longer is logged (remember to specify this in the configuration file!)
Note: Using db.setProfilingLevel() will not work for this lab, because this command will not persist data in the config file - if the mongod process shuts down, such as during a maintenance procedure, the profiling level set with db.setProfilingLevel() will be lost.

All of the other information in your config file should stay the same as in the previous lab.

When you're finished, run the following validation script in your vagrant and outside the mongo shell and enter the validation key you receive below. If you receive an error, it should give you some idea of what went wrong.
```sh
vagrant@m103:~$ validate_lab_different_logpath
```

**Answer**:
```yaml
storage:
  dbPath: /var/mongodb/db/
net:
  bindIp: 192.168.103.100,localhost
  port: 27000
systemLog:
  destination: file
  path: "/var/mongodb/db/mongod.log"
  logAppend: true
operationProfiling:
  mode: slowOp
  slowOpThresholdMs: 50
processManagement:
  fork: true
```
5a32e5835d7a25685155aa61

## Lab - Creating First Application User
**Problem**:

In the first lab, you created a user with the root role on the admin database. The requirements are listed here:
- run on port 27000
- data files are stored in /var/mongodb/db/
- listens to connections from the IP address 192.168.103.100 and localhost
- authentication is enabled
- root user on admin database with username: m103-admin and password: m103-pass
The root role is one of the most powerful roles in a Mongo cluster, and has many privileges which are never used by a typical application. In this lab, you will create a new user for an application that has the readWrite role, because the application does not need to monitor the cluster or create users - it only needs to read and write data.

The requirements for this new user are:
- Role: readWrite on applicationData database
- Authentication source: admin
- Username: m103-application-user
- Password: m103-application-pass
You don't need to make any changes to your mongod configuration, but it must be running with authentication enabled. If your configuration does not use authentication, this lab may fail to validate.

When you're finished, run the following validation script in your vagrant and outside the mongo shell and enter the validation key you receive below. If you receive an error, it should give you some idea of what went wrong.
```sh
vagrant@m103:~$ validate_lab_first_application_user
```

**Answer**:
```yaml
storage:
  dbPath: /var/mongodb/db/
net:
  bindIp: 192.168.103.100,localhost
  port: 27000
systemLog:
  destination: file
  path: "/var/mongodb/db/mongod.log"
  logAppend: true
operationProfiling:
  mode: slowOp
  slowOpThresholdMs: 50
processManagement:
  fork: true
security:
  authorization: enabled
```
```js
use admin
db.createUser({user: "m103-application-user", pwd: "m103-application-pass", roles: [{db: "applicationData", role: "readWrite"}]})
```

## Lab - Importing a Dataset
**Problem**:
Now that you have some background about MongoDB's server tools, use mongoimport to import a JSON dataset into MongoDB. You can find the dataset inside the Vagrant box in /dataset/products.json, or in the lesson handout.

Import the whole dataset with your application's user m103-application-user into a collection called products, in the database applicationData.

When you're finished, run the following validation script in your vagrant and outside the mongo shell and enter the validation key you receive below. If you receive an error, it should give you some idea of what went wrong.
```sh
vagrant@m103:~$ validate_lab_import_dataset
```

**Answer**:
```sh
mongoimport --port 27000 -d applicationData /dataset/products.json -u m103-application-user
```
5a383323ba6dbcf3cbcaec97