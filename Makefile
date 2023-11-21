all: intrinsik_task

intrinsik_task: main.o
	g++ main.o -o intrinsik_task

main.o: main.cpp
	g++ -c -g -O3 -fverbose-asm main.cpp

clean:
	rm -rf *.o intrinsik_task
