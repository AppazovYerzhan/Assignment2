#include <iostream>
#include "Person.h"
#include <vector>
#include <random>
#include <time.h>

using namespace std;

void createVectorOfPeople(vector<Person>& people) { //function that handles the creation of the vector of people
    string name;
    int age;
    int luck;

    for (int i = 0; i < 5; i++) {           //loop for 5 cycles in order to create 5 people
        srand (time(NULL));                 //initializing random stuff by using time to simulate random

        cout << "Type the name: " << endl;  //Asking the user to input the name
        cin >> name;                        //Assigning the inputted value to the variable: name
        cout << "Type the age: " << endl;   //Asking the user to input the age
        cin >> age;                         //Assigning the inputted value to the variable: age
        luck = rand() % 10 + 1;             //Generating random number between 1 and 10:
        Person tempPerson(name, age, luck); //creation of object of type Person by taken values
        people.push_back(tempPerson);       //copying the data of created person and adding to vector
    }
}
void showThePeople(const vector<Person>& people){                   //function that outputs all people from vector
        for (int i=0; i<5; i++){                                    //loop for 5 cycles in order to output 5 people
            cout<<i+1<<") "<<"Name: "<<people.at(i).getName()<<endl;  //printing the name
            cout<<"Age: "<<people.at(i).getAge()<<endl;             //printing the age
            cout<<"Luck: "<<people.at(i).getLuck()<<endl;           //printing the luck
        }
    }
Person findTheLuckiest(const vector<Person>& people){           //function that finds the luckiest 'person' among 'people'
    int max = 0;                                                //variable to find the maximum by comparing with it
    Person tempPerson = Person();                               //creating temporary 'Person' object to copy the value and return
    for (int i=0; i<5; i++){                                    //loop for 5 cycles in order to check 5 people
        if (people.at(i).getLuck()>max){                        //if person with higher luckiness was found
            max=people.at(i).getLuck();                         //changing the maximum value we`ve met
            tempPerson=people.at(i);                            //copying values to temporary person with highest luckiness
        }
    }
    return tempPerson;                                          //returning person with highest luck
}
void changeLuck(Person& person1, Person& person2){              //function that swaps luck values of two person
    int tempLuck = person1.getLuck();                           //temp variable that stores one of the person`s luck value

    person1.setLuck(person2.getLuck());
    person2.setLuck(tempLuck);
}

int main() {

    vector<Person> people;                                  //creating the vector with datatype 'Person'
    createVectorOfPeople(people);                           //using function to create vector correctly
    showThePeople(people);                                  //function to print all people from vector

    Person luckiestOne = findTheLuckiest(people);           //variable that stores the luckiest person`s data
    //outputting the luckiest person
    cout<<"The luckiest one of them is: "<<luckiestOne.getName()<<". With luck value: "<<luckiestOne.getLuck();

    changeLuck(people.at(0), people.at(1));                 //swapping the luck of two person
    cout<<"\nAfter swapping Luck values"<<endl;
    showThePeople(people);                                  //function to print all people from vector

    return 0;
}

/* To input to console and check the output

 Bob
 18
 John
 19
 Doe
 14
 Michael
 25
 Adam
 44

 */