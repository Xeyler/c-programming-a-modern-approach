BINARY := a.out

$(BINARY): main.c
	gcc -O -Wall -W -pedantic -ansi -o $@ $<

test: test.exp $(BINARY)
	expect test.exp ./$(BINARY)

clean:
	rm $(BINARY)

.PHONY: test clean