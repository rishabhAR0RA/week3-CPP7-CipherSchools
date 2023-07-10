#include <bits/stdc++.h>
using namespace std;

// single
class Animal
{
public:
    void speak()
    {
        cout << "They made a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "woof" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "meow" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;
    Cat c;

    a.speak();
    d.speak();
    c.Animal::speak();

    return 0;
}