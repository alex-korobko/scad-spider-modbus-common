.PHONY: build test clean

build:
	cmake -S . -B build && cmake --build build --verbose
test: build
	cd build && ctest

clean:
	rm -rf build
