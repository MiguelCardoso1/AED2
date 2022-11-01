/******************************************************************************

Miguel Cardoso Malton - 31/10/22 - Recursividade - exercicio Fatorial

*******************************************************************************/
#include <stdio.h>

int
fatorial (int n)
{
  int fat;

  if (n == 0)
    {
      fat = 1;
    }
  else
    {
      fat = n * fatorial (n - 1);
    }

  return fat;
}

int
main ()
{
  int n = fatorial (4);

  printf ("\n O fatorial de 4 C) %d", n);

  return 0;
}
