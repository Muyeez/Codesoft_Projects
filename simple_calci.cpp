/**
 * @file simple_calci.cpp
 * @author Muyeez Pasha (you@domain.com)
 * @brief Takes the input from the user and performs basic 
 * @version 0.1
 * @date 2023-08-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;
class Calculator
{
    private:int op1,op2; char action;
    public:
    Calculator()
    {
        this->op1=0;
        this->op2=0;
    }
    void calcu()
    {
        cout<<"Enter the two numbers\n";
        cin>>op1>>op2;
        cout<<"Enter the operation to perform\n";
        cin>>action;
        switch (action)
        {
        case '+': cout<<op1+op2;
                    break;
        case '-': cout<<op1-op2;
                    break;
        case '/': cout<<float(op1)/float(op2);
                    break;
        case '*': cout<<op1*op2;
                    break;
        
        default: cout<<0;
            break;
        }
    }
};
int main()
{
    Calculator obj;
    obj.calcu();
}