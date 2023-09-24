//Token Categorization

//Write a program to determine whether a given input is numeric or not.

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter any constant: ";
    string input = "";
    cin>>input;

    for(int a=0; a<input.length(); a++)
    {
        if(!isdigit(input[a]))
        {
            cout<<"Not Numeric";
            return 0;
        }
    }

    cout<<"Numeric";
    return 0;
}
