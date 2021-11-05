INCLUDES = include/gnl_tester.h
FILES = src/$(wildcard .c)
O_FILES = src/$(wildcard .o)
TARGET = gnl_tester.out

%.o: %.c
	$(CC) $(CFLAGS) $(TARGET)