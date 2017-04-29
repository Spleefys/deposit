#include "deposit.h"

int main(){
    int sum, time;
    float res;

    do{
        printf("\nВведите сумму вклада:");
        scanf("%d", &sum);
        printf("Введите срок:");
        scanf("%d", &time);
    }while(check(sum, time));

    if (sum<100000) {
        if (time > lessone && time <= one) {
            res = (sum * 0.1);
            printf("-%.2f", res);
        }
        if (time >= lessfour && time <= four) {
            res = (sum * 0.02);
            printf("%.2f", res);
        }
        if (time >= lesseight && time <= eight) {
            res = (sum * 0.06);
            printf("%.2f", res);
        }
        if (time >= lesstwenty && time <= twenty) {
            res = (sum * 0.12);
            printf("%.2f", res);
        }
    }
    else{
        if (time > lessone && time <= one) {
            res = (sum * 0.1);
            printf("-%.2f", res);
        }
        if (time >= lessfour && time <= four) {
            res = (sum * 0.03);
            printf("%.2f", res);
        }
        if (time >= lesseight && time <= eight) {
            res = (sum * 0.08);
            printf("%.2f", res);
        }
        if (time >= lesstwenty && time <= twenty) {
            res = (sum * 0.15);
            printf("%.2f", res);
        }
    }

    return 0;
}
