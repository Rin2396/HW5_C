#include <stdio.h>

int main(){
    int n, m; 
    scanf ("%d %d", &n, &m);
    int arr[n][m]; // массив
    int maxs = 0, mins = 0; // маскимальная и минимальная сумма
    int maxi = 0, mini = 0; // индекс максимального и минимального столбца
    int x;

    for (int i = 0; i < n; i++) { // ввод
        for (int j = 0; j < m; j++) {
            scanf ("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int j = 0; j < m; j++) { // проходим по столбцам    
        for (int i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        if (sum > maxs) { // максимальный столбец
            maxs = sum; // макс. сумма
            maxi = j; // макс. индекс
        }
        else if (sum < mins) { // минимальный столбец
            mins = sum; // мин. сумма
            mini = j; // мин. индекс
        }
        sum = 0;
    }

    for (int i = 0; i < n; i++) { // проходим по строчкам
        x = arr[i][maxi]; 
        arr[i][maxi] = arr[i][mini]; // меняем местами макс. и мин. значения
        arr[i][mini] = x;
    }

    for (int i = 0; i < n; i++) { // вывод
        for (int j = 0; j < m; j++) {
            printf ("%d ", arr[i][j]);
        }
        printf ("\n");
    }
}