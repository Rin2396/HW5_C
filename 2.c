#include <stdio.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя (хотя, судя по задаче, имя нам вообще не надо. Оно здесь так, для крастоты ;) )
};



float averageAge (struct Person arr[], int n) {

    float sum_age = 0; // начальная сумма = 0

    for (int i = 0; i < n; i++) {
        sum_age = sum_age + arr[i].age; // считаем сумму всех возрастов, обращаясь к значению возраста в каждой из n структур
    }

    float sr_age = sum_age / n; // считаем среднее значение

    return sr_age;
}



int main() {

    int n;
    scanf ("%d", &n); // вводим количество людей, чьи возраста мы будем считать

    struct Person arr[n]; // создаем массив из n структур

    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i].age); // вводим значение возраста в каждой из n структур
    }

    printf ("%f", averageAge(arr, n)); // выводим среднее значение возрастов n людей
}