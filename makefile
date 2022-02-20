#Object = useComplexe.o complexe.o

#CC = gcc

#Flag = -Wall -g

#useComplexe : $(Object)
#	$(CC) $(Flag) $(Object) -o useComplexe -lm
	
#useComplexe.o : useComplexe.c Complexe.h
#	$(CC) $(Flag) -c useComplexe.c
	
#Complexe.o : complexe.c Complexe.h
#	$(CC) $(Flag) -c complexe.c
	
	
#all : $(APPLI) clean
#$(APPLI) : $(APPLI).o complexe.o
#	gcc -Wall $(APPLI).o complexe.o -o $(APPLI)
#$(APPLI).o : $(APPLI).c complexe.h
#	gcc -Wall -c $(APPLI).c
#complexe.o : complexe.c complexe.h 
#	gcc -Wall -c complexe.c

#clean : $(APPLI)
#	rm -f *.o


compile = gcc -Wall -03
objet = $(compile) -c
executable = $(compile) -o
objetsFiles = complexe.o $(APPLI).o

all: $(APPLI) clean

$(APPLI): $(objetsFiles)
	$(compile) $(objetsFiles) -o $(APPLI) -lm
          
$(APPLI).o: $(APPLI).c Complexe.h
		$(objet) $(APPLI).c

complexe.o: complexe.c Complexe.h
		$(objet) complexe.c	
