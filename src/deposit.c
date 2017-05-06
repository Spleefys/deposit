#include "deposit.h"

int check(int sum, int time){
    if (time > date || sum < depos) {
        //fflush(stdout);
        return 1;
    }
    else{
        return 0;
    }
}

float profit(int sum, int time){
  float res;
  if (sum<100000) {
      if (time >= lessone && time <= one) {
          res = sum + (sum * -0.1);
          return res;
      }
      if (time >= lessfour && time <= four) {
          res = sum + (sum * 0.02);
          return res;
      }
      if (time >= lesseight && time <= eight) {
          res = sum + (sum * 0.06);
          return res;
      }
      if (time >= lesstwenty && time <= twenty) {
          res = sum + (sum * 0.12);
          return res;
      }
  }
  else{
      if (time >= lessone && time <= one) {
          res = sum + (sum * -0.1);
          return res;
      }
      if (time >= lessfour && time <= four) {
          res = sum + (sum * 0.03);
          return res;
      }
      if (time >= lesseight && time <= eight) {
          res = sum + (sum * 0.08);
          return res;
      }
      if (time >= lesstwenty && time <= twenty) {
          res = sum + (sum * 0.15);
          return res;
      }
  }
  return 0;
}
