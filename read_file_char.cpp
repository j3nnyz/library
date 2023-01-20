//
// Created by jenny zhang on 1/19/23.
//
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std ;

int FileSum ( string fileName ) ;
bool fileOpen ( string fileName ) ;

int main ( ) {
    cout << "Enter the name of the input file: " ;
    cout << endl ;

    ifstream input ;
    cin >> fileName ;
    input.open ( fileName ) ;  // file open

    if (!input.is_open()) {    // file can be open successfully ?
        cout << "Error opening " << fileName << endl;
        exit ( 1 ) ; // 1 indicates error
    }


    int num ;
    int sum = 0 ;

    while ( input >> num )  // read into integer variable
    {
        input >> num ;
        sum = sum + num ;
    }


}

