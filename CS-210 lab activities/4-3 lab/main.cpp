#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   // Creating two ItemToPurchase objects
   ItemToPurchase item1;
   ItemToPurchase item2;

   // Initializing variables to hold items' name, price and quantity
   string name;
   int price;
   int quantity;

   // Getting Item 1 from user input:
   cout << "Item 1" << endl;

   // Getting item 1 name
   cout << "Enter the item name:" << endl;
   getline(cin, name);
   item1.SetName(name);

   // Getting item 1 price
   cout << "Enter the item price:" << endl;
   cin >> price;
   item1.SetPrice(price);

   // Getting item 1 quantity
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item1.SetQuantity(quantity);

   // Clearing buffer to get item 2 information
   cin.ignore();

   // Getting item 2 from user input:
   cout << "\nItem 2";

   // Getting item 1 name
   cout << "\nEnter the item name:" << endl;
   getline(cin, name);
   item2.SetName(name);

   // Getting item 1 price
   cout << "Enter the item price:" << endl;
   cin >> price;
   item2.SetPrice(price);

   // Getting item 2 quantity
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item2.SetQuantity(quantity);

   // calculating total cost of both items
   int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

   // Displaying Total Cost information
   cout << "\nTOTAL COST" << endl;

   cout << item1.GetName() << " " << item1.GetQuantity() << " @ " << "$" << item1.GetPrice() << " = " << "$" << item1.GetPrice() * item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ " << "$" << item2.GetPrice() << " = " << "$" << item2.GetPrice() * item2.GetQuantity() << endl;
   
   cout << "\nTotal: $" << totalCost << endl;
   
   return 0;
}