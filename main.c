#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

 int get_length(int mas[N]) {

     unsigned i;
     int max = mas[0], min = mas[0], max_i, min_i;


     for (i = 0; i < N; i++) {
         if (max <= mas[i]) {
             max = mas[i];
             max_i = i;
         }
     }

     for (i = 0; i < N; i++) {
         if (min > mas[i]) {
             min = mas[i];
             min_i = i;
         }
     }
     if(abs(max_i - min_i) -1 != 0) return (abs(max_i - min_i) - 1);
     else return -1;
 }


 int main(void) {

    srand(time(NULL));

    int mas[10];
    unsigned i;


    for (i = 0; i < N; i++)
       mas[i] = 1 + rand() % 10;

    for (i = 0; i < N; i++)
        printf("%d\t", mas[i]);

    printf("\n%d", get_length(mas));


}
