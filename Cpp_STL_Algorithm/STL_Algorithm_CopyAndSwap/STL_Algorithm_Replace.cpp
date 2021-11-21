//
// Created by FHang on 2021/11/21 16:18
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int> &v, const string &str)
{
    cout << str << ": ";
    for (const int it: v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void demo()
{
    vector<int> v;

    for (int i = 0; i <= 9; ++i)
    {
        v.push_back(i);
    }

    printVector(v, "Meta");

    replace(v.begin(), v.end(), 0, 9);
    printVector(v, "New");
}

int main()
{
    demo();
    return 0;
}