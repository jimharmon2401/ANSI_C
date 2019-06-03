/* Illustrate static and automatic variables */
#include<stdio.h>
void auto_static(void)
{
  int auto_variable = 1;
  static int static_variable = 1;

  printf("automatic = %i, static = %i\n", 
    auto_variable, static_variable);

  ++auto_variable;
  ++static_variable;
}

int main()
{
  int i;
  void auto_static(void);

  for(i = 0; i < 5; ++i)
    auto_static();

  return 0;
}