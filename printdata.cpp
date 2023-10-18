#include<iostream>
using namespace std;
class printdata{
    public:
    void print(int i)
    {
        cout<<"printing int:"<<i<<endl;
    }
     void print(double f)
    {
        cout<<"printing float:"<<f<<endl;
    } 
    void print(char*c)
    {
        cout<<"printing char:"<<c<<endl;
    }
};
int main(void)
{printdata pd;
pd.print(5);
pd.print(500.263),
pd.print("hello");
return 0;
}