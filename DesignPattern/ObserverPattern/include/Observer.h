//
// Created by shand on 2023/9/19.
//

#ifndef CPPTEST_OBSERVER_H
#define CPPTEST_OBSERVER_H

#include<string>

//抽象观察者
class Observer {
public:
    virtual ~Observer() = default;

    Observer(const std::string &name = "unknown")
            : m_strName(name) {}

    virtual void update(int state) = 0;

    const std::string &name() { return m_strName; }

protected:
    std::string m_strName;
};

#endif //CPPTEST_OBSERVER_H
