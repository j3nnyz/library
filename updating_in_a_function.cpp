//
// Created by jenny zhang on 1/10/23.
//
//Define a function GetVolume() that takes two parameters passed by reference. The function reads two integers from input as gallons and cups in this order. The function does not return any value.
//
//Ex: If input is 25 15, then output is:
//
//25 gallons and 15 cups
#include <iostream>
using namespace std;

void GetVolume( int& gal , int& cup )
{
    cin >> gal ;
    cin >> cup;
}

int main() {
    int usrGallons;
    int usrCups;

    GetVolume(usrGallons, usrCups);

    cout << usrGallons << " gallons and " << usrCups << " cups" << endl;

    return 0;
}