//
// Created by shand on 2023/9/19.
//

#include <memory>
#include <algorithm>
#include "../include/ConcreteSubject.h"

void ConcreteSubject::attach(const std::shared_ptr<Observer> pObserver) {
    auto iter = std::find(m_pObserver_list.begin(), m_pObserver_list.end(), pObserver);
    if (iter == m_pObserver_list.end()) {
        std::cout << "attach observer" << pObserver->name() << std::endl;
        m_pObserver_list.emplace_back(pObserver);
    }
}

void ConcreteSubject::detach(const std::shared_ptr<Observer> pObserver) {
    std::cout << "detach observer" << pObserver->name() << std::endl;
    m_pObserver_list.remove(pObserver);
}

//循环通知所有观察者
void ConcreteSubject::notify() {
    auto it = m_pObserver_list.begin();
    while (it != m_pObserver_list.end()) {
        (*it++)->update(this->m_nState);
    }
}