#include "../include/gnl_tester.h"
#include "../../get_next_line/get_next_line.h"

int main(void) {
	int	fd;

	printf("=== GET_NEXT_LINE_TESTER ===\n");
	fd = open("testfiles/testfile1", O_RDONLY);
	printf("%d\n", fd);
	for (int i = 0; i < 5; i++)
		printf("%s", get_next_line(fd));
	return (0);
}
