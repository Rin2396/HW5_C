#include <stdio.h>

void reduce_fraction (int * a, int * b) {
    int nod; // наибольший общий делитель
    if (*a > *b) { // нод не может быть больше меньшего из чисел
        for (int i = 1; i <= *b; i++) { // проходим по числам от 1 до меньшего из чисел
            if (*a % i == 0 && *b % i == 0) {
                nod = i;
            }
        }
    } else {
        for (int i = 1; i <= *a; i++) {
            if (*a % i == 0 && *b % i == 0) {
                nod = i;
            }
        }
    }

    *a = *a / nod; // делим числа на нод
    *b = *b / nod; // и выводим уже несокращаемую "дробь"
}

int main() {
    int a = 14, b = 49; // вводим
    reduce_fraction (&a, &b); // сокращаем
    printf ("%d %d", a, b); // выводим
}