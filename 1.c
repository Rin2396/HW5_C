#include <stdio.h>
 
int main() {
    int n;
    scanf ("%d",&n);
    int arr[n];  
    for (int i = 0; i < n; i++) { // вводим  массив
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++) { // первую половину массива
        int b = arr[i];
        arr[i] = arr[n / 2 + i]; // меняем со второй половиной массива
        arr[n / 2 + i] = b;
    }

    for (int i = 0; i < n; i++) { // выводим получившийся массив
        printf ("%d ", arr[i]);
    }
} 