# 01 - Running a Container
docker container run httpd:2.4

# 02 - Mapping Ports 1
docker container run -p 80:80 httpd:2.4

# 03 - Mapping Ports 2
docker container run -p 9999:80 httpd:2.4

# 04 - Accessing a Container
docker container ls
docker container exec elegant_noether du -mh

# 05 - Attaching a Shell to a Container
docker container exec -it elegant_noether /bin/bash
du -mh

# 06 - Installing Things in Containers
docker container exec -it elegant_noether /bin/bash
apt-get install -y fortunes
/usr/games/fortune

# 07 - Update the ENV in a Container
docker container exec -it elegant_noether /bin/bash
PATH=$PATH:/usr/games/
export PATH
fortune