#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class ShopItemOrder{
    private:
        string name;
        float unitPrice;
        int amount;
    public:
        ShopItemOrder(string name, float unitPrice, int amount)
        {
            this->name = name;
            this->unitPrice = unitPrice;
            this->amount = amount;
        }
        string GetName()
        {
            return name;
        }
        void SetName(string name)
        {
            this->name = name;
        }
        float GetUnitPrice()
        {
            return unitPrice;
        }
        void SetUnitPrice(float price)
        {
            unitPrice = price;
        }
        int GetAmount()
        {
            return amount;
        }
        void SetAmount(int amount)
        {
            this->amount = amount;
        }
        float GetTotalPrice()
        {
            return unitPrice * amount;
        }
        void PringShopItemOrder()
        {
            cout << "Order for " << name << " item, which cost " << unitPrice << "$ and has " << amount << " units." << endl;
        }
};

int main()
{
    ShopItemOrder item1("Item1", 29.8, 3);

    item1.PringShopItemOrder();
    cout << "Total price is " << item1.GetTotalPrice() << "$" << endl << endl;

    item1.SetAmount(4);
    item1.PringShopItemOrder();
    cout << "Total price is " << item1.GetTotalPrice() << "$" << endl << endl;

    item1.SetUnitPrice(7);
    cout << "Price of " << item1.GetName() << " is " << item1.GetUnitPrice() << "$" << endl;
    cout << "Total price is " << item1.GetTotalPrice() << "$" << endl;

    return 0;
}
