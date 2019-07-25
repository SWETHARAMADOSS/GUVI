#include<iostream>
using namespace std;
int main()
{
  char b;
  cin>>b;
  int x=(int)b;
  if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
    cout<<"Vowel";
  else if(b<45)
    cout<<"Invalid";
  else
    cout<<"Consonant";
  return 0;
}
