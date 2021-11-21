//
// Created by FHang on 2021/11/21 16:30
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
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i <= 9; ++i)
    {
        v1.push_back(i);
        v2.push_back(9 - i);
    }

    printVector(v1, "meta");
    printVector(v2, "meta");

    swap(v1, v2);
    printVector(v1, "new");
    printVector(v2, "new");
}

int main()
{
    demo();
    return 0;
}