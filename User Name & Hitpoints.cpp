#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    
    string name;
    int hitpoints;
    int strength, dexterity, constitution, intelligence, wisdom, charisma;

    cout << "Enter character name: ";
    cin >> name;

    hitpoints = (rand() % 11) + 10;

    strength     = (rand() % 20) + 1;
    dexterity    = (rand() % 20) + 1;
    constitution = (rand() % 20) + 1;
    intelligence = (rand() % 20) + 1;
    wisdom       = (rand() % 20) + 1;
    charisma     = (rand() % 20) + 1;

    cout << "\n=== CHARACTER DETAILS ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Hitpoints: " << hitpoints << endl;
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Charisma: " << charisma << endl;

    return 0;
}