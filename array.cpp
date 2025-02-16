#include<iostream>
using namespace std;

class distance
{
    private:
    int feet;
    int inches;
    
    public:
    distance() 
    {
        feet = 0;
        inches = 0;
    }

    distance(int f,float i)
    {
        feet = f;
        inches = i;
    }

    distance(distance &d)
    {
        feet = d.feet;
        inches = d.inches;

    }
    void setData()
    {
        cout<<"Enter feet and inches";
        cin>>feet>>inches;
    }

    void display()
    {
        cout<<"Feet = "<<feet<<endl;
        cout<<"Inches = "<<inches<<endl;
    }

    distance add(distance d1,distance d2)
    {
        distance d3;
        d3.feet = d1.feet + d2.feet;
        d3.inches = d1.inches + d2.inches;
        d3.feet = d3.feet + d3.inches/12;
        d3.inches = d3.inches % 12;
        return d3;
        

    }



};

int main()
{

    distance d1(7,8);
    distance d2(6,10);
    distance d3;
    d3 = d1+d2;
    d3.add(d1,d2);

    return 0;
}