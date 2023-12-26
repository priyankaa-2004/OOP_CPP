#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st="helloo";
    string str2;
     
    //opening a file using constructor and writing in it
    ofstream out("working.txt");//ofstram is a class which come along with fstream header file and out is its object created by us
    //this ofstream helps in writing operation in files
    out<<st;

    //reading from a file
    ifstream in("working2.txt");
    getline(in,str2); //to print the whole sentence
    in>>str2;
    cout<<str2;
return 0;

}