tp1: date.o livre.o tp1.o
	g++ date.o tp1.o livre.o -o tp1

date.o: date.h date.cpp
	g++ -c date.cpp 

livre.o: livre.h livre.cpp
	g++ -c livre.cpp

tp1.o: tp1.cpp
	g++ -c tp1.cpp 

clean:
	rm -f *.o all
