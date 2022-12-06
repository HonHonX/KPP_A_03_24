default: getraenkeautomat

getraenkeautomat.o: getraenkeautomat.c
	gcc -c getraenkeautomat.c -o getraenkeautomat.o

getraenkeautomat: getraenkeautomat.o
	gcc getraenkeautomat.o -o getraenkeautomat

clean:
	-rm -f getraenkeautomat.o
	-rm -f getraenkeautomat
