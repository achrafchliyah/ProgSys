#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
void handl(int sig)
{ printf("Message recu du fils %d\n",sig);
}
int main(int argc, char const *argv[]){
	int pid;
	if ((pid=fork()) == 0){
			printf("je suis le processus fils ayant le pid= %d\n", pid);
		}
	else{
		signal(SIGCHLD,handl);
		printf("%d je suis le pere du processus fils ayant le pid= %d\n", getpid(), pid);
		wait(NULL);
		}
	}