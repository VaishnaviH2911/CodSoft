#include<iostream>
using namespace std;

template<class T>
T Addition(T No1,T No2)
{
    T Sum=0;
    Sum=(No1+No2);
    return Sum;
}

template<class T>
T Substraction(T No1,T No2)
{
    T Sub=0;
    Sub=(No1-No2);
    return Sub;
}

template<class T>
T Multiply(T No1,T No2)
{
    T Mult=1;
    Mult=(No1*No2);
    return Mult;
}

template<class T>
T Division(T No1,T No2)
{
    T Div=0;
    Div=(No1/No2);
    return Div;
}

int main()
{
    long double No1=0;
    long double No2=0;
    long double Ret=0;
    int ch=0;
    char ch1='\0';

    cout<<"\n---------------------SIMPLE CALCULATOR--------------------------\n\n";

    do
    {
        cout<<"\nEnter the first number:";
        cin>>No1;

        cout<<"Enter the second number:";
        cin>>No2;
        
        cout<<"\nOperations:\n";
        cout<<"1.Addition\n";
        cout<<"2.Substraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"5.Exit\n\n";

        cout<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                Ret=Addition(No1,No2);
                cout<<"\nAddition is:"<<Ret<<"\n\n";
                break;
            case 2:
                Ret=Substraction(No1,No2);
                cout<<"\nSubstraction is:"<<Ret<<"\n\n";
                break;
            case 3:
                Ret=Multiply(No1,No2);
                cout<<"\nMultiplication is:"<<Ret<<"\n\n";
                break;
            case 4:
                if(No2==0)
                {
                    cout<<"Division by zero is invalid\n\n";
                }
                else
                {
                    Ret=Division(No1,No2);
                    cout<<"\nDivision is:"<<Ret<<"\n\n";
                }
                break;
            case 5:
                cout<<"\nThank you for using the calculator!!!!\n\n";
                return 0;
            default:
                cout<<"Invalid choice!!\n"<<"\n";
        }
        cout<<"Do you want to continue?(y/n):";
        cin>>ch1;
    }while(ch1=='y');

    if(ch1=='n')
    {
        cout<<"\nThank you for using the calculator!!!!\n\n";
    }

    return 0;
}