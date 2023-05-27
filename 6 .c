#include <stdio.h>

int abs_arr(int arr[], int n) {
    int *a = arr, counter = 0; // первый элемент и счетчик

    for (int i = 0; i < n; i++) {
        if (*a < 0) {
            *a = *a * (-1); // меняем отрицательные числа на положительные
            counter++; // и прибавляем к счетчику
        }
        a++; // сдвигаемся на следующий элемент
    }

    return counter;
}

int main() {
    int n;
    scanf ("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++) { // ввод
        scanf ("%d", &arr[i]);
    }

    printf ("%d ", abs_arr(arr, n)); // меняем отрицательные числа на положительные и выводим значение счетчика

    for (int i = 0; i < n; i++) { // выводим измененный массив
        printf("%d ", arr[i]);
    }
}