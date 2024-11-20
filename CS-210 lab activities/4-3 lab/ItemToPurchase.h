#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

// Creating ItemToPurchase Class (Object)
class ItemToPurchase {
    public:
    
        // Constructor
        ItemToPurchase();

        // Setters (Mutators)
        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quantity);

        // Getters (Accessors)
        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;


    private:
        // Private members

        // Name of item
        string itemName;

        // Price of the item 
        int itemPrice;

        // Quantity of item
        int itemQuantity;
};

#endif