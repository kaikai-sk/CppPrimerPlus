//
// Created by shand on 2023/9/19.
//
#include "Observer.h"

//具体观察者2
class Observer2 : public Observer {
public:
    Observer2(const std::string &name = "unknown")
            : Observer(name) {}

    void update(int state) override;
};
