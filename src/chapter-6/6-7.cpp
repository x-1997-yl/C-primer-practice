#include <iostream>
#include <cctype>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string word;
    char  name[40];
    int i=0;
    int j=0;
    int k=0;
    while (cin>>word)
    {
        if (word.length() ==1 && word[0] == 'q')
        {
            break;
        }
        else if (isalpha(word[0]))
        {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            k++;
        }
    }
    cout<<i<<"个元音开头的单词"<<endl;
    cout<<j<<"个非元音开头的单词"<<endl;
    cout<<k<<"个非单词"<<endl;
}
