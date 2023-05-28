#include <stdio.h>

int abs_arr(int arr[], int n) {
    int counter = 0; // первый элемент и счетчик

    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0) {
            *(arr + i) = *(arr + i) * (-1); // меняем отрицательные числа на положительные
            counter++; // и прибавляем к счетчику
        }
    }

    return counter;
}

int main() {
    int n;
    scanf ("%d", &n); // вводим размер массива
    
    int arr[n];

    for (int i = 0; i < n; i++) { // ввод
        scanf ("%d", &arr[i]);
    }

    printf ("%d ", abs_arr(arr, n)); // меняем отрицательные числа на положительные и выводим значение счетчика

    for (int i = 0; i < n; i++) { // выводим измененный массив
        printf("%d ", arr[i]);
    }
}