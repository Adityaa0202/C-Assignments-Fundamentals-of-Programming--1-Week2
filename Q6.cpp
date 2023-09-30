// Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter marks of a:";
    cin>>a;
    cout<<"Enter marks of b:";
    cin>>b;
    cout<<"Enter marks of c:";
    cin>>c;

    if(a<b && a<c)
    cout<<"Least marks of student a:"<<a;
    else if(b<a && b<c)
    cout<<"Least marks of student b:"<<b;
    else{
    cout<<"Least marks of student c:"<<c;
    }

}
