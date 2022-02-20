#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
void main(){
char *cmd[] = {"who", "ls", "date"};
int i;
while( 1 )
{
printf( "0=who 1=ls 2=date 4=quiter: " );

scanf( "%d", &i );
if (i==4)exit(0);
if(fork() == 0){
 /* child */
execlp( cmd[i], cmd[i], (char *)0 );
printf( "execlp failed\n" );
exit(1);
}
else{
 /* parent */
wait( (int *)0 );
printf( "child finished\n" );
}
} /* while */
} /* main */
