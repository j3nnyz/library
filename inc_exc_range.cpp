//
// Created by jenny zhang on 12/30/22.
//
// Write a program that outputs all integers within a range. The program takes three integer inputs. The first two integers are the low and high integers of the range. The third integer indicates whether the range is inclusive or exclusive: 0 excludes the low and high integers, and 1 includes the low and high integers. Assume the first two integers are never the same. You are required to use a For loop.
//
// Ex: If the input is 5 10 1, the output is:
//
// 5 6 7 8 9 10
// Ex: If the input is 5 10 0, the output is:
//
// 6 7 8 9
// Ex: If the input is 6 7 1
//
// 6 7
// Ex: If the input is 6 7 0
//
// No output.
// Ex: If the second integer is less than the first, as in 20 5 1, the output is:
//
// No output.
#include <iostream>
#include <cctype>
using namespace std;

int main() {

    int low ;
    int high ;
    int inc ;
    int count ;

    cin >> low ;
    cin >> high ;
    cin >> inc ;

    if ( high < low )
    {
        cout << "No output." << endl ;
    }

    else if ( ( high == low + 1 ) && ( inc == 0 ) )
    {
        cout << "No output." << endl ;
    }

    else if ( inc == 1 )
    {
        for ( count = low ; count <= high ; count ++ ) {
            cout << count << " " ;
        }
        cout << endl ;
    }

    else if ( inc == 0 )
    {
        for ( count = low + 1 ; count < high ; count ++ )
        {
            cout << count << " " ;
        }
        cout << endl ;
    }

    return 0;
}

