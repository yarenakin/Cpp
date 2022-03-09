/*
check bit 
by Yaren AKIN
09.03.2022
*/

#include <stdio.h>
#include <math.h>

void check(int val,int index)
{
    if (val & (1 << index))
    /* n. bit 1 */
    printf("%d. bit değeri 1 ",index);
else
   /* n. bit 0 */
    printf("%d. bit değeri 0 ",index);
}
int main(void)
{
    check(65,2); //2. bit değerini yazdırır. "0"
}
