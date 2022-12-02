#include<iostream>
#include<iomanip>

using namespace std;

 int main()
{
  const int i = 11;
  const double c= 2.99792458e8;
  cout << c << " " << i << endl;
  cout << setiosflags(ios::scientific) << setw(20) <<setprecision(3) << c << " "<< i << endl;
  cout << c << " " << i << endl;
  cout << setw(20) <<setprecision(3)  << c << " " << i << endl;
  cout << resetiosflags(ios:: fixed | ios:: showpoint)<<  setw(20) <<setprecision(12)  << c << " " << i << endl;
  cout << setfill('#') << c << " "<< setw(6) << i << endl;
  cout << setiosflags(ios:: left) << c << " "<< setw(6) << i << endl;

    return 0;
}
