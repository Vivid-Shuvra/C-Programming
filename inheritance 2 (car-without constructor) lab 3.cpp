#include<iostream>
using namespace std;

class vehicle{
    int wheel_no,range;

    public:
         void setwheel_no(int w){wheel_no=w;}
         void setrange(int r){range =r;}
        void showvehicle(){
        cout<<"WHHEEL_NO:"<<wheel_no<<endl;
        cout<< "RANGE:"<<range<<endl;
        }
};

class car:public vehicle
{
    int passanger;
    public:
         void setpassanger(int p){passanger=p;}
        void showcar(){
        cout<< "PASSANGER:"<<passanger<<endl;
        }

};

class truck:public vehicle
{
    int load_no;
    public:
         void setload_no(int l){load_no=l;}
        void showtruck(){
        cout<<"LOAD_NO:"<<load_no <<endl;
        }

};

main(){
    car c;
    truck t;
    c.setwheel_no(4);
    c.setrange(120);
    c.setpassanger(40);
    t.setwheel_no(8);
    t.setrange(80);
    t.setload_no(400);
    cout<<endl;
    cout<<"FOR CAR:"<<endl;
    c.showvehicle();
    c.showcar();
    cout<<endl;
    cout<<"FOR TRUCK:"<<endl;
    t.showvehicle();
    t.showtruck();




    return 0;
}
