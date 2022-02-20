#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void handler(int);
int nsig[NSIG];
int main(void)
{ int s;
 for (s = 1; s < NSIG; s++)
 { if (signal(s, handler) == SIG_ERR)
 fprintf(stdout, "Je ne peux pas attraper signal no %d\n", s);
 nsig[s] = 0;
 }
 while (1) pause();
}
void handler(int s)
{ printf("Signal %d recu %d fois\n", s, ++nsig[s]);
}
