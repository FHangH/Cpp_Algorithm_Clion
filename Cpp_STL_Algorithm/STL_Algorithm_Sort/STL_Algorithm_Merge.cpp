//
// Created by FHang on 2021/11/21 15:41
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
void printVector(T value)
{
    cout << value << " ";
}

void demo()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for (int i = 0; i <= 9; ++i)
    {
        v1.push_back(i);
        v2.push_back(9 - i);
    }

    v3.resize(v1.size() + v2.size());

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), v3.end(), printVector<int>);
}

int main()
{
    demo();
    return 0;
}