#ifndef factorial_h
#define factorial_h
int fact (int num)
{
  if (num <= 1)
  {
    return 1;
  }
    return num * (fact(num-1));
}

#endif //factorial_h
