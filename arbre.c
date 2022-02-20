#include<unistd.h>
#include <stdio.h>
int main(void){
if(fork()){
    printf("id : %d\n", getpid());
    fork()&&(fork()||(fork()&&fork()));
    printf("id : %d\n", getpid());
    }
else
    fork();
    printf("id : %d\n", getpid());
    sleep(2);
    return 0;

}
