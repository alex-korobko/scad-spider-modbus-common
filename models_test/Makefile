.PHONY: test clean

test:
	cmake -S . -B build && cmake --build build && cd build && ctest

clean:
	rm -rf build
