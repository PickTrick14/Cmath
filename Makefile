CC= gcc
CFLAGS= -Wall -Werror -Wextra -std=c11 -g
CHECKFLAG= -lcheck -lm -lsubunit -lgcov
MATH=./funk/*.c
TEST=./funk_tests/*.c
TEST_FLAGS = -lcheck -lpthread -lm  -lsubunit

all: clean math.a test gcov_report

math.a: clean
	$(CC) $(CFLAGS) -c $(MATH)
	ar rcs math.a ./*.o
	rm *.o

test: math.a
	$(CC) $(CFLAGS) $(TEST) $^ $(TEST_FLAGS) -o test_main

gcov_report: clean math.a
	$(CC) $(CFLAGS) --coverage $(MATH) $(TEST) $(TEST_FLAGS) -o test 
	./test
	lcov -t "test" -o report.info -c -d .
	genhtml -o report report.info
	rm -rf *.o *.a  *.gch *.gcno test
	
clean:
	rm -rf *.o *.a test.info test *.gcda *gcno report report.info test_main