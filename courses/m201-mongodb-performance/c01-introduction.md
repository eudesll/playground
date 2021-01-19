# 01 Introduction

## Lab 1.1: Install Course Dependencies
**Problem**:
Welcome to your first lab in M201! In this lab you're going to install MongoDB Enterprise 3.4 and import the people dataset.

You can download the people.json dataset from this lesson.

While MongoDB Enterprise is available as part of the MongoDB Enterprise Advanced subscription it's permitted to be run outside of production environments.

In order to install MongoDB you're going to need to head over to our online documentation and follow the instructions on installing MongoDB.

After you've successfully installed MongoDB you should start a standalone server. Once your server is up and running you should be able to download the people.json handout and import it with mongoimport. Make sure to import the documents into the m201 database and the people collection.

To confirm that you've successfully completed these steps run the following query on the m201 database from the mongo shell and paste its output into the submission area below:
```json
db.people.count({ "email" : {"$exists": 1} })
```

**Answer**: 50474

## Lab 1.2: Install MongoDB Compass
**Problem**:
For this optional lab you're going to install the latest stable version of MongoDB Compass. This lab is optional because Compass doesn't currently support all Linux distributions.

While Compass, like MongoDB Enterprise, Compass is available as part of the MongoDB Enterprise Advanced subscription it's permitted to be ran outside of production environments.

In order to install Compass you're going to need to head over to the MongoDB Download Center. From there the installation should be fairly straightforward.

Once you've successfully installed Compass answer the question below:

Did you download and install Compass?

**Answer**: Yes, I did!
