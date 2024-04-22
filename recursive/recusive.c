//
// Created by WooHeeSeop on 2024-04-22.
//

#include "recusive.h"
int factorial(int n){

    if(n < 1) return 1;
    else return n * factorial(n -1);
}