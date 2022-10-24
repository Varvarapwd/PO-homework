#include <iostream>
#include <cstdlib>
using namespace std;

class Bestie
{
 public:
    string name;
    string hobby;
    string favourite_drink;
    string favourite_animal;
    int age;
    
    void print()
    {
        std::cout<< name << " "<< hobby << " "<<favourite_drink<< " "<< favourite_animal << " " << age<< "";
    
    }
};
class Bestiesbf
{
 public:
    string name;
    string profession;
    string hobby;
    string favourite_animal;
    int age;
    void print()
    {
        std::cout << name << " "<< hobby << " "<<profession<< "  "<< favourite_animal << " " << age <<" ";
    
    }
};
class Animal
{
 public:
    string type;
    string name;
    string hobby;
    int age;
    void print()
    {
        std::cout<<type<< " "<< name << " "<< hobby << " "<< age<< " ";
    
    }
};
int main()
{
    Bestie a;
    a.name = "Ann";
    a.hobby ="Watching series";
    a.favourite_drink = "Coffee";
    a.favourite_animal = "Dog";
    a.age = 21;
    a.print();
    Bestiesbf b;
    b.name = "Mate";
    b.profession = "doctor";
    b.hobby = "Cuddling and watching series with Ann";
    b.favourite_animal = "Dog";
    b.age= 26;
    b.print();
    Animal c;
    c.type ="Dog";
    c.name = "Mikey";
    c.hobby="Playing with Ann and Mate";
    c.age = 2;
    c.print();
    
    return 0;
  
}
