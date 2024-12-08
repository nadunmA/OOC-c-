#include <iostream>
using namespace std;

class Item {
private:
    int itemCode;
    float unitPrice;
    float discount;
    int minimumQuntity;

public:
    Item(int iCode, float uPrice, int mQty);
    void setDiscount(float discount);
    float calPrice();
    void displayItem();

};

Item::Item(int iCode, float uPrice, int mQty)
{
    itemCode = iCode;
    unitPrice = uPrice;
    minimumQuntity = mQty;
    discount = 0.0;
}

void Item::setDiscount(float dDis)
{
    discount = dDis;
}

float Item::calPrice(int quantity)
{
    float calPrice(int quantity) {
        if (quantity < minimumQuntity) {
            cout << "not enough item" << endl;
            return 0.0;
        }
    }
    float totalPrice = quantity * unitPrice;
    totalPrice -= totalPrice * (discount / 100);
    return totalPrice
}

void Item::(int quantity)
{
    
}



int main()
{
    Item *i1 = new Item();
    Item *i1 = new Item();
    Item *i1 = new Item();
}

