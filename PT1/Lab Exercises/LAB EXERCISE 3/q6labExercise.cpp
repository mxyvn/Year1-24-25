//A program to calculate rectangle's area
#include<iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double,double);
void displayData(double,double,double);

double getLength()
{
    double length;
    cout<<"Enter rectangle's length (cm): ";
    cin>>length;
    return length;
}

double getWidth()
{
    double width;
    cout<<"Enter rectangle's width (cm): ";
    cin>>width;
    return width;
}

double getArea(double length, double width)
{
    double area = length*width;
    return area;
}

void displayData(double length, double width, double area)
{
    cout<<"The length of rectangle is "<<length<<" cm"<<endl;
    cout<<"The width of rectangle is "<<width<<" cm"<<endl;
    cout<<"Area of rectangle is "<<area<<" cm square"<<endl;
}

int main()
{
    double length,width,area;

    length=getLength();
    width=getWidth();
    area=getArea(length,width);
    displayData(length,width,area);

    return 0;
}
