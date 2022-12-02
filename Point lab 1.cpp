/*contains definition for the Point class */

#include "Point.h"

//constructor
 Point::Point() //initialization
 {
     m_x=0;
     m_y=0;
 }
void Point::print()
{
    cout << "("<<m_x <<" , "<<m_y<<")";
}
