#include<stdio.h>
void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
   

     int arr[5];
    for(int i = 0; i < 5; ++i) {
     scanf("%d", &arr[i]);
  }

  printf("Displaying integers:\n ");
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", arr[i]);
  }
    int n = sizeof(arr) / sizeof(arr[0]);
     
    selectionSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
  return 0;
}