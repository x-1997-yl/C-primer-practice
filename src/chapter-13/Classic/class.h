#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

#include <iostream>

using namespace std;

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;

public:
    Cd(char *s1,char *s2,int n,double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd & operator=(const Cd &d);
};

class Classic : public Cd
{
private:
    char * title;
public:
    Classic(char *s1,char *s2,int n,double x, char *s3);
    Classic();
    virtual Classic & operator=(const Classic &d);
    virtual void Report() const;
    virtual ~Classic();
};



#endif // CLASS_H_INCLUDED
