/*
bitsel maskeleme işlemi (bitmask)
by Yaren AKIN
09.03.2022
*/

#include <stdio.h>
#include <math.h>

void mask(int val,int index)
{
    val |= 1 << index;
    printf("val = %d\n", val);
}
int main(void)
{
    mask(65,5); //65 sayısının 5. biti maskelendi.
}
