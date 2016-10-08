outputTest: main.o ObjectImitation.o
	gcc -Wall -g main.o ObjectImitation.o -o output.out
	make removeO

outputTest.o: main.c ObjectImitation.c
	gcc -Wall -g main.c ObjectImitation.c -c

clean:
	rm -f *.o output.out

removeO:
	rm -f *.o