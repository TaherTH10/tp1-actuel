tp1: date.o tp1.o
	g++ date.o tp1.o -o tp1

date.o: date.h date.cpp
	g++ -c date.cpp 

tp1.o: tp1.cpp
	g++ -c tp1.cpp 

clean:
	rm -f *.o all
al