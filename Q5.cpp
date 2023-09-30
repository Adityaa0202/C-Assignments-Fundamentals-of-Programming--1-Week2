// Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter side a:";
    cin>>a;
    cout<<"Enter side b:";
    cin>>b;
    cout<<"Enter side c:";
    cin>>c;
    if(a==b==c){
        cout<<"equilateral triangle";

    }
    else if((a!=b && a!=c) && (b!=a && b!=c)){
        cout<<"scalene triangle";
        
    }
    else{
        cout<<"isosceles triangle";

    }

}