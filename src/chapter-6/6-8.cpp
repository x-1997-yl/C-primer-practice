#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream fin;
    int i = 0;
    fin.open("test.txt");
    char ch;
    fin>>ch;
    while (fin.good())
    {
        i++;
        fin>>ch;
    }
    if (fin.eof())
    {
        cout<<"Get the file end"<<endl;
    }
    cout<<"总共有"<<i<<"个字符"<<endl;
    fin.close();
    return 0;
}
