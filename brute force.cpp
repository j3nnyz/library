//
// Created by jenny zhang on 12/30/22.
//
#include <iostream>
using namespace std;

int main() {

    int a ;
    int b ;
    int c ;

    int d ;
    int e ;
    int f ;

    int x ;
    int y ;

    bool equal ;

    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    cin >> e ;
    cin >> f ;

    for ( x = -10 ; ( -10 <= x ) && ( x <= 10 ) ; x++ )
    {
        for ( y = -10 ; ( -10 <= y ) && ( y <= 10 ) ; y++ )
        {
            if ( ( ( a * x ) + ( b * y ) == c )  && ( ( d * x ) + ( e * y ) == f ) )
            {
                equal = true ;
                cout << x << " " << y << endl ;
            }
        }
    }

    if ( equal != true )
    {
        cout << "No solution" << endl ;
    }


    return 0;

}

