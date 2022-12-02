#ifndef _TEMPLATE_H
#define _TEMPLATE_H
#include<iostream>
using namespace std;
class  Max{

    public:
        //Max();
        template <class  T>
        T maximum( T a, T b ){
        return (a>b)?a:b;
    }
    template <class  T>
    void print(T number)
    {
        cout<< "The maximum number is:"<< number;
    }

};

#endif // _TEMPLATE_H
