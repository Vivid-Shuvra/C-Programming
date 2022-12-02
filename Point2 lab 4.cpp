#include "Point.h"

void Point::Point(){

    m_x=0;
    m_y=0;
}

void Point::Point(int initX, int initY){
    m_x= initX;
    m_y=initY;
}

void Point:: print(){
    cout<< "(" << m_x << "," << m_y<< ")";
}

void Point::rmoveTo(Point p){
    m_x= m_x + p.m_x;
    m_y= m_y + p.m_y;
}
