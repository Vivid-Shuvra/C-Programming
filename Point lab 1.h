 /* combines declaration of class point*/

 #ifndef __POINT_H
 #define __POINT_H
 #include<iostream>
 using namespace std;

    class Point
    {
    public:
        Point();
        void print();//prints m_x & m_y

    private:
        int m_x;
        int m_y;
    };
    Point::Point() //initialization
 {
     m_x=0;
     m_y=0;
 }
void Point::print()
{
    cout << "("<<m_x <<" , "<<m_y<<")";
}
 #endif // _point_H
