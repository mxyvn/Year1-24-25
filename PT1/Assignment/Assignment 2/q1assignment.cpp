#include<iostream>
using namespace std;
int main()
{
    const int SIZE=5, TotalSIZE = SIZE*2;
    int array1[SIZE],array2[SIZE],array3[SIZE*2];
    int sum=0;
    double average;
    int OddNumber = 0;
    int highest ;
    int smallest;
    int range;


    cout<<"Enter table array1: "<<endl;
    
    for(int i=0; i < SIZE; ++i)
    {
        cout<<"Please enter an integer: ";
        cin>>array1[i];
    }
    cout<<endl;
    cout<<"Enter table array2: "<<endl;
    for(int i=0; i < SIZE; ++i)
    {
        cout<<"Please enter an integer: ";
        cin>>array2[i];
    }
    for(int i= 0; i < SIZE; ++i)
    {
        array3[i] = array1[i];
        array3[i + SIZE]=array2[i];
    }
    cout<<endl;
    cout<<"OUTPUT:"<<endl;
    cout<<"Table array3:"<<endl;
    for(int i=0; i < SIZE*2; ++i)
    {
       cout<<array3[i]<<" "; 
    }
    cout<<endl;

    highest = array3[0];
    smallest = array3[0];
    for (int i=0; i<TotalSIZE; ++i)
    {
        sum += array3[i];
        if ( array3[i] % 2 != 0)
        {
            OddNumber++;
        }
        if(array3[i] > highest) 
        {
            highest = array3[i];
        }
        if(array3[i] <smallest)
        {
            smallest = array3[i];
        }
    }
     range = highest - smallest;

    average = static_cast<double>(sum) / TotalSIZE;
    cout<<"The average of ten numbers in array3 = "<<average<<endl;
    cout <<"The range of values in array3 = "<<range<<endl;
    cout<<"The number of odd numbers in array3 = " <<OddNumber<<endl;
    


    
return 0;
}