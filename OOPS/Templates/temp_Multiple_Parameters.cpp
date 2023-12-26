#include<iostream>
using namespace std;

/*
template<class T1, class T2>  (multiple comma separated parameters)//this line means that-->kuch aise data type hai jo object create karte time specify hoga
class name{
    //code
}
*/

template<class T1, class T2>    //bohot saari custom data type ismein add kar sakte ho
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<data1<<endl<<data2;
    }
};

int main(){
    myclass<int,char> obj(1,'5');
    obj.display();
return 0;
}