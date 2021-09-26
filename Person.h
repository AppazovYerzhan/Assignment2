#ifndef UNTITLED4_PERSON_H
#define UNTITLED4_PERSON_H
#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;
    int luck;
public:
    Person(const string &name, int age, int luck);

    Person(const string &name);

    Person();

    const string &getName() const;

    int getAge() const;

    int getLuck() const;

    void setName(const string &name);

    void setAge(int age);

    void setLuck(int luck);
};

#endif
