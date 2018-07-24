#include <stdio.h>

int swap(int a)
{
    return ((a&0xff000000) >>24) + ((a&0x00ff0000)>>8) + ((a&0x0000ff00) <<8) + ((a&0x000000ff)<<24);
}

int main(void)
{
    int a = 0x12345678;
    printf("%08x\n", swap(a));

    return 0;
}
