//
// Created by FHang on 2021/11/21 14:27
//
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

template<class T>
void printVector(const vector<T> &v)
{
    for (T it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void demo1()
{
    vector<int> v;
    for (int i = 0; i <= 9; ++i)
    {
        v.push_back(i);
    }

    printVector(v);

    random_shuffle(v.begin(), v.end());
    printVector(v);
}

int main()
{
    srand((unsigned int)time(NULL));
    demo1();
    return 0;
}