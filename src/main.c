#include "../include/gnl_tester.h"
#include "../../get_next_line/get_next_line.h"

int main(void) {
	int	fd;

	printf("=== GET_NEXT_LINE_TESTER ===\n");
	fd = open("testfiles/testfile1", O_RDONLY);
	for (int i = 0; i < 10; i++)
		printf("%s", get_next_line(fd));
	close(fd);
	printf("=== TESTING SECOND FILE ===\n");
	fd = open("testfiles/testfile2", O_RDONLY);
	for (int i = 0; i < 10; i++)
		printf("%s", get_next_line(fd));
}
