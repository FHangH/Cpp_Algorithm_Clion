//
// Created by FHang on 2021/11/20 14:29
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class TransVector
{
public:
    int operator()(int &value)
    {
        return value;
    }
};

int transVector_Func(int &value)
{
    return value;
}

void printVector(const vector<int> &v)
{
    for (int it: v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void demo()
{
    vector<int> v1;
    vector<int> v2;

    v1.reserve(5);
    for (int i = 0; i < 5; ++i)
    {
        v1.push_back(i);
    }

    v2.resize(v1.size());

    // transform(v1.begin(), v1.end(), v2.begin(), TransVector());
    transform(v1.begin(), v1.end(), v2.begin(), transVector_Func);
    printVector(v2);
}

int main()
{
    demo();
    return 0;
}