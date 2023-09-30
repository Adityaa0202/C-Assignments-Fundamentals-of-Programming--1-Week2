// Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

#include<iostream>
using namespace std;
int main(){

    int r;
    cout<<"Enter radius:";
    cin>>r;

    float area =3.142 * r*r;    //pi*r*2
    float circumference = 2*3.142 *r;  //2*pi*r 

    if(area>circumference){

        cout<<"Area is greater than circumference.";

    }
    else {

        cout<<"rea of this circle is not larger than the circumference ";


    }

}



