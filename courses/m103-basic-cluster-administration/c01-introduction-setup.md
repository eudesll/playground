# 01 Introduction & Setup

## Lab: Setting Up the Vagrant Environment
**Problem**:

In order to effectively learn from this class, you should be completing problems in a real MongoDB cluster. To do this, we will use a development environment called Vagrant that makes it easy to provision a virtual machine with Virtualbox.

We first need to download Vagrant and Virtualbox. Vagrant requires that we use the latest version of Virtualbox (in the link), so click the link and download the correct option for your operating system.

Now, download the handout above and create a folder in your home directory called m103. Copy the handout to this directory and then navigate to the handout directory m103-vagrant-env in your terminal. Bring up your Vagrant environment by running these commands (this will take a few minutes):
```sh
vagrant up --provision
```
This command brings up your virtual machine, if it's not already running. It also builds directories in the VM and downloads all the software and validation scripts necessary to complete this course.
```sh
vagrant ssh
```
This command connects to your Vagrant instance using SSH. If it prompts you for a username/password, use the username vagrant and the password vagrant.

To validate that your box is running properly, execute the following command from the Vagrant command line:
```sh
vagrant@m103:~$ validate_box
```

**Answer**: 6445a3f8b6f1cc5873cf1ac94194903444602708d4eb189d42b6e65ca594d80d
