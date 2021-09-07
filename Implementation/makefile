main.exe: main.c src/foo.c
	gcc -Iinc ./src/foo.c ./main.c -o main.exe

run : main.exe
	./main.exe

clean: 
	rm *.exe
