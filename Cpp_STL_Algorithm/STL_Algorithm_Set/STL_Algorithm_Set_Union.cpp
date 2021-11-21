//
// Created by FHang on 2021/11/21 17:50
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(const vector<int> &v, const char *containerName)
{
    cout << containerName << ": ";
    for (const int it : v)
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

    for (int i = 0; i <= 4; ++i)
    {
        v1.push_back(i);
        v2.push_back(i + 4);
    }
    printVector(v1, "V1");
    printVector(v2, "V2");

    v_tag.resize(v1.size() + v2.size());

    vector<int>::const_iterator itLast = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v_tag.begin());

    // 使用 set_union 返回的 最后一个元素的迭代器
    printVector(v_tag, itLast, "Target");
}

int main()
{
    demo();
    return 0;
}