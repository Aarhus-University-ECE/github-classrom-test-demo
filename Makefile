all: build

build:
	cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
	cmake --build build --parallel $(shell nproc)


exercise-1: build
	./build/exercise-1

exercise-2: build
	./build/exercise-2

test-exercise-1: build
	./build/exercise-1-test

test-exercise-2: build

	./build/exercise-2-test

clean:
	rm -rf build
