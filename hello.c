#include<stdio.h>
void fun1()
{
  printf ("fun1()\n");
}
void funA()
{
  printf ("funA()\n");
}
int main()
{
  printf("Hello world \n");
  printf("How are you! \n");
  fun1();
  printf("Add funA and funB from here \n");
  funA();
  return 0;
}
