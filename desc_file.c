#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void main(){
//int fd = open("tutu", O_WRONLY|O_CREAT);
//close(STDOUT_FILENO);
//dup(fd);
//close(fd);
//printf("test de sortie standart");

int fd = open("tutu",O_WRONLY |O_CREAT);
dup2(fd,STDOUT_FILENO); close(fd);
printf("tutu");
}
