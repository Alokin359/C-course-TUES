all: help.exe string_length.exe string_concat.exe string_compare.exe

string_utils.o: string_utils.c string_utils.h
	gcc -c string_utils.c -o string_utils.o

help.exe: help.c
	gcc help.c -o help.exe

string_length.exe: string_length.c string_utils.o
	gcc string_length.c string_utils.o -o string_length.exe

string_concat.exe: string_concat.c string_utils.o
	gcc string_concat.c string_utils.o -o string_concat.exe

string_compare.exe: string_compare.c string_utils.o
	gcc string_compare.c string_utils.o -o string_compare.exe

clean:
	del *.exe *.o