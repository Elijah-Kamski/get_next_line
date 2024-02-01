#include "../inc/get_next_line_bonus.h"

int main(void)
{
    int fd = open("./test_main/file.txt", 0);
	int fd2 = open("./test_main/file2.txt", 0);
    printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd2));
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd2));
}
