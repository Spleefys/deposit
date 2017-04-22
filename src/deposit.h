#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <stdio.h>

enum {
    date 365,
    depos 10000
};

enum Periods{
    lessone = 0,
    one = 30,
    lessfour = 31,
    four = 120,
    lesseight = 121,
    eight = 240,
    lesstwenty = 241,
    twenty = 365
};

void check(int sum, int time, int *n);

#endif
