#include <iostream>
#include "SImplevector.h"
using namespace std;



int main()
{
    SimpleVector<int> vec(1);
    vec.push_back(10);
    vec.push_back(30);
    vec.push_back(20);
    vec.print();
    vec.sortData();
    vec.print();
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    vec.pop_back();
    cout << "pop after size: " << vec.size() << endl;
    cout << "vec ";
    vec.print();

    SimpleVector<int> vec2(vec);
    cout << "vec2 ";
    vec2.print();


    return 0;
}

