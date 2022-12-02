#ifndef _POINT_H
#define _POINT_H
#include<iostream>
using namespace std;

class  point{

    public:
        point();
        point(int ,int);
        void print();
        void rmoveTo(point&);

    private:
        int m_x;
        int m_y;

};


point::point(){

    m_x=0;
    m_y=0;
}

  point::point(int initX, int initY){
    m_x= initX;
    m_y=initY;
}

  void point:: print(){
    cout<< "(" << m_x << "," << m_y<< ")";
}

  void point::rmoveTo(const point& p){
    m_x= m_x + p.m_x;
    m_y= m_y + p.m_y;
    p.m_x=7;

}
#endif
