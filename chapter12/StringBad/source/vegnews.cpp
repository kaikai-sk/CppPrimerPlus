//
// Created by shand on 2023/9/20.
//

#include "../include/StringBad.h"

// pass by refrence
void callMe1(StringBad&);
// pass by value
void callMe2(StringBad);

int main() {
    using std::cout;
    using std::endl;

    {
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettcue Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout<<headline1<<endl;
        cout<< headline2 << endl;
        cout<< sports << endl;
        callMe1(headline1);
        cout << "headline1: " << headline1 <<endl;
        callMe2(headline2);
        cout << "headline2: " << headline2 << endl;
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        StringBad knot = headline1;
        cout << "Knot: " << knot << endl;
    }

    cout << "end of main()" << endl;

    return 0;
}

void callMe1(StringBad& rsb) {
    using namespace std;

    cout << rsb << endl;
}

void callMe2(StringBad sb) {
    using namespace std;

    cout << sb << endl;
}