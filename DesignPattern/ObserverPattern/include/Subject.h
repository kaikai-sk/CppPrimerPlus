//
// Created by shand on 2023/9/19.
//
#ifndef CPPTEST_SUBJECT_H
#define CPPTEST_SUBJECT_H

#include <memory>
#include <iostream>
#include <list>
#include "Observer.h"

class Subject {
public:
    Subject() : m_nState(0) {}

    virtual ~Subject() = default;

    virtual void attach(const std::shared_ptr<Observer> pObserver) = 0;

    virtual void detach(const std::shared_ptr<Observer> pObserver) = 0;

    virtual void notify() = 0;

    int getState() { return m_nState; }

    void setState(int state) {
        std::cout << "Subject updated !" << std::endl;
        m_nState = state;
    }

protected:
    std::list<std::shared_ptr<Observer>> m_pObserver_list;
    int m_nState;
};

#endif // CPPTEST_SUBJECT_H
