.PHONY:build clean rebuild run greet debug realese
greet:
	@echo "Terminating make - please specify target explicitly"
	@echo "    build   : fast rebuild / build"
	@echo "    rebuild : full rebuild"
	@echo "    run     : run after fast rebuild / build"
	@echo "    clean   : perform full clean"
build: create
rebuild:clean create
run:build
	./lab1

debug: build
	./lab1 -d

realese: build
	./lab1 -r

clean:
	rm -rvf *.o lab1

main.o:main.c process.h realeseAndDebug.h memory.h
	gcc -c -o main.o main.c
process.o:process.c Typedef.h
	gcc -c -o process.o process.c
realeseAndDebug.o: realeseAndDebug.c input.h process.h pretty_print.h
	gcc -c -o realeseAndDebug.o realeseAndDebug.c
memory.o: memory.c Typedef.h
	gcc -c -o memory.o memory.c
input.o:input.c Typedef.h
	gcc -c -o input.o input.c
pretty_print.o:pretty_print.c Typedef.h
	gcc -c -o pretty_print.o pretty_print.c
Typedef.o:Typedef.c Typedef.h
	gcc -c -o Typedef.o Typedef.c
create:main.o process.o realeseAndDebug.o memory.o input.o pretty_print.o Typedef.o
	gcc -o lab1 main.o process.o realeseAndDebug.o memory.o input.o pretty_print.o Typedef.o
