#include "rectangle.h"

class square:public rectangle{
public:
    square(int X=0, int Y=0, int Z=0);
    //void print();
private:
    int m_sidez;
};

square::square(int X, int Y, int Z):rectangle(X, Y, Z, Z){
m_sidex= Z;
m_sidey=Z;
}
