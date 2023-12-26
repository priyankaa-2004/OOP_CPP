//how to use array in objects
#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
    void setid(){
        cout<<"enter id of employee"<<endl;
        cin>>id;
    }
    void getid(){
        cout<<"the id of employee "<<count+1<<" is "<<id<<endl;
        count++;
    }
};

int employee::count;

int main(){
    employee facebook[4];
    for(int i=0;i<4;i++){
        facebook[i].setid();
        facebook[i].getid();
    }
return 0;
}