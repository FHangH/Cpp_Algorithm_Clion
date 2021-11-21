//
// Created by FHang on 2021/11/21 13:02
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

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

    bool operator==(const Person &p)
    {
        if (this->age == p.age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void printVector(const vector<int> &v)
{
    for (int it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void printVector(const vector<Person> &p)
{
    for (Person it : p)
    {
        cout << it.name << " : " << it.age << endl;
    }
}

void demo1()
{
    vector<int> v;

    for (int i = 0; i <= 9; ++i)
    {
        v.push_back(rand()%2);
    }

    printVector(v);

    int countNum = count(v.begin(),  v.end(), 0);
    cout << "Count 0 : " << countNum << endl;
}

void demo2()
{
    vector<Person> v;

    Person p1("QQ", 11);
    Person p2("WW", 10);
    Person p3("EE", 10);
    Person p4("RR", 10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person p("SS", 10);

    printVector(v);

    int countNum = count(v.begin(),  v.end(), p);
    cout << "Count P : " << countNum << endl;
}

int main()
{
    srand((unsigned int) time(NULL));
    demo1();
    demo2();

    return 0;
}