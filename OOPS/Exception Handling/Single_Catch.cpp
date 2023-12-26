#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x: ";
    cin>>x;
    try{
        if(x==0){
            throw(x);
        }
        if(x==10){
            throw('x');
        }
        if(x==100){
            throw(5.5);
        }
        if(x==1000){
            throw("x");
        }
    }
    catch(...){
        cout<<"error!"<<endl;
    }
return 0;
}