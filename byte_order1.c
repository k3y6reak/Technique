#include <stdio.h>

int swap(int a)
{
    return ((a&0xff00) >> 8) + ((a&0x00ff) << 8);
}


int main(void)
{
    int a = 0x1234;

    printf("%x \n", swap(a));
    return 0;
}
