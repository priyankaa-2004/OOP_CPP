//nested method functions
//WAp to input and check wheter a no. is binary or not and find its ones compliment and display it
#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void chk_bi();
        void ones_comp();
        void display();
};
void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bi(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect"<<endl;
            exit(0);
        }
    }
}
void binary :: ones_comp(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
          s.at(i)='0';
        }
        else{ 
            s.at(i)='1';
        }
    }
}
void binary :: display(){
    cout<<"displaying the ones compliment"<<endl;
    for(int i=0 ; i<s.length() ; i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    b.display();
    b.chk_bi();
    b.ones_comp();
    b.display();
return 0;
}

