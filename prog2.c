#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
int compt=0;
void Recuperation(int sig) {
if (compt == 5) {
        printf("\t\tFin du programme !!\n");
        exit(0);
    } else {
        printf("\tOK je recupere le signal SIGINT\n");
        compt++;
    }
}
int main() {
signal(SIGINT,Recuperation);
printf("Taper 5 ^C pour arreter le programme\n");
while(1);
}
