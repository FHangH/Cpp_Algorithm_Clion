//
// Created by FHang on 2021/11/21 16:10
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PrintVector
{
public:
    void operator()(int value)
    {
        cout << value << " ";
    }
};

void demo()
{
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i <= 9; ++i)
    {
        v1.push_back(i);
    }

    v2.resize(v1.size());

    copy(v1.begin(), v1.end(), v2.begin());

    for_each(v2.begin(), v2.end(), PrintVector());
}

int main()
{
    demo();
    return 0;
}