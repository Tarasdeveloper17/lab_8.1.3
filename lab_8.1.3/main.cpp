#include <iostream>
#include <string>
#include <string.h>
using namespace std;

char* Change(char* s, char c, char c1)
{
char d[4] = "***";
 for (int i=0; s[i] != '\0'; i++)
 if ((c == s[i]  && c1 == s[i+1]) ||( c1 == s[i] && c == s[i+1]))
 {
     s[i] = 0;
     strcat(s, d);
     
 }
     
    return s;
 }
int main()
{
    char s[10];
    cout << "Enter string:" << endl;
    cin.getline(s, 10);
    char c = 'n';
    char c1 = 'o';
    Change(s, c, c1);
    cout<<"After: "<<s<<endl;
    return 0;
}

