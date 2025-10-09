#include<iostream>
#include<string>
using namespace std;

class student
{
    string name;
    int roll, marks;
    Student(string s, int r,int m)
    {
        name = s;
        roll =r;
        marks =m;
    }
    void display(){
        cout<<"Name is "<<name<<endl;
        cout<<"marks are"<<marks<<endl;
        cout<<"roll is"<<roll<<endl;
    }
};
int main(){

};
