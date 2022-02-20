#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main (void)
{ char *nom_tube = "tube_test2";
mkfifo (nom_tube, 0644);
printf("FIFO named '%s' is created successfully.",nom_tube);
return (0);
}

