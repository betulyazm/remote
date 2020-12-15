SRC := \
	lexer.c \
	parser.tab.c \
<<<<<<< HEAD
	typecheck.c \
	table.c \
=======
>>>>>>> 5bc3c3b290f0e2228f039ba62889af205e65914d
	ast.c \
	ast_printer.c \
	util.c \
	main.c

OBJ := $(SRC:%.c=%.o)

PRG := simplec

.PHONY: all ast clean

all: simplec

simplec: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

parser.tab.c: parser.y ast.c
	bison -d -v parser.y

lexer.c: lexer.l parser.tab.c
	flex -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) parser.tab.c parser.tab.h parser.output lexer.c simplec
