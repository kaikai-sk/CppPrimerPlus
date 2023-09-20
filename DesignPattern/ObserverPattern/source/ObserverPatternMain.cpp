#include <iostream>
#include <vector>
#include "../include/Subject.h"
#include "../include/ConcreteSubject.h"
#include "../include/Observer1.h"
#include "../include/Observer2.h"

using namespace std;

int main() {
    std::shared_ptr<Subject> pSubject = std::make_shared<ConcreteSubject>();// 创建被观察者

    // 创建观察者
    std::shared_ptr<Observer> pObserver1_1 = std::make_shared<Observer1>("1");
    std::shared_ptr<Observer> pObserver1_2 = std::make_shared<Observer1>("2");
    std::shared_ptr<Observer> pObserver1_3 = std::make_shared<Observer1>("3");

    std::shared_ptr<Observer> pObserver2_4 = std::make_shared<Observer2>("4");
    std::shared_ptr<Observer> pObserver2_5 = std::make_shared<Observer2>( "5");
    std::shared_ptr<Observer> pObserver2_6 = std::make_shared<Observer2>( "6");

    // 注册观察者
    pSubject->attach(pObserver1_1);
    pSubject->attach(pObserver1_2);
    pSubject->attach(pObserver1_3);
    pSubject->attach(pObserver2_4);
    pSubject->attach(pObserver2_5);
    pSubject->attach(pObserver2_6);

    pSubject->setState(2);// 改变状态
    pSubject->notify();

    std::cout << std::string(50, '-') << std::endl;

    // 注销观察者
    pSubject->detach(pObserver1_1);
    pSubject->detach(pObserver1_2);

    pSubject->setState(3);
    pSubject->notify();

    return 0;
}


