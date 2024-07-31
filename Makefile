.PHONY: build test clean

build:
	cmake -S . -B build && cmake --build build
test: build
	cd build && ctest

clean:
	rm -rf build
