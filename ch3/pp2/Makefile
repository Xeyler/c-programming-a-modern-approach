BINARY := a.out
TEST_SCRIPT := test.tcl
CFLAGS := -O -Wall -W -pedantic -ansi 

$(BINARY): main.c
	gcc $(CFLAGS) -o $@ $<

clean:
	rm $(BINARY)

.PHONY: test clean