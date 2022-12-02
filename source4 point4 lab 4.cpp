#include"circle.h"
//#include"rectangle.h" ::: it does not exist here...
#include"square.h"

 int main(){
     circle c(1,2,3);
     cout<<endl;
     c.print();
     cout<<endl;
     c.moveTo(point(4,5));// c.moveTo(4,5);
     rectangle r(1,2,6,7);
     cout<<endl;
     r.print();
     square s(1,2,4);
     cout<<endl;
     s.print();
 }
