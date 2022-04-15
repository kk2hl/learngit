out:x.o y.o
	gcc -o out x.o y.o
x.o:a.c
	gcc -c -o x.o a.c
y.o:b.c
	gcc -c -o y.o b.c
clean:
		rm *.o out
