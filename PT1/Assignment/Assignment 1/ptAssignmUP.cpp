#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string employeeName;
    int employeeNumber, netSalary;
    char code, category;
    int overtimeSalary = 0, fixedSalary = 1200;

    cout<<"Enter employee's name : ";
    getline(cin,employeeName);
    cout<<"Enter employee's number : ";
    cin>>employeeNumber;
    cout<<"Enter employee's code (G,K,S) : ";
    cin>>code;

    if (code != 'G' && code != 'K' && code != 'S')
    {
        cout<<"Access denied. Invalid employee's code."<<endl;
    } 
    else
    {
        switch(code)
        {
            case 'G' :
                int overtime;
                cout<<"Enter category (P - Manager / B - Non-manager) : ";
                cin>>category;

                if (category=='B')
                {
                    cout<<"Enter overtime hours : ";
                    cin>>overtime;
                    if (overtime <= 10)
                    {
                        overtimeSalary = overtime * 15;
                    }
                    else if (overtime <= 20)
                    {
                        overtimeSalary = (10 * 15) + (overtime - 10) * 12;
                    }
                    else
                    {
                        overtimeSalary = (10 * 15) + (10 * 12);
                    }
                }
                netSalary = fixedSalary + overtimeSalary;
                break;
            
            case 'K' :
                cout<<"Enter category (B - Recovery / S - Maintenance) : ";
                cin>>category;

                int hours;
                cout<<"Enter number of working hours : ";
                cin>>hours;

                if (category == 'B')
                {
                    if (hours <= 100)
                    {
                        netSalary = hours * 20;
                    }
                    else
                    {
                        netSalary = 20 * 100;
                    }
                }

                if (category == 'S')
                {
                    if (hours <= 50)
                    {
                        netSalary = hours * 10;
                    }
                    else if (hours <= 100)
                    {
                        netSalary = (50 * 10) + (hours - 50) * 5;
                    }
                    else
                    {
                        netSalary = (50 * 10) + (5 * 50);
                    }
                }
                break;
            case 'S' :
                cout<<"Enter category (B - Large size toy / S - Medium size toy / K - Small size toy) : ";
                cin>>category;

                int noToys;
                cout<<"Enter number of toys : ";
                cin>>noToys;

                if (category == 'B')
                {
                    netSalary = noToys * 8;
                }
                else if (category == 'S')
                {
                    netSalary = noToys * 5;
                }
                else
                {
                    netSalary = noToys * 2;
                }
                break;
        }
        cout<<"\n---------------SALARY INFORMATION---------------"<<endl;
        cout<<"Employee's name : "<<employeeName<<endl;
        cout<<"Employee's number : "<<employeeNumber<<endl;
        cout<<"Net Salary : RM "<<netSalary<<endl;
    }
    
}

