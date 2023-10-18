#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    float salary;
    employee(int i,string n ,float s2)
    {
        id=i;
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
}; 
int main(void)
{
    employee e1=employee(101,"s",81980);
    employee e2=employee(102,"s",8980);
    e1.display();
    e2.display();
    return 0;
}