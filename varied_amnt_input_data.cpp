//
// Created by jenny zhang on 12/30/22.
//
// Statistics are often calculated with varying amounts of input data. Write a program that takes any number of non-negative integers as input, and outputs the average and max. A negative integer ends the input and is not included in the statistics.
//
// Ex: When the input is 15 20 0 5 -1, the output is:
//
// 10 20
#include <iostream>
using namespace std;

int main() {

    int num ;
    int avg ;
    int max = 0 ;
    int sum = 0 ;
    int counter = 0 ;

    do { cin >> num ;
        counter = counter + 1 ;
        sum = sum + num ;
        if ( max < num ) {
            max = num ; }
        else { max = max ; } }
    while ( num >= 0 ) ;
    sum = sum - num ;
    counter = counter - 1 ;
    avg = sum / counter ;

    cout << avg << " " << max << endl ;

    return 0;
}

