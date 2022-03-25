#include <iostream>
#include "class.h"
#include <cstring>

using namespace std;

Cd::Cd(char *s1,char *s2,int n,double x)
{
    performers = new char(strlen(s1) + 1);
    strcpy(performers,s1);
    label = new char(strlen(s2) + 1);
    strcpy(label,s2);
    selections = n;
    playtime = x;
}


//how?
Cd::Cd(const Cd &d)
{
    delete [] performers;
    delete [] label;

    performers = new char(strlen(d.performers) + 1);
    strcpy(performers,d.label);
    label = new char(strlen(d.label) + 1);
    strcpy(label,d.label);

    selections = d.selections;
    playtime = d.selections;
}


Cd::Cd()
{
    performers = label = nullptr;
    selections = playtime = 0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    cout<<performers<<","<<label<<","<<selections<<","<<playtime<<endl;
}

Cd& Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    delete [] performers;
    delete [] label;

    performers = new char(strlen(d.performers) + 1);
    strcpy(performers,d.label);
    label = new char(strlen(d.label) + 1);
    strcpy(label,d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

Classic::Classic(char *s1,char *s2,int n,double x,char *s3)
                :Cd(s1,s2,n,x)
{
    title = new char((strlen(s3) + 1));
    strcpy(title,s3);
}

Classic &Classic::operator=(const Classic &d)
{
    Cd::operator=(d);
}

Classic::Classic()
        :Cd()
{

    title = nullptr;
}
void Classic::Report() const
{
    Cd::Report();
    cout<<title<<endl;
}


Classic::~Classic()
{
    delete [] title;
}

