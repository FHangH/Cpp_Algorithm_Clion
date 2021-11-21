//
// Created by FHang on 2021/11/20 15:42
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
};

class FindIF_MoreThan_3
{
public:
    bool operator()(const int &value)
    {
        return value > 3;
    }
};

class FindIF_MoreThan_Age_8
{
public:
    bool operator()(const Person &person)
    {
        return person.age > 8;
    }
};

class UpSort_Age
{
public:
    bool operator()(Person &person1, Person &person2)
    {
        return person1.age < person2.age;
    }
};

void printVector(const vector<Person> &v)
{
    for (vector<Person>::const_iterator it = v.cbegin(); it != v.cend(); ++it)
    {
        cout << it->name << " : " << it->age << endl;
    }
}

void demo1()
{
    vector<int> v;
    for (int i = 0; i <= 5; ++i)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(), v.end(), FindIF_MoreThan_3());
    cout << "Find: " << *it << endl;
}

void demo2()
{
    vector<Person> v;
    Person p1("QQ", 13);
    Person p2("WW", 8);
    Person p3("EE", 10);
    Person p4("RR", 12);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    sort(v.begin(), v.end(), UpSort_Age());
    printVector(v);

    vector<Person>::iterator it = find_if(v.begin(),  v.end(), FindIF_MoreThan_Age_8());
    cout << "Find: " << it->name << " = " << it->age << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}