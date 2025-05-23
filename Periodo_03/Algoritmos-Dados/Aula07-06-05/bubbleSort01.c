#include <stdio.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {5, 1, 4, 2, 8}; int tam = 5;
  bubbleSort(arr, tam);
  printf("Array ordenado: \n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}