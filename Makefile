dosInterpreter: dosInterpreter.o dosCmd.o
	xlc -q64 -o dosInterpreter dosInterpreter.o dosCmd.o

dosInterpreter.o: dosInterpreter.c
	xlc -q64 -c -g dosInterpreter.c

dosCmd.o: dosCmd.c
	xlc -q64 -c -g dosCmd.c

.PHONY: clean
clean:
	rm -f dosInterpreter *.o *.dbg
