#include <iostream>
#include <fstream> // data type for input files
#include <iomanip> // stream manipulators (formatting)
using namespace std;

#define SIZE 10


void output(int itemNo[], int price[SIZE], int discount[SIZE])
{
    double afterDis[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        afterDis[i]=price[i]-(discount[i]/100.0)*price[i];
    }
    cout << "Number of items on sale\n";
    cout << "-----------------------------------------------------------------\n";
    cout << setw(10) << " Item No " << setw(10) << " Price " << setw(11) << " Discount(%) " << setw(15) << " Price after discount\n";
    for(int i=0; i<SIZE; i++)
    {
        cout << right;
        cout << setw(10) << itemNo[i] << setw(10) << price[i] << setw(10) << discount[i] << setw(15) << afterDis[i] << endl;
    }
}

void input(int itemNo[], int price[SIZE], int discount[SIZE])
{
    fstream infile("input.txt",ios::in);
    
    if(input){
        for(int i=0; i<SIZE; i++)
        {
            infile>>itemNo[i]>>price[i]>>discount[i];
        }
        output(itemNo,price,discount);
    }else
    {
        cout << "ERROR: Cannot open file\n";
    }
    infile.close();
}

int main()
{
    int itemNo[SIZE], price[SIZE], discount[SIZE];
    input(itemNo, price, discount);
}
