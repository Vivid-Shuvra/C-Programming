#ifndef _POINT_H
#define _POINT_H
#include<iostream>
#include<math.h>
using namespace std;

class  point{

    public:
        point(int X=0 ,int Y=0);
        void print();
        int r();
        int x() {return m_x;}
        int y() {return m_y;}
        void rmoveTo(const point&);
        void moveTo(const point&);

    private:
        int m_x;
        int m_y;

};

point::point(int X, int Y){
m_x= X;
m_y= Y;
}

void point::print(){
cout<< "(" << m_x<< "," << m_y << ")";
}

int point::r(){
return (int)sqrt(m_x*m_x + m_y*m_y);
}

void point::moveTo(const point& p){
m_x=p.m_x;
m_y=p.m_y;
}
void point::rmoveTo(const point& p){
m_x=m_x+p.m_x;
m_y=m_y+p.m_y;
}

#endif

