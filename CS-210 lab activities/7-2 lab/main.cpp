#include <iostream>
using namespace std;

class ContactNode {
public:
   
   // Constructor to Initialize a ContactNode with a name and phone number
   ContactNode(string name, string phoneNumber){
    // Setting contact name 
    contactName = name;
    // Setting contact phone number
    contactPhoneNumber = phoneNumber;
    // Setting the next node pointer to a nullptr
    nextNodePtr = nullptr;
   }
   
   // Accessor for the contact's name
   string GetName() const {
    return contactName;
   }

   // Accessor for the contact's phone number
   string GetPhoneNumber() const {
    return contactPhoneNumber;
   }

   // Inserting a new node after the current node
   void InsertAfter(ContactNode* newNode) {
    newNode -> nextNodePtr = this -> nextNodePtr;
    this -> nextNodePtr = newNode;
   }

   // Accessor for the next node pointer
   ContactNode* GetNext() const {
    return nextNodePtr;
   }

   // Prints the contact's details (name and phone number)
   void PrintContactNode() const {
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNumber << endl;
   }
   
private:
   // Private data members to store the contact details and next node pointer
   string contactName;
   string contactPhoneNumber;
   ContactNode * nextNodePtr;
   
};

int main() {
   // Variables to store the input for contact names and phone numbers
   string name1, phone1;
   string name2, phone2;
   string name3, phone3;


   // Read input for the first, second and third contacts
   getline(cin, name1);
   getline(cin, phone1);

   getline(cin, name2);
   getline(cin, phone2);

   getline(cin, name3);
   getline(cin, phone3);


   // Creating three ContactNode objects using the input data
   ContactNode* contact1 = new ContactNode(name1, phone1);
   ContactNode* contact2 = new ContactNode(name2, phone2);
   ContactNode* contact3 = new ContactNode(name3, phone3);

   // Linking the nodes to form a linked list
   contact1 -> InsertAfter(contact2);
   contact2 -> InsertAfter(contact3);

   // Output with the details of each contact
   cout << "Person 1: " << contact1->GetName() << ", " << contact1->GetPhoneNumber() << endl;
   cout << "Person 2: " << contact2->GetName() << ", " << contact2->GetPhoneNumber() << endl;
   cout << "Person 3: " << contact3->GetName() << ", " << contact3->GetPhoneNumber() << endl;

   // Output with the entire contact list using the linked list and a loop
   cout << endl << "CONTACT LIST" << endl;
   ContactNode* currentNode = contact1;
   while (currentNode != nullptr) 
   {
    currentNode->PrintContactNode();
    cout << endl;
    currentNode = currentNode->GetNext();
   }
   
   return 0;
}