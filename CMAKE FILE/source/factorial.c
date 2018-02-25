int factorial(void)
{
  int number;
  printf("FACTORIALIZE : ");
  scanf("%d", &number);

  printf("You entered: %d\n", number );

  int fact (int num)
  {
    if (num <= 1)
    {
      return 1;
    }
      return num * (fact(num-1));
  }

  int new = fact(number);

  printf("ANSWER: %d", new );


}
