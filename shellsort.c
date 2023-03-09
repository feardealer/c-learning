#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 66, 78, 34, 21};
  shellsort(arr);
  
  int i;
  for (i = 0; i <= sizeof(arr); ++i)
    printf("%d\n", arr[i]);
  return 0;
}
void shellsort (int v[], int n)
{
  int gap, i, j, temp;
  for (gap = n/2; gap > 0; gap /= 2)
    for (i = gap; i < n; i++)
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j + gap];
        v[j + gap] = temp;
      }
}
