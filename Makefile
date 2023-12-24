all: rectangle

rectangle: main.o rectangle.o
	g++ main.o rectangle.o -o rectangle

main.o: main.cpp
	g++ -c main.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

clean:
	rm -rf *.o rectangle