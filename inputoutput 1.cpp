#include<iostream>
#include<iomanip>

using namespace std;

 int main()
{
  const int i = 11;
  const double c= 2.99792458e8;
  cout << c << " " << i << endl;
  cout << setiosflags(ios::uppercase) << "hello "<< hex << c << " "<< i << endl;// not working for string..
  cout<< setiosflags(ios::fixed)<< resetiosflags(ios:: uppercase)<< c << " " << i << endl;
  cout<< setiosflags(ios::scientific|ios:: showpos)<< oct << c << " " << i << endl;

    return 0;
}
