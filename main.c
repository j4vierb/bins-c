#include<stdio.h>

int bins(int a[], int x, int n)
{
  int l = 0, h = n - 1;
  while(l <= h)
  {
    int mid = (l + h) / 2;
    if(a[mid] > x)
      h = mid - 1;
    else if(a[mid] < x)
      l = mid + 1;
    else if(a[mid] == x)
      return mid;
  }

  return -1;
}

int main()
{
  int bins(int [], int, int);
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 10;

  int res = bins(a, 9, n);
  if(res > 0)
    printf("answer: %d\n", res);
  else
    printf("the element isn't in the array\n");

  printf("hello world\n");
  return 0;
}
