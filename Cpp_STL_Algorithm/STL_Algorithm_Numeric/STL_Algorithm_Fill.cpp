//
// Created by FHang on 2021/11/21 17:12
//
#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &v)
{
    for (const int it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void demo()
{
    vector<int> v;

    for (int i = 0; i <= 8; ++i)
    {
        v.push_back(i);
    }

    fill(v.begin(), v.end(), 9);
    printVector(v);
}

int main()
{
    demo();
    return 0;
}