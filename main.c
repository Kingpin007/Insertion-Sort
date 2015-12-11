#include <stdio.h>

void insertionSort(int a[],int n);

int main()
{
  int a[10] = {9,7,5,3,1,8,6,2,0,4};
  insertionSort(a,10);
  int i=0;
  for(i=0;i<10;i++)
    printf("%d ",a[i]);
  return 0;
}

void insertionSort(int a[], int n)
{
  int i=0,key,temp,j;
  for(i=1;i<n;i++)
  {
    key = a[i];
    j=i-1;
    while(j>=0 &&key<a[j])
    {
      a[j+1] = a[j];
      j--;
    }
    a[j+1]=key;
  }
}
