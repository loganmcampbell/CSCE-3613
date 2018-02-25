int prime(void)
{
  int num;

  printf("GENERATE PRIME NUMBERS FROM : ");
  scanf("%d", &num);
  printf("You entered: %d\n", num);

  for (int x = 2; x <num; x++)
  {
    if (num % x != 0)
    {
      printf("PRIME # [%d]\n", x);
    }

  }
}
