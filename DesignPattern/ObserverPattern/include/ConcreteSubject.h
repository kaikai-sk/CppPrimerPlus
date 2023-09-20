//
// Created by shand on 2023/9/19.
//

#include <memory>
#include <algorithm>
#include "Subject.h"

//具体被观察者
class ConcreteSubject : public Subject {
public:
    void attach(const std::shared_ptr<Observer> pObserver) override;

    void detach(const std::shared_ptr<Observer> pObserver) override;

    //循环通知所有观察者
    void notify() override;
};