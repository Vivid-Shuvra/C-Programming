//Using function overloading & access function.....

#include "Point.h"

int main(){
    Point p;
    p.print();
    cout<<endl;
    Point q(10,15);
    Point r(10, 15,2,3);
    q.print();
    cout<<endl;
    cout << q.length(10,15) << endl;//Task 1
    cout << r.length(10, 15, 2,3) << endl;// Task 2

    cout << q.X()<<endl; // Task 3
    cout << q.X(4)<<endl;
    cout << q.Y()<<endl;
    cout << q.Y(5)<<endl;
    return 0;
}
