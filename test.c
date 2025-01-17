#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

char *test()
{
    char stringout[BUFFER_SIZE];
    static int k;
    stringout[0] = 'h';
    stringout[1] = 'i';
    return ((char *)stringout);
}
int main()
{
    static int k;
    char *out = test();
    printf("%d", k);
}