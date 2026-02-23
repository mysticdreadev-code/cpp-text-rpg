#include <iostream>
#include <string>
using namespace std;

int main()
{
  
  string word[4];

  
  cout << "enter your name:" << endl;
  cin >> word[0];
  cout << word[0]<< endl;
  cout << "enter your weapon:" << endl;
  cin >> word[1];
  cout << word[1]<< endl;
  cout << "enter your armor:" << endl;
  cin >> word[2];
  cout << word[2]<< endl;
  cout << "Enter your magical item:" << endl;
  cin >> word[3];
  cout << word[3]<< endl;
  
  
  for (int i = 0; i < 4; i++)
   cout<<word[i]<<" ";
  
  
  return 0;
}