/*
+ ifadesini kullanmadan toplama işlemi yapmak
by Yaren AKIN
09.03.2022
*/
#include <stdio.h>
#include<stdlib.h> //for abs func

int x = 12;
int y = 10;

int main(void)
{
 // method 1
  printf("%d\n", x-(-y));

  // method 2
  printf("%d\n", -(-x-y));

  // method 3
  printf("%d\n", abs(-x-y));

  // method 4
  printf("%d", x-(~y)-1);

  return 0;
}
