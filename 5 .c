#include <stdio.h>

int main(){

    int n, m; 
    scanf ("%d %d", &n, &m); // вводим размеры массива

    int arr[n][m]; // массив
    int maxs = 0, mins = 0; // маскимальная и минимальная сумма
    int maxi = 0, mini = 0; // индексы максимального и минимального столбца
    int x;

    for (int i = 0; i < n; i++) { // ввод

        for (int j = 0; j < m; j++) {
            scanf ("%d", &arr[i][j]);
        }

    }

    int sum = 0;

    for (int j = 0; j < m; j++) { // проходим по столбцам    

        for (int i = 0; i < n; i++) {
            sum += arr[i][j]; // считаем сумму каждого столбца
        }

        if (sum > maxs) { // максимальный столбец
            maxs = sum; // макс. сумма
            maxi = j; // индекс макс.столбца
        }

        else if (sum < mins) { // минимальный столбец
            mins = sum; // мин. сумма
            mini = j; // индекс мин.столбца
        }

        sum = 0;
    }

    for (int i = 0; i < n; i++) { // проходим по строчкам
        x = arr[i][maxi]; 
        arr[i][maxi] = arr[i][mini]; // меняем местами значения в строчке с индексами макс. и мин.столбцов
        arr[i][mini] = x;

    }

    for (int i = 0; i < n; i++) { // вывод

        for (int j = 0; j < m; j++) {
            printf ("%d ", arr[i][j]);
        }

        printf ("\n");
    }
}