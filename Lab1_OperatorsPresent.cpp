//Token Categorization

//Write a program to determine whether a given input has operators or not.

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter any expression: ";
    string input = "";
    cin>>input;

    char operators[5] = {'+', '-', '*', '/', '='};

    int Count=0;

    bool check=false;

    for(int i=0; i<input.length(); i++)
    {
        for(int j=0; j<5; j++)
        {
        if(input[i]==operators[j])
        {
            check=true;
            cout<<"Operator "<<Count+1<<": "<<input[i]<<endl;
            Count++;
        }
        }
    }

    if(!check)
    {
        cout<<"No operator";
    }
}

