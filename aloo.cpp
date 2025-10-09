#include<iostream>
class suresh; 
class amit 
int data;
public:
void input(int value)
{
     data = value;

}
friend void add(one , two);
};
class two{
     int data;
     public:
     void input(int value)
     {
          data = value;

     }friend void add(one , two);
     
};
void add(one obj1,two obj2){
     cout<<"Sum of two objects from definition of class one and"<<
}