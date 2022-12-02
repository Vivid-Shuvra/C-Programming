#include<iostream>
using namespace std;

class base{
    int j;

    public:
        base(int b)
        {
            j=b;
            cout<< "const..base"<<endl;
        }
        void showj(){
        cout<<"value of base "<<j<<endl;
        }
        ~base(){
        cout<< "dest..base"<<endl;
        }

};

class d:public base
{
    int i;
    public:
        d(int a, int b):base(b)
        {
            i=a;
            cout<< "const.. derive"<<endl;
        }
        void showi(){
        cout<<"value of derive "<<i<<endl;
        }
        ~d(){
        cout <<"dest.. derive"<<endl;
        }
};

main(){
    d ob(10, 20);
    ob.showi();
    cout<<endl;
    ob.showj();

    return 0;
}
