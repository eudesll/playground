docker container run -d -p 80:80 nginx
docker container run -d -p 3306:3306 --env MYSQL_RANDOM_ROOT_PASSWORD = yes mysql 
docker container run -d -p 8080:80 httpd

docker container logs mysql 

docker container stop <ids> 
docker container rm <ids>

docker container ls