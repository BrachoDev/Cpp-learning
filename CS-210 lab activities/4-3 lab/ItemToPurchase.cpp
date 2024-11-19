#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Constructor
ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

// Setters
void ItemToPurchase::setName(string name) {
    itemName = name;
}

void ItemToPurchase::setPrice(int price) {
    itemPrice = price;
}

void ItemToPurchase::setQuantity(int quantity) {
    itemQuantity = quantity;
}

// Getters
string ItemToPurchase::getName() const {
    return itemName;
}

int ItemToPurchase::getPrice() const {
    return itemPrice;
}

int ItemToPurchase::getQuantity() const{
    return itemQuantity;
}