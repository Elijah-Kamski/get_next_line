#include "../inc/get_next_line.h"

int main(void)
{
    int fd = open("./test_main/file.txt", 0);
    printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
}
