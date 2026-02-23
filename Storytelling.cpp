#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string wantoplay();
string upper_name();
void introduction();
void tell_story(string name);

int main()
{
    string response;
    string uppercase_name;
    
    introduction();
    response = wantoplay();
    uppercase_name = upper_name();
    
    cout << "\nYour response: " << response << endl;
    cout << "Your name in uppercase: " << uppercase_name << endl;

    tell_story(uppercase_name);
    
    return 0;
}

string wantoplay()
{
    string answer;
    
    cout << "Do you want to play the game? (yes or no) " << endl;
    cin >> answer;
    
    for (int i = 0; i < answer.length(); i++) {
        answer[i] = toupper(answer[i]);
    }
    
    return answer;
}

string upper_name()
{
    string name;
    
    cout << "Please enter your name: ";
    cin >> name;
    
    for (int i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }
    
    return name;
}

void introduction()
{
    cout << "In a world where most of the human population vanished" << endl;
    cout << "The world you used to know before isn't anymore..." << endl;
    cout << "And darkness slowly consumes the world we once knew was bright..." << endl;
    cout << "That's until a single hero rises from the darkness." << endl;
}

void tell_story(string name)
{
    cout << "\n--- THE ADVENTURE BEGINS ---\n" << endl;

    cout << name << ", you awaken in a quiet village surrounded by nothing but mist." << endl;
    cout << "The air is cold. The sky darkens with an incoming storm." << endl;
    cout << "You notice there's noboby in this village but you" << endl;
    cout << "There's a faint sound coming from an abandoned warehouse nearby" << endl;
    cout << "You choose to investigate the sound" << endl;
    cout << "And now your journey begins now..." << endl;
}