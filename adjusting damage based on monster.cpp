#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    int hitpoints = 25;
    int monsterchoice = rand() % 4;
    int damage = 0;

    switch(monsterchoice)
    {
        case 0:
            cout << "A bandit is attacking you!!!" << endl;
            damage = 3;
            break;

        case 1:
            cout << "An orc is going to hit you!!!" << endl;
            damage = 5;
            break;

        case 2:
            cout << "A dragon is about to eat you!!!" << endl;
            damage = 10;
            break;

        case 3:
            cout << "A wraith is about to torment you!!" << endl;
            damage = 7;
            break;
    }

    hitpoints = hitpoints - damage;

    cout << "You took " << damage << " damage!" << endl;
    cout << "You now have " << hitpoints << " hitpoints." << endl;

    return 0;
}