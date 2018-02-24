int gn3(void)
{
  double n1, n2, n3;
  printf("ENTER 3 DIFFERENT #'s': ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);

  if( n1>=n2 && n1>=n3 )
      printf("%.2f is the greatest number.", n1);

  if( n2>=n1 && n2>=n3 )
      printf("%.2f is the greatest number.", n2);

  if( n3>=n1 && n3>=n2 )
      printf("%.2f is the greatest number.", n3);

printf("\n");
}
