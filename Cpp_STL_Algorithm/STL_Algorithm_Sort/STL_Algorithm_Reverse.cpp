//
// Created by FHang on 2021/11/21 15:51
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
class PrintVector_T
{
public:
    void operator()(const T &value)
    {
        cout << value << " ";
    }
};

template<class T>
void printVector_T(const T &value)
{
    cout << value << " ";
}

void demo()
{
    vector<int> v;
    for (int i = 0; i <= 9; ++i)
    {
        v.push_back(i);
    }

    cout << "Meta: ";
    for_each(v.begin(), v.end(), PrintVector_T<int>());
    cout << endl;

    cout << "Reverse: ";
    reverse(v.begin(), v.end());
    for_each(v.begin(), v.end(), printVector_T<int>);
    cout << endl;
}

int main()
{
    demo();
    return 0;
}