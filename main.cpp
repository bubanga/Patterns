#include <iostream>
#include "Integer.h"
#include "CyclicBuffer.h"
using namespace std;

int main() {
    srand(time(nullptr));
    CyclicBuffer<Integer> cyclicBuffer; //line 25 in CyclicBuffer.h
    cyclicBuffer.print();
    if (cyclicBuffer.empty())
        cout << "Is empty" << endl;
    cout << "Generate buffor" << endl << endl;
    for (int i = 0; i < 8; ++i) {
        cyclicBuffer.put(Integer());
    }

    if (cyclicBuffer.full())
        cout << "Is full" << endl;

    cyclicBuffer.print();

    cout << "First elem: " << cyclicBuffer.get() << endl;
    cout << "Next elem: " << cyclicBuffer.get() << endl;

    if (!cyclicBuffer.full())
        cout << "Is not full" << endl;

    cyclicBuffer.print();

    cout << "Next elem: " << cyclicBuffer.get() << endl;
    cout << "Next elem: " << cyclicBuffer.get() << endl;
    cout << "Next elem: " << cyclicBuffer.get() << endl;
    cout << "Next elem: " << cyclicBuffer.get() << endl;
    cout << "Next elem: " << cyclicBuffer.get() << endl;
    cout << "Last elem: " << cyclicBuffer.get() << endl;
    cout << "First elem: " << cyclicBuffer.get() << endl;
    cout << "Next elem: " << cyclicBuffer.get() << endl;
    cyclicBuffer.print();
    if (cyclicBuffer.empty())
        cout << "Is empty" << endl;
    if (!cyclicBuffer.full())
        cout << "Is not full" << endl;

    cout << "==============================================================";

    CyclicBuffer<Integer, 10> cyclicBuffer2; //line 26 in CyclicBuffer.h
    cyclicBuffer2.print();
    if (cyclicBuffer2.empty())
        cout << "Is empty" << endl;
    cout << "Generate buffor" << endl << endl;
    for (int i = 0; i < 10; ++i) {
        cyclicBuffer2.put(Integer());
    }

    if (cyclicBuffer2.full())
        cout << "Is full" << endl;

    cyclicBuffer2.print();

    cout << "First elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;

    if (!cyclicBuffer2.full())
        cout << "Is not full" << endl;

    cyclicBuffer2.print();

    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cout << "Last elem: " << cyclicBuffer2.get() << endl;
    cout << "First elem: " << cyclicBuffer2.get() << endl;
    cout << "Next elem: " << cyclicBuffer2.get() << endl;
    cyclicBuffer2.print();
    if (cyclicBuffer2.empty())
        cout << "Is empty" << endl;
    if (!cyclicBuffer2.full())
        cout << "Is not full" << endl;
    return 0;
}
