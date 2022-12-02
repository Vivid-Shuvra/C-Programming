#include "point.h"

class rectangle: public point{
public:
    rectangle(int X=0, int Y=0, int sideX=0, int sideY=0);
    void print();
protected:
    int m_sidex, m_sidey;
};

rectangle::rectangle(int X, int Y, int sideX, int sideY):point(X, Y){
m_sidex= sideX;
m_sidey=sideY;
}

void rectangle::print(){
cout<< "A rectangle with point at:";
point::print();
cout<<", sides="<< m_sidex<<","<<m_sidey<<endl;
}



