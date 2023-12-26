#include<iostream>
#include<fstream>
using namespace std;
int main(){

    //reading and writing in same program and in same file

    //writing
    string name;
    cout<<"enter name";
    cin>>name;
    ofstream hout ("working.txt");
    hout<<name + " is my name";
    hout.close();   // important while reading and writing in same program and in the same file

    //reading
    string content;
    ifstream hin("working.txt");
    getline(hin,content);
    hin>>content;
    cout<<content;
    hin.close();

return 0;
}