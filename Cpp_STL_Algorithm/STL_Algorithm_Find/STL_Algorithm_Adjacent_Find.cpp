//
// Created by FHang on 2021/11/20 16:38
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void demo()
{
    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);

    vector<int>::iterator it = adjacent_find(v.begin(),  v.end());
    cout << "Find: " << *it << endl;
}

int main()
{
    demo();
    return 0;
}