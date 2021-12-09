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

The definition of Free Software is as follows:
	- The freedom to run the program, for any purpose.
	- The freedom to study how the program works, and adapt it to your needs.
	- The freedom to redistribute copies so you can help your neighbor.
	- The freedom to improve the program, and release
	  your improvements to the public, so that the whole community benefits.

A program is free software if users have all of these freedoms.
*/

#include "../include/gnl_tester.h"
#include "../../get_next_line/get_next_line.h"

int main(void) {
	int	fd;

	printf("=== GET_NEXT_LINE_TESTER ===\n");
	fd = open("testfiles/testfile1", O_RDONLY);
	for (int i = 0; i < 8; i++) {
		char *s = get_next_line(fd);
		printf("%s", s);
		free(s);
	}
	close(fd);
	printf("\n=== TESTING SECOND FILE ===\n");
	fd = open("testfiles/testfile2", O_RDONLY);
	for (int i = 0; i < 8; i++) {
		char *c = get_next_line(fd);
		printf("%s", c);
		free(c);
	}
	close(fd);
	printf("\n=== TESTING EMPTY FILE ===\n");
	fd = open("testfiles/testfile3", O_RDONLY);
	for (int i = 0; i < 2; i++) {
		char *b = get_next_line(fd);
		printf("%s", b);
		free(b);
	}
	close(fd);
	printf("\n=== TESTING FILE WITHOUT NEWLINE ===\n");
	fd = open("testfiles/testfile4", O_RDONLY);
	for (int i = 0; i < 2; i++) {
		char *g = get_next_line(fd);
		printf("%s", g);
		free(g);
	}
	return (0);
}
