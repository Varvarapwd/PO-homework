#include <iostream>
#include <string>
using namespace std;
class best_friend {

public:
    string name;
    void setBestFriendName(string BestFriendName)
    {
        name = BestFriendName;
    }
    string getBestFriendName()
    {
        return name;
    }
    string favourite_animal;
    string bf_name;
};
class best_friend_bf : public best_friend
{
public:
    int age;
    void setBFName(string BFName)
    {
        bf_name = BFName;
    }
    string getBFName()
    {
        return bf_name;
    }
};
class pet : public best_friend
{
public:
    void setfavourite_animal(string favourite_animal_)
    {
        favourite_animal = favourite_animal_;
    }
    string getfavourite_animal()
    {
        return favourite_animal;
    }
    void setPetSize(string petSize)
    {
        pet_Size = petSize;
    }
    virtual void setEars(string type) 
    {
        ear_Type = type;
    }
private: string pet_Size, ear_Type;


};

class breed : public pet
{
public:
    breed(string color, string size)
    {
        color = color;
        setPetSize(size);
    }

    string getColor()
    {
        return color;
    }
      void setEars(string length, string type)
    {
        ear_Length = length;
        ear_Type = type;
    }
    string getEarsLength() 
    {
        return ear_Length;
    }
    string getEarsType() 
    {
        return ear_Type;
    }

protected:
   string color, ear_Length, ear_Type;
};

int main()
{
    pet dog;
    breed labrador("yellow","large");
    dog.setfavourite_animal("Dog");
    dog.setEars("pointy");
    labrador.setEars("long", "floppy");
    best_friend a;
    best_friend_bf b;
    a.setBestFriendName("Ann");
    b.setBFName("John");
    cout <<dog.getfavourite_animal() << " is " <<a.getBestFriendName()<< "'s favourite animal" << endl;
    cout << b.getBFName() << " decided to make " << a.getBestFriendName() << " a present. So, now they have Cody."<< endl;
    cout << "Cody is a labrador with "<< labrador.getEarsLength()<<" "<< labrador.getEarsType() << " ears" << endl;
    }
