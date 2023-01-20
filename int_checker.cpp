//
// Created by jenny zhang on 12/30/22.
//
// Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs yes if every character is a digit 0-9.
//
// Ex: If the input is 1995, the output is:
//
// yes
// Ex: If the input is 42,000 or 1995!, the output is:
//
// no
#include <iostream>
#include <string>
using namespace std;

int main() {

    string userString ;
    unsigned int i ;

    cin >> userString ;

    for ( i = 0 ; ( i < userString.size() ) ; i++ )
    {
        if ( ! (isdigit(userString.at(i) ) ) )
        {
            cout << "no" << endl ;
            break ;
        }
        if ( i == ( userString.size() - 1 ) )
        {
            cout << "yes" << endl ;
        }
    }

    return 0;
}

