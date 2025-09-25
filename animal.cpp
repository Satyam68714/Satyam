#include<iostream>
using namespace std;
class Animal
{
    public:
    Animal()
    {
        cout<<"Animal is eating"<< endl;
    }
};


class Bird
{
    public:
    Bird()
    {
        cout<<"Bird is flying"<< endl;
    }
};

class Mammal: virtual public Animal
{
    public:
    Mammal()
    {
        cout<<"mammal dont lays egg"<< endl;
    }
};
int main() {
    Animal a;  
    Bird b;     
    Mammal m;   

    return 0;
}