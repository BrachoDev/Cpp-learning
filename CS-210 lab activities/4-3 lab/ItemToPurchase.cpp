#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Constructor
ItemToPurchase::ItemToPurchase() {
    // Initializing variables
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

// Setters

// setName function
void ItemToPurchase::SetName(string name) {
    itemName = name; 
}

// setPrice function
void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

// setQuantity function
void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

// Getters

// getName function
string ItemToPurchase::GetName() const {
    return itemName;
}

// getPrice function
int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

// getQuantity function
int ItemToPurchase::GetQuantity() const{
    return itemQuantity;
}