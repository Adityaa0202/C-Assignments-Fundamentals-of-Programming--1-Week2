// Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main(){

    int l,b;
    cout<<"Enter lenght:";
    cin>>l;
    cout<<"Enter Breadth:";
    cin>>b;

    float area = l*b;
    float perimeter = 2*(l+b);

    if(area>perimeter){

        cout<<"area of the rectangle is greater than its perimeter:"<<area;

    }
    else{
        cout<<"perimeter is greater than area of rectangle";
    }

}