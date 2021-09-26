#include "Person.h"

const string &Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

int Person::getLuck() const {
    return luck;
}

Person::Person(const string &name, int age, int luck) : name(name), age(age), luck(luck) {} //base constructor

Person::Person(const string &name) : Person(name, 0, 0) {}  //delegating constructor

Person::Person() : Person("Unknown", 0, 0) {}               //delegating constructor

void Person::setName(const string &name) {
    Person::name = name;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::setLuck(int luck) {
    Person::luck = luck;
}

