INCLUDES = include/gnl_tester.h
CC = clang
FILES = src/main.c
CFLAGS = -g -o
TARGET = gnl_tester
GET_NEXT_LINE_DIR = ../get_next_line/
GET_NEXT_LINE_PROG = ../get_next_line/get_next_line.a

all: $(TARGET) run

run:
	./$(TARGET)

get_next_line:
	@make -C $(GET_NEXT_LINE_DIR)
	@cp $(GET_NEXT_LINE_PROG) .

$(TARGET): get_next_line
	@$(CC) $(FILES) get_next_line.a $(CFLAGS) $(TARGET)

re: fclean $(TARGET)

fclean:
	rm -f $(TARGET)
	rm -f get_next_line.a
	rm -f $(wildcard ../get_next_line/*.o)
	rm -f $(GET_NEXT_LINE_PROG)
	rm -rfv gnl_tester.dSYM
