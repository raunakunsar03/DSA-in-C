#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int v[5];
    int n = 5; 
    printf("enter element:/n");
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(&v[j], &v[j + 1]);
            }
        }
    }

    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    
        }

    return 0;
}