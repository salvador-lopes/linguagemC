#include <stdio.h>
main ()
{

  int positivo;
  puts ("entre com um numero positivo");
  scanf ("%i", &positivo);
  if (positivo <= 0)
    {
      puts ("o numero precisava ser positivo e maior que zero, tchau");

    }
  else
    {
      printf ("Vc digitou %i", positivo);

    }

}
