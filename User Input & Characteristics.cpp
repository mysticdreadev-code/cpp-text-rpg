#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype> 
#include <string>
using namespace std;

int main()
{
    srand(time(0));

    string name;

    cout << "Enter your charcter name: ";
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }

    int strength, dexterity, intelligence, charisma, wisdom, agility;

    strength     = (rand() % 20) + 1;
    dexterity    = (rand() % 20) + 1;
    intelligence = (rand() % 20) + 1;
    charisma     = (rand() % 20) + 1;
    wisdom       = (rand() % 20) + 1;
    agility      = (rand() % 20) + 1;

    cout << "\n=== CHARACTER STATS ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Charisma: " << charisma << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Agility: " << agility << endl;

    return 0;
}