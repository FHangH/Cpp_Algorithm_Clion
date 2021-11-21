//
// Created by FHang on 2021/11/21 17:02
//
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void demo()
{
    vector<int> v;

    for (int i = 0; i <= 9; ++i)
    {
        v.push_back(i);
    }

    const int sum = accumulate(v.cbegin(), v.cend(), 0);
    cout << sum << endl;
}

int main()
{
    demo();
    return 0;
}