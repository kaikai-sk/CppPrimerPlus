#include "Subject.h"

//
// Created by shand on 2023/9/19.
//
//具体观察者1
class Observer1 : public Observer {
public:
    Observer1(const std::string &name = "unknown");

    void update(int state) override ;
};
