 #include<iostream>
using namespace std;

class vehicle{
    int wheel_no,range;

    public:
        vehicle(int b, int c)
        {
            wheel_no=b;
            range=c;
        }
        void show(){
        cout<<"WHEEL_NO:"<<wheel_no<<endl;
        cout<< "RANGE:"<<range<<endl;
        }
};

class car:public vehicle
{
    int passanger;
    public:
        car(int a, int b, int c):vehicle(b, c)
        {
            passanger=a;
        }
        void showp(){
        cout<<"PASSANGER:"<<passanger<<endl;
        }

};

class truck:public vehicle
{
    int load_no;
    public:
        truck(int a, int b, int c):vehicle(b, c)
        {
            load_no=a;
        }
        void showl(){
        cout<< "LOAD_NO:"<<load_no <<endl;
        }

};

main(){
    car ob(14, 8, 120);
    truck obj(200, 10, 80);
    cout<<"FOR CAR:"<<endl;
    ob.show();
    ob.showp();
    cout<<endl;
    cout<<"FOR TRUCK:"<<endl;
    obj.show();
    obj.showl();

    return 0;
}
