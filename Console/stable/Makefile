all: modicum

modicum: ModParser.tab.o lex.yy.o Graphics.o Trig.o CoreEvaluate.o
	gcc -std=gnu99 ModParser.tab.c lex.yy.c Graphics.c Trig.c CoreEvaluate.c -lm -o modicum

ModParser.tab.o: ModParser.tab.c
	gcc -c -std=gnu99 ModParser.tab.c

lex.yy.o: lex.yy.c
	gcc -c -std=gnu99 -lm lex.yy.c

Graphics.o: Graphics.c
	gcc -c -std=gnu99 Graphics.c

Trig.o: Trig.c
	gcc -c -std=gnu99 -lm Trig.c

CoreEvaluate.o: CoreEvaluate.c
	gcc -c -std=gnu99 -lm CoreEvaluate.c

clean:
	rm *.o
