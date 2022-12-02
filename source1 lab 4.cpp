#include "Point2.h"

int main(){

point p;
point q(10, 15);
point z(3,4);
p.print();
p.rmoveTo(q);
p.print();
p.rmoveTo(z);
p.print();
cout<< endl;


return 0;
}
