main: main.o 
	g++ --std=c++11 main.o -o main
main.o: main.cc
	g++ -c main.cc
clean: 
	rm *.o main.cc main
run: 
	./main 
