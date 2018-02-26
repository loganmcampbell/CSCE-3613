int gcd(void)
{
  int n1,n2,gcd;
  printf("ENTER IN THE 2 NUMBERS : ");
  scanf("%d %d", &n1, &n2);

  for (int i = 1; i <= n1 && i <= n2; i++)
  {
    // USE MODULUS to FIND WHAT DIVDES EACH OTHER EQUALLY
    if (n1 % i == 0 && n2 % i == 0)
    {
        gcd = i;
    }
  }
  printf("%d is the greastest common factor", gcd);
  printf("\n");

}
