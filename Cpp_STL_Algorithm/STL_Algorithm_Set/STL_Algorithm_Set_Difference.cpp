//
// Created by FHang on 2021/11/21 18:13
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(const vector<int> &v, const char *containerName)
{
    cout << containerName << ": ";
    for (const int it: v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void printVector(const vector<int> &v, const vector<int>::const_iterator &it, const char *containerName)
{
    cout << containerName << ": ";
    for (vector<int>::const_iterator itBegin = v.begin(); itBegin != it; ++itBegin)
    {
        cout << *itBegin << " ";
    }
    cout << endl;
}

void demo()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v_tag;

    for (int i = 0; i <= 9; ++i)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    printVector(v1, "V1");
    printVector(v2, "V2");

    v_tag.resize(max(v1.size(), v2.size()));

    // V1 对于 V2 的 差集
    vector<int>::const_iterator itLast_V1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v_tag.begin());
    printVector(v_tag, itLast_V1, "V1 Difference");

    // V2 对于 V1 的 差集
    vector<int>::const_iterator itLast_V2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v_tag.begin());
    printVector(v_tag, itLast_V2, "V2 Difference");
}

int main()
{
    demo();
    return 0;
}