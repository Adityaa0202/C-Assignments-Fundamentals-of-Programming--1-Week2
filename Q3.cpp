// Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

#include<iostream>
using namespace std;
int main(){

    int y;
    cout<<"Enter year:";
    cin>>y;

    if(y%4==0){

        cout<<" It is a leap year:"<<y;

    }
    else{
        cout<<" Not a leap year:"<<y;

    }

}