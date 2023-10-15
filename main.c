#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <limits.h>
#include <time.h>


int func_do(int a, int b)
{

    return a + b;
}

int main(int argc, char** argv){

    //int fd = open(argv[1], O_RDONLY);
    int result;

    long before = time(NULL);
    result = func_do(5,4);
    long after = time(NULL);

    printf("%ld seconds elapsed\n", after-before);

}

