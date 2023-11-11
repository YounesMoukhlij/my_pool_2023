#include <stdio.h>

unsigned char rev_bits(unsigned char o)
{
    return ((o >> 4) | (o << 4));
    
}

int main()
{
    printf("%d", rev_bits(2));
}