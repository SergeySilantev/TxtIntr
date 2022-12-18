sources = main.cpp

target = pract

cmp=g++

cmppar=02

all: compile
	$(cmp) $(sources) -o $(target)

compile:

	g++ -O2 main.cpp -o -DNDEBUG -Wall

clean:
	rm -rf *.0
run:
	main -h
	main -s 3 4
