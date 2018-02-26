#include "headers/factorial.h"
int factorial(void)
{
  int number;
  printf("FACTORIALIZE : ");
  scanf("%d", &number);

  printf("You entered: %d\n", number );

  int new = fact(number);

  printf("ANSWER: %d", new );


}
