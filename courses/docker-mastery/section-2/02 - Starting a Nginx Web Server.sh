docker container run --publish 80:80 nginx
  docker container run # starts a new container from an image

  # 1 - Downloaded image 'nginx' from Docker Hub
  # 2 - Started a new container from that image
  # 3 - Opened port 80 on the host IP
  # 4 - Routes that traffic to the container IP, port 80

docker container ls # list running containers (docker ps)
docker container stop <container_id> # stops the container process but doens't remove it (docker stop)

docker container start # starts an existing stopped container

docker container top <container_name> # shows container processes
