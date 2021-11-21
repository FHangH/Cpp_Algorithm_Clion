//
// Created by FHang on 2021/11/21 14:09
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

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

template<class T>
bool downSort(const T &value1, const T &value2)
{
    return value1 > value2;
}

void demo1()
{
    vector<int> v;

    for (int i = 0; i <=9; ++i)
    {
        v.push_back(rand()%10);
    }
    printVector(v);

    sort(v.begin(), v.end());
    printVector(v);

    sort(v.begin(), v.end(), downSort<int>);
    printVector(v);
}

int main()
{
    srand((unsigned int)time(NULL));
    demo1();
    return 0;
}