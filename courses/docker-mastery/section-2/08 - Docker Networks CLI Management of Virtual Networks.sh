docker network ls # show networks
docker network inspect # inspect a network
docker network create --driver # create a network
docker network connect # attach a network to container
docker network disconnect # detach a network from container

# bridge - Default docker virtual network, which is NAT'ed behind the Host IP

docker network create my_app_net
docker container run -d --name new_nginx --network my_app_net nginx
docker network inspect my_app_net