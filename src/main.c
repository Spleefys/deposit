#include "deposit.h"



int main(){
    int sum, time;

    do{
        printf("\nВведите сумму вклада:");
        scanf("%d", &sum);
        printf("Введите срок:");
        scanf("%d", &time);
    }while(check(sum, time));

    printf("%.2f\n", profit(sum, time));

    return 0;
}
