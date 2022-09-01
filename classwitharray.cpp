#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcouter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter id of your item num " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for(int i=0;i<counter;i++){
    cout << "theprice of itemid" << itemid[i] << "is" << itemprice[i] << endl;
}
}
int main() 
{
    shop dukan;
    dukan.initcouter();
    dukan.setprice();
    dukan.displayprice();
}
