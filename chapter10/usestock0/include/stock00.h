//
// Created by shand on 2023/9/19.
//

#ifndef CPPTEST_STOCK00_H
#define CPPTEST_STOCK00_H

#include <string>

class Stock {
private:
    std::string company;
    // 股票数量
    long shares;
    // 股票单价
    double share_val;
    double total_val;
    /**
     * 计算股票总价
     */
    void set_tot() {
        total_val = shares * share_val;
    }
public:
    void acquire(const std::string& company, long n, double price);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif //CPPTEST_STOCK00_H
