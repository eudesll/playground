# 01 - Copying Files into a Running Container
curl localhost:80/page.html
docker container cp page.html elegant_noether:/usr/local/apache2/htdocs/
curl localhost:80/page.html

# 02 - Copying Files Through Dockerfile Instructions
FROM httpd:2.4
EXPOSE 80
RUN apt-get update && apt-get install -y fortunes

LABEL maintainer="moby-dock@example.com"
COPY page.html /usr/local/apache2/htdocs/

# 03 - Testing that copying in the Dockerfile works
docker run --detach -p 80:80 web-server:1.1
curl localhost:80/page.html

# 04 - Creating a Volume
docker run -d -p 80:80 -v /my-files:/usr/local/apache2/htdocs web-server:1.1
docker container exec -it elegant_noether /bin/bash
cd /usr/local/apache2/htdocs
ls -la