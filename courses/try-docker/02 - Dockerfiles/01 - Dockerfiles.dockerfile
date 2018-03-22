# 01 - Your First Dockerfile
FROM httpd:2.4
EXPOSE 80
RUN apt-get update && apt-get install -y fortunes
LABEL maintainer="moby-dock@example.com"

# 02 - Building an Image From a Dockerfile
#docker image build --tag web-server:1.0 .
#docker container ls

# 03 - Running a Container From a Custom Image
#docker run -p 80:80 web-server:1.0