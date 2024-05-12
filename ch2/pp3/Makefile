BINARY := a.out
TEST_SCRIPT := test.tcl
CFLAGS := -O -Wall -W -pedantic -ansi 

$(BINARY): main.c
	gcc $(CFLAGS) -o $@ $<

test: $(TEST_SCRIPT) $(BINARY)
	expect $(TEST_SCRIPT) ./$(BINARY)

clean:
	rm $(BINARY)

.PHONY: test clean