BINARY := a.out
CFLAGS := -O -Wall -W -pedantic -ansi 

$(BINARY): main.c
	gcc $(CFLAGS) -o $@ $<

test: test.exp $(BINARY)
	expect test.exp ./$(BINARY)

clean:
	rm $(BINARY)

.PHONY: test clean