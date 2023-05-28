#include <stdio.h>

struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
   int xc = 0, yc = 0; // начальное изменение координат

      for (int i = 0; i < n; i++) { // складываем перемещения по x и y
         xc = xc + arr[i].x;
         yc = yc + arr[i].y;
      }

   struct Move go_coord = {xc, yc}; // записываем итогое премещение

   return go_coord;
}

 int main () {
    int n;
    scanf ("%d", &n); // вводим количество перемещений

    struct Move arr[n]; // создаем массив
    for (int i = 0; i < n; i++) {
        scanf ("%d %d", &arr[i].x, &arr[i].y); // и записываем в него все перемещения
    }

    struct Move move_coord = getFinishPoint(arr, n); // считаем итоговое перемещение

    int x = move_coord.x; // итоговое перемещение по х
    int y = move_coord.y; // итоговое перемещение по у

    printf ("%d %d", x, y); // вывводим итоговое перемещение по х и у
 }