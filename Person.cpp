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

Person::Person(const string &name, int age, int luck) : name(name), age(age), luck(luck) {}

