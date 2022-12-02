/* combines declaration of class point*/

 #ifndef __POINT_H
 #define __POINT_H
 #include<iostream>
 #include<math.h>
 using namespace std;

    class Point
    {
    public:
        Point();
        Point(int ,int);
        Point(int, int, int, int);

        void print();//prints m_x & m_y
        float length(int, int);//Task1
        float length(int, int, int, int);// Task2
        int X();// Task3
        int X(int);
        int Y();
        int Y(int);

    private:
        int m_x;
        int m_y;
        int m_k;
        int m_l;
    };
    Point::Point() //initialization
 {
     m_x=0;
     m_y=0;
 }
 Point::Point(int a, int b) //initialization
 {
     m_x=a;
     m_y=b;

 }
 Point::Point(int a, int b,int c, int d) //initialization
 {
     m_x=a;
     m_y=b;
     m_k=c;
     m_l=d;
 }

   int Point::X()
  {
      return m_x;
  }

   int Point::X(int a)
  {
      m_x = a;
      return m_x;
  }
   int Point::Y()
  {
      return m_y;
  }

  int Point::Y(int a)
  {
      m_y = a;
      return m_y;
  }
void Point::print()
{
    cout << "("<<m_x <<" , "<<m_y<<")";

}
float Point::length(int a, int b)
{
    float q;
    m_x=a;
    m_y=b;
    q = sqrt(m_x*m_x +m_y*m_y);
    return q;
}
float Point::length(int a,int b, int c, int d)
{

    float r;
     m_x=a;
     m_y=b;
     m_k=c;
     m_l=d;
     r = sqrt((m_x-m_k)*(m_x-m_k)+(m_y-m_l)*(m_y-m_l));
    return r;
}
 #endif // _point_H
