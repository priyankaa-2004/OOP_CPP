//multiple catch for single try
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
    }
    catch(int x){
        cout<<"integer: "<<x;
    }
    catch(char x){
        cout<<"character: "<<x;
    }
    catch(float x){
        cout<<"float: "<<x;
    }
return 0;
}