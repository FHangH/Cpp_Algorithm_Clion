//
// Created by FHang on 2021/11/20 14:52
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(const string &name, const int &age)
    {
        this->name = name;
        this->age = age;
    }

    // find 底层无法比较 自定义数据类型，所以要 重载==
    // find 底层是直接 解析元素迭代器去比较要 查找的元素值，所以 自定义类型的数据，无法直接比较
    bool operator==(const Person &person)
    {
        if (this->name == person.name && this->age == person.age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void demo()
{
    vector<Person> v;

    Person p1("QQ", 12);
    Person p2("WW", 12);
    Person p3("EE", 12);
    Person p4("RR", 12);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator it = find(v.begin(), v.end(), p2);
    if (it == v.cend())
    {
        cout << "No Find" << endl;
    }
    else
    {
        cout << it->name << " = " << it->age << endl;
    }
}

int main()
{
    demo();
    return 0;
}