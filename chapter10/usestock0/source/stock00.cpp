//
// Created by shand on 2023/9/19.
//
#include <iostream>
#include "../include/stock00.h"

void Stock::acquire(const std::string &company, long n, double price) {
    this->company = company;
    if (n < 0) {
        std::cout << "Number of shares can not be nagative; " << company
            << "shares set to 0.";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = price;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can not be negative." << "Transaction is aborted." << std::endl;
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    using std::endl;

    if (num < 0) {
        cout << "Number of shares sold can not be negative." << "Transaction is aborted." << endl;
    } else if (num > shares) {
        cout << "You can not sell more than you have!" << "Transaction is aborted." << endl;
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    using std::cout;
    using std::endl;

    cout << "Company: " << company
        << " Shares:" << shares
        << "Share price:" << share_val
        << "Total worth:" << total_val << endl;
}