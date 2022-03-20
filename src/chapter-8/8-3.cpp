#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void coutUpWord(string &s);

int main()
{
    string word;
    cout<<"Please enter words,q to quit"<<endl;
    while ((cin>>word) && (word != "q"))
    {
        coutUpWord(word);
        cin.get();
    }
    return 0;
}

void coutUpWord(string &s)
{
    for (int i = 0;i < s.length(); i ++)
    {
        s[i] = toupper(s[i]);

    }
    cout<<s<<endl;
}
