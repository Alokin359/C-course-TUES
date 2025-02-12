all: calcroots.exe app.exe

app.exe: app.o calcroots.o
	gcc -o app.exe app.o calcroots.o -lm

calcroots.exe: app.o calcroots.o
	gcc -o calcroots.exe app.o calcroots.o -lm

app.o: app.c calcroots.h
	gcc -c app.c

calcroots.o: calcroots.c calcroots.h
	gcc -c calcroots.c

clean:
	del /f /q *.o *.exe
