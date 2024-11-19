#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

// Creating ItemToPurchase class
class ItemToPurchase {
    public:
    
        // Constructor
        ItemToPurchase();

        // Setters
        void setName(string name);
        void setPrice(int price);
        void setQuantity(int quantity);

        // Getters
        string getName() const;
        int getPrice() const;
        int getQuantity() const;


    private:
        string itemName;
        int itemPrice;
        int itemQuantity;
};

#endif