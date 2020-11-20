Project 1: part 1:
#include <iostream>
using namespace std;
int main() {
char choice;
int sec;
cout << "Please enter the number of seconds here: " << endl;
cin >> sec;
cout << "Menu options: " << endl;
cout << "(M)inutes"<<endl;
cout << "(H)ours" <<endl;
cout << "(D)ays" << endl;
cout << "Select the conversion format M/H/D and enter it here: " << endl;
cin >> choice;
switch (choice) {
case 'M':
cout << "The number of seconds entered converted into minutes is: " << (sec/60)<< "
Minutes"<<endl;
break;
case 'H':
cout << "The number of seconds entered is: " << (sec/3600)<< " Hours"<<endl; break;
case 'D':
cout << "The number of seconds entered is: " << (sec/86400)<<" Days"<<endl; break;
default:
cout << "Wrong selection. Re-run the program" << endl;
}
return 0;
}
Project 1: part 2:
#include<iostream>
using namespace std;
int main()
{
const int SIZE = 20;
char s1[SIZE], s2[SIZE], s3[SIZE], s4[SIZE];
cout << "Name one: ";
cin.getline(s1, SIZE);
cout << "Name two: ";
cin.getline(s2, SIZE);
cout << "Name three: ";
cin.getline(s3, SIZE);
cout << "Name four: ";
cin.getline(s4, SIZE);
if (strcmp(s1, s2) < 0)
cout << s1 << endl << s2 << endl;
else if (strcmp(s1, s2) > 0)
cout << s2 << endl << s1 << endl;
if (strcmp(s3, s4) < 0)
cout << s3 << endl << s4 << endl;
else if (strcmp(s3,s4) > 0)
cout << s4 << endl << s3 << endl;
return 0;
}