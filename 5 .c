#include <stdio.h>

int main(){

    int n, m; 
    scanf ("%d %d", &n, &m); // вводим размеры массива

    int arr[n][m], maxs = 0, mins = 0, maxi = 0, mini = 0; // массив, макс. и мин.суммы, индексы макс. и мин.столбца
    int x;

    for (int i = 0; i < n; i++) { // ввод массива

        for (int j = 0; j < m; j++) {
            scanf ("%d", &arr[i][j]);
        }
        
    }

    int sum = 0;
    for (int j = 0; j < m; j++) { // проходим по индексам столбцов    

        for (int i = 0; i < n; i++) { // проходим по самому столбцу
            sum = sum + arr[i][j]; // считаем сумму каждого столбца
        }
        
        if (sum < mins) { // минимальный столбец
            mins = sum; // мин. сумма
            mini = j; // индекс мин.столбца
        }

        else if (sum > maxs) { // максимальный столбец
            maxs = sum; // макс. сумма
            maxi = j; // индекс макс.столбца
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
