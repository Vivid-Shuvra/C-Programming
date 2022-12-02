#include "point.h"

class circle: public point{
public:
    circle(int X=0, int Y=0, int R=0);
    void print();
    void show();
private:
    int m_r;
};

circle::circle(int X, int Y, int R):point(X, Y){
m_r= R;
}

void circle::print(){
cout<< "A circle with center at:";
point::print();
cout<<", radius="<< m_r<< endl;
}
void circle::show(){
cout<< "I am a circle at("<<x()<< ","<< y()<<")"<<endl;
}


/*class rectangle: public point{
public:
    rectangle(int X=0, int Y=0, int sideX=0, int sideY=0);
    void print();
private:
    int m_sidex, m_sidey;
};

rectangle::rectangle(int X, int Y, int sideX, int sideY):point(X, Y){
m_sidex= sideX;
m_sidey=sideY;
}

void rectangle::print(){
cout<< "A rectangle with point at:";
point::print();
cout<<", sides="<< m_sidex<< ","<<m_sidey ;
}
*/


