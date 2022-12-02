#ifndef _MAX_H
#define _MAX_H
#include<iostream>
using namespace std;
class  Max {

    public:
       //Max();
       int maximum(int a ,int b){
       return (a>b)?a:b;
       }
       double maximum(double a, double b){
       return (a>b)?a:b;
       }
       void print(int number){
       cout<< "The maximum is: "<< number; }
       void print(double number){
       cout<< "The maximum is: "<< number; }


};
#endif
