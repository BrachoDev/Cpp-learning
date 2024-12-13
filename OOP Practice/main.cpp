// If you need clarification use the link bellow for FreeCodeCamp's course:
// https://www.youtube.com/watch?v=wN0x9eZLix4


#include <iostream>
using namespace std;


// Abstract Class for Abstraction to hide complex procedure:
class AbstractEmployee
{
    virtual void AskForPromotion()=0;
};



// When A class includes another class, it must provide an implementation for the methods within that class
class Employee:AbstractEmployee{

    private:

        string Company;
        int Age;

    // Protected attributes can only be accessed by Childe class like the Developer Class in this case.
    protected:

        string Name;

    public: 

        // Constructor:
        // It has three rule:
        // 1. It has the same name as the class.
        // 2. It has no return type.
        // 3. Needs to be public
        Employee(string name, string company, int age) {

            Name = name;
            Company = company;
            Age = age;

        }

        // setter:
        void setName(string name) {
            Name = name;
        }
        
        void setCompany(string company) {
            Company = company;
        }

        void setAge(int age) {
            
            if (age >= 18)
            {
                Age = age;
            }

        }

        // Getters:
        string getName() {
            return Name;
        }

        string getCompany() {
            return Company;
        }

        int getAge() {
            return Age;
        }
        

        void IntroduceYourself() {
            cout << "Name = " << Name << endl;
            cout << "Company = " << Company << endl;
            cout << "Age = " << Age << endl;
        }

        // Implementation for the AskForPromotion method from the AbstractEmployee class
        void AskForPromotion() {

            if (Age >= 30)
            {
                cout << Name << " got promoted!" << endl;
            } else {
                cout << Name << " sorry, NO promotion for you." << endl;
            }
            
        }

        void Work() {
            cout << Name << " is checking email, task backlog, performing tasks..." << endl;
        }

};

// Child class from Employee
class Developer: public Employee {
    
    private:

        string FavProgrammingLanguage;
    
    public:
        
        // Setter
        void setFavProgrammingLanguage(string favProgrammingLanguage) {
            FavProgrammingLanguage = favProgrammingLanguage;
        }

        // Getter:
        string getFavProgrammingLanguage() {
            return FavProgrammingLanguage;
        }

        // Constructor for Developer class
        Developer(string name, string company, int age, string favProgrammingLanguage) 
            :Employee(name,company,age) // This piece of code initializes the attributes from the Employee class
        {
            FavProgrammingLanguage = favProgrammingLanguage;
        }

        void FixBug() {
            cout << Name << " fixed bug using " <<  FavProgrammingLanguage << endl;
        }

        void Work() {
            cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
        }
};   

class Teacher: public Employee {
    
    private:
        string Subject;
    public:

        // Setter:
        void setSubject(string subject) {
            Subject = subject;
        }

        // Getter:
        string getSubject() {
            return Subject;
        }    

        // Constructor
        Teacher(string name, string company, int age, string subject)
            :Employee(name,company,age)
        {
            Subject = subject;
        }    

        void PrepareLesson(){
            cout << Name << " is preparing " << Subject << " lesson" << endl;
        }    

        void Work() {
            cout << Name << " is teaching " << Subject << " code" << endl;
        }
};

int main() 
{
    Developer developer1 = Developer("BrachoDev", "Disney", 26, "C++");
    Teacher teacher1 = Teacher("Carlos", "DP", 31, "History");
    developer1.Work();
    teacher1.Work();
    
    return 0;
}