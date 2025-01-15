tp1: date.o auteur.o tp1.o
	g++ date.o tp1.o auteur.o -o tp1

date.o: date.h date.cpp
	g++ -c date.cpp 

livre.o: auteur.o auteur.cpp
	g++ -c auteur.cpp

tp1.o: tp1.cpp
	g++ -c tp1.cpp 

clean:
	rm -f *.o all
