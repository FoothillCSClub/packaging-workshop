all: build

build:
		clang -pedantic -Wall -lm -lstdc++ -o example ./src/main.cpp ./src/eratosthenes.cpp -I ./include/
clean:
		rm *o build
