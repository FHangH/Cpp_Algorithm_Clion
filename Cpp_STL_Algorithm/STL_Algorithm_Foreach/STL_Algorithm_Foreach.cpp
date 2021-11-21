//
// Created by FHang on 2021/11/20 13:48
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PrintVector_Class
{
public:
    void operator()(int &value)
    {
        cout << value << " ";
    }
};

void printVector_func(int &value)
{
    cout << value << " ";
}

void demo()
{
    vector<int> v;
    v.reserve(5);

    for (int i = 0; i < 5; ++i)
    {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), printVector_func);
    cout << endl;

    for_each(v.begin(), v.end(), PrintVector_Class());
    cout << endl;
}

int main()
{
    demo();
    return 0;
}