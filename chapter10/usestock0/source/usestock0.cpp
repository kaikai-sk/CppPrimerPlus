//
// Created by shand on 2023/9/19.
//

#include<iostream>
#include "../include/stock00.h"

int main() {
    Stock fluffy_the_cat;
    fluffy_the_cat.show();

    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
}