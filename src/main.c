/*
	GNL_TESTER (tester for 42 project get_next_line)
   	Copyright (C) 2021  Will Maguire

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>
*/

#include "../include/gnl_tester.h"
#include "../../get_next_line/get_next_line.h"

int main(void) {
	int	fd;

	printf("=== GET_NEXT_LINE_TESTER ===\n");
	fd = open("testfiles/testfile1", O_RDONLY);
	for (int i = 0; i < 8; i++)
		printf("%s", get_next_line(fd));
	close(fd);
	printf("\n=== TESTING SECOND FILE ===\n");
	fd = open("testfiles/testfile2", O_RDONLY);
	for (int i = 0; i < 8; i++)
		printf("%s", get_next_line(fd));
	close(fd);
	printf("\n=== TESTING EMPTY FILE ===\n");
	fd = open("testfiles/testfile3", O_RDONLY);
	for (int i = 0; i < 2; i++)
		printf("%s", get_next_line(fd));
	close(fd);
	printf("\n=== TESTING FILE WITHOUT NEWLINE ===\n");
	fd = open("testfiles/testfile4", O_RDONLY);
	for (int i = 0; i < 2; i++)
		printf("%s", get_next_line(fd));
}
