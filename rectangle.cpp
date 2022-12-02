#include "rectangle.h"

rectangle::rectangle(int X, int Y, int sideX, int sideY):point(X, Y){
m_sidex= sideX;

}

void rectangle::print(){
cout<< "A rectangle with point at:";
point::print();
cout<<", sides="<< m_sidex<<","<<m_sidey;
}
