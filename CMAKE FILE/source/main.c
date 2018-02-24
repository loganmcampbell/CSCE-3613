#include <stdio.h>
#include "factorial.c"
#include "gcd.c"
#include "prime.c"
#include "gn3.c"
int main()
{
//  M E N U | I N T E R F A C E
//  ================================
    printf("W E L C O M E \n" );
    printf("---------------------------------\n");
    printf("[1]  FOR COMPUTING THE GCD\n");
    printf("[2]  FOR COMPUTING THE FACTORIAL\n");
    printf("[3]  FOR COMPUTING THE GREATEST NUMBER FROM 3 INTERGERS\n");
    printf("[4]  FOR FINDING ALL PRIME NUMBERS (SMALLER THAN INPUT INTEGER)\n");
    printf("[5]  TO EXIT\n\n");

    char done = 'f';
    while (done == 'f')
    {
      int i;
      printf("ENTER IN NUMBER : ");
      scanf("%d",&i );

      if ( i == 1)
      {
        printf("\nG R E A S T E S T | C O M M O N | F A C T O R \n");
        //function execute
        gcd();
      }
      else if ( i == 2)
      {
        printf("\nF A C T O R I A L \n");
        //function execute

      }
      else if (i == 3)
      {
        printf("\nG R E A S T E S T | # | F R O M | 3 | I N T E G E R S\n");
        //function execute
        gn3();
      }
      else if (i == 4)
      {
        printf("\nP R I M E | N U M B E R S | < I N P U T\n" );
        //function execute

      }
      else if (i == 5)
      {
        done = 't';
      }

    }
    return 0;
}
