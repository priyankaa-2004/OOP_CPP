//to enter id and price of items of a shop and display them as well
//how can i get the price of one desired item?
#include<iostream>
using namespace std;

class shop{
    int itemid[50];
    int itemprice[50];
    int counter=1;
    public:
    //void initcounter(){
    //    counter=0;
    //}
    void setprice();
    void displayprice();
    void getprice();
};

void shop::setprice(){
    cout<<"enter the id of item "<<counter<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of the item "<<counter<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice(){
    for(int i=0;i<counter;i++){
        cout<<"the price of item "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    for (int i=0;i<5;i++){
        dukaan.setprice();
    }
    dukaan.displayprice();
    dukaan.getprice();
return 0;
}