#include <stdio.h>
 
int main()
{
  int c, n;
 
  printf("How many times you want to display it?\n");
  scanf("%d", &n);
 
  for (c=1; c<=n; c++)
     printf("Hello!\n");
 
  return 0;
}
