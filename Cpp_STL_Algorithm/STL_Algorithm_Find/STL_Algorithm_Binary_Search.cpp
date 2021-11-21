//
// Created by FHang on 2021/11/20 16:51
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void demo()
{
    vector<int> v;
    for (int i = 0; i <= 5; ++i)
    {
        v.push_back(i);
    }

    bool isSearch = binary_search(v.begin(),  v.end(), 5);

    string searchRet = isSearch ? "true" : "false";

    if (isSearch)
    {
        cout << "Search: " << searchRet << endl;
    }
    else
    {
        cout << "Search: " << searchRet << endl;
    }
}

int main()
{
    demo();
    return 0;
}