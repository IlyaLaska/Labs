#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

/*/
  arr[0]+= arr[1];
  arr[1] = (arr[0]) - arr[1];
  arr[0] -= arr[1];
  //*/

int* quicksort(int *arr, int start, int end) {
  printf("Endssssssssss:\n");
    for(unsigned i = 0; i < 8; ++i) {
    printf("Array:%i", arr[i]);
  }
  //*/
  long long int qwe = 0;
  while(qwe != 500000000) {
    int k = 34646*28088;
    qwe++;
  }
  //*/
  printf("New step\n");
  printf("Start:%iEnd:%i\n", start, end);
  if (end <= 1) return arr;
  int divider = 0;
  int comparer = 0;
  int pivot = arr[end];
  for(unsigned i = 0; i < 8; ++i) {
    printf("Array:%i", arr[i]);
  }
  printf("\n");
  for(unsigned i = 0; i <= end; ++i) {
    printf("Array part:%i\n", arr[i]);
  }
  printf("start:%d\npivot:%d\nend:%d\n", start,  pivot, end);
  while(comparer <= end) {
    printf("%i\n", divider);
    if(arr[comparer] <= pivot) {
      if(comparer != 0) {
        arr[comparer] += arr[divider];
        arr[divider] = arr[comparer] - arr[divider];
        arr[comparer] -= arr[divider];
      }
      divider++;
      comparer++;
    } else {
      comparer++;
    }
  }
    /*/
    arr[end] += arr[divider];
    arr[divider] = arr[end] - arr[divider];
    arr[end] -= arr[divider];
    //*/

  printf("Divider:%i\n", divider);
  printf("Comparer:%i\n", comparer);
  printf("First part\n");
  quicksort(arr, start, divider-2);
  printf("Second part\n");
  //int middle = divider + 1;
  quicksort(arr, divider, end);
  return arr;
}

main() {
  int arr[8] = {2, 8, 7, 1, 3, 5, 6, 4};
  int length = sizeof(arr) / sizeof(arr[0]);
  printf("Len:%i\n", length);
  int start = 0;
  int end = length - 1;
  quicksort(arr, start, end);
  printf("Len:%i\n", length);
  for(unsigned i = 0; i < length; ++i) {
    printf("Arr:%i\n",  arr[i]);
  }
}