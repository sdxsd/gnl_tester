INCLUDES = include/gnl_tester.h
FILES = src/$(wildcard .c)
O_FILES = src/$(wildcard .o)
TARGET = gnl_tester
GET_NEXT_LINE_DIR = ../get_next_line/

%.o: %.c
	$(CC) $(CFLAGS) $(TARGET)

get_next_line:
