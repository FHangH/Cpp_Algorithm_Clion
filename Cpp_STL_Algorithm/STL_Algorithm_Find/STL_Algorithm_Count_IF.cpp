//
// Created by FHang on 2021/11/21 13:50
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
public:
    int age;

    Person(const int &age)
    {
        this->age = age;
    }
};

bool great_4(const int &value)
{
    return value > 4;
}

bool equal_10(const Person &p)
{
    return p.age == 10;
}

void demo1()
{
    vector<int> v;

    for (int i = 0; i <=9; ++i)
    {
        v.push_back(i);
    }

    const int countNum = count_if(v.begin(),  v.end(), great_4);
    cout << countNum << endl;
}

void demo2()
{
    vector<Person> v;

    Person p1(11);
    Person p2(10);
    Person p3(10);
    Person p4(10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    int countNum = count_if(v.begin(),  v.end(), equal_10);
    cout << countNum << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}