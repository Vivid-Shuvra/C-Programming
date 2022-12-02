#include "circle.h"

circle::circle(int X, int Y, int R):point(X, Y){
m_r= R;
}

void circle::print(){
cout<< "A circle with center at:";
point::point();
cout<<", radius="<< m_r;
}
