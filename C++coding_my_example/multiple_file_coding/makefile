main: main.o Box.o 
	g++ --std=c++11 main.o Box.o -o main
main.o: main.cc
	g++ -c main.cc
Box.o: Box.cc
	g++ -c Box.cc
clean: 
	rm *.o main.cc main
run: 
	./main 
