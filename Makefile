.PHONY: all clean test

all: bin/deposit-calc
test: bin/deposit-calc-test

bin/deposit-calc: build/src/main.o build/src/deposit.o src/deposit.h
	gcc -Wall -Werror build/src/main.o build/src/deposit.o -o bin/deposit-calc
build/src/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o
build/src/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o


clean:
	rm -f build/src/*.o build/test/*.o bin/deposit-calc bin/deposit-calc-test

bin/deposit-calc-test: build/src/deposit.o build/test/deposit_test.o build/test/main.o \
	build/test/validation_test.o src/deposit.h thirdparty/ctest.h
	gcc -Wall -Werror build/src/deposit.o build/test/deposit_test.o build/test/main.o \
	build/test/validation_test.o -o bin/deposit-calc-test
	./bin/deposit-calc-test

build/test/deposit_test.o: test/deposit_test.c src/deposit.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/deposit_test.c -o \
	build/test/deposit_test.o

build/test/main.o: test/main.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/main.c -o build/test/main.o

build/test/validation_test.o: test/validation_test.c src/deposit.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/validation_test.c -o \
	build/test/validation_test.o
