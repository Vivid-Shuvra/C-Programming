#include<iostream>
#include<vector>
#include<thread>
#include<string>
#include <Windows.h>
using namespace std;

void hello()
{
    vector<string> s ={ "H", "E", "L", "L", "O"," ", "W","O", "R", "L", "D"};
    for(string x : s){
        cout << x;
        Sleep(1000);//in mili-second (1 second)...
    }
    cout << endl;
}

void hi()
{
    vector<string> s ={ "D", "L", "R", "O", "W", " ", "O", "L", "L", "E", "H"};
    for(string x : s){
        cout << x;
        Sleep(1000);//in mili-second (1 second)...
    }
    cout << endl;
}

void num()
{
     for(int i=1;i<=4 ; i++) {
        cout << i << ends;
        Sleep(1000); //in mili-second (1 second)...
    }
    cout << endl;
}


int main()
{
    thread t (hello);
    t.join();
    thread t2 (hi);
    t2.join();
    thread t3 (num);
    t3.join();


    return 0;
}
