#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        string name;
        int age;

        string sername;
        string phoneNumber;
};

void print(Person* person)
{
    cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;

    cout << "Meet " << person.name << endl;
    print(&person);

    person.sername = "Potter";
    person.phoneNumber = "+44 7700 900865";
    cout << person.sername << "'s phone is "<< person.phoneNumber;

    return 0;
}
