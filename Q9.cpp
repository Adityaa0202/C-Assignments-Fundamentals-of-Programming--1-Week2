// Ques : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include<iostream>
using namespace std;
int main(){


    char c;
    int a;
    cout<<"Enter charcter:";
    cin>>c;
    a=(int)c;

    if((a>=97 && a<=122) ||(a>=65 && a<=90)){

        cout<<"Character is alphabet";

    }
    else if(a>=48 && a<=57)

     cout<<"Character is Digit";

     else{

     cout<<"Character is Special character";
     }

}