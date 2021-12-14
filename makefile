Object = useComplexe.o complexe.o

CC = gcc

Flag = -Wall -g

useComplexe : $(Object)
	$(CC) $(Flag) $(Object) -o useComplexe -lm
	
useComplexe.o : useComplexe.c Complexe.h
	$(CC) $(Flag) -c useComplexe.c
	
Complexe.o : complexe.c Complexe.h
	$(CC) $(Flag) -c complexe.c
	
