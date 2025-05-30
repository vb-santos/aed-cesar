#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    
    for (int j = i + 1; j < n; j++) {
      if (arr[j] <= arr[min_idx]){
        min_idx = j;
      }
    }

    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int arr[] = {8, 1, 5, 3, 5, 10, 3, 2}; int tam = 8;
  selectionSort(arr, tam);
  printf("Array ordenado: \n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}