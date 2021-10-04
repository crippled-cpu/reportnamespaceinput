// SomethingElse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string name; 
    //get the name from keyboard input
    
    cout << "Enter your name: ";
    
    //store it in name var
    cin >> name;
    
    // send the text input to the screen as well as the text in name var
    // endl will send a return character
    // to move to a new line 
    cout << "Hello " << name << endl; // I added a space after hello to make a space between my name and hello
    
    // add system pause to see the output on console
    system("pause");
    
    
    return 0;
}

