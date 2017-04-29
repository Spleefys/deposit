#include "deposit.h"

int main(){
    int sum, n, time;
    float res;

    n = 0;

    while (n == 0){
        printf("\nВведите сумму вклада:");
        scanf("%d", &sum);
        printf("Введите срок:");
        scanf("%d", &time);

        check(sum, time, &n);
    }

    if (sum<100000) {
        if (time > lessone && time <= one) {
            res = (sum * 0.1);
            printf("-%f", res);
        }
        if (time >= lessfour && time <= four) {
            res = (sum * 0.02);
            printf("%f", res);
        }
        if (time >= lesseight && time <= eight) {
            res = (sum * 0.06);
            printf("%f", res);
        }
        if (time >= lesstwenty && time <= twenty) {
            res = (sum * 0.12);
            printf("%f", res);
        }
    }
    else{
        if (time > lessone && time <= one) {
            res = (sum * 0.1);
            printf("-%f", res);
        }
        if (time >= lessfour && time <= four) {
            res = (sum * 0.03);
            printf("%f", res);
        }
        if (time >= lesseight && time <= eight) {
            res = (sum * 0.08);
            printf("%f", res);
        }
        if (time >= lesstwenty && time <= twenty) {
            res = (sum * 0.15);
            printf("%f", res);
        }
    }

    return 0;
}
