#include <iostream>


double* full_array(double *p, int limit );
void showArray(double *begin, double* end);
void revalue(double *first, double *begin, double *end);
int main()
{
    using namespace std;
    double a[5];
    double *result;
    result = full_array(a,3);
    showArray(a,result);
    revalue(a,a,&a[1]);
    showArray(a,result);
    return 0;
}

double* full_array(double *p, int limit )
{
    using namespace std;
    double x;
    for (int i = 0; i < limit; i++)
    {
        cout<<"请输入第"<<i<<"个值"<<endl;
        cin>>x;
        *(p + i) = x;
    }
    return (p+limit);
}

void showArray(double *begin, double* end)
{
    using namespace std;
    double * p;
    for (p = begin; p != end; p++)
    {
        cout<<*p<<endl;
    }
}


void revalue(double *first, double *begin, double *end)
{
    for (first = begin; first != end; first++)
    {
        (*first) *= 2;
    }
}
