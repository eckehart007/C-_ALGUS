#include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first person age or -1 to quit" << endl;
    cin >> age;

    while(age != -1) {
        ageTotal = ageTotal + age;
        numberOfPeopleEntered++;

        cout << "Enter next person age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of people entered: " << numberOfPeopleEntered << endl;
    cout << "Average age: " << ageTotal/numberOfPeopleEntered;

    return 0;
}
