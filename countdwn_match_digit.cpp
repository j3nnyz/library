//
// Created by jenny zhang on 12/30/22.
//
// Write a program that takes in an integer in the range 11-100 as input. The output is a countdown starting from the integer, and stopping when both output digits are identical. Additionally, output the distance between the starting and ending numbers (ex: 93 - 88 = 5) Note: End with a newline.
//
// Ex: If the input is:
// 93
// the output is:
//
// 93 92 91 90 89 88
// 5
#include <iostream>
using namespace std;

int main() {

    int num;
    int num2;

    cin >> num;

    num2 = num;

    if ( num >= 11 && num <= 100 && num % 11 != 0 ) {
        cout << num2 << " ";
        do { num = num - 1 ;
            cout << num << " " ;
        } while ( num % 11 != 0); }

    else if ( num >= 11 && num <= 100 && num % 11 == 0 ) {
        cout << num << endl;
        cout << "0" << endl; }

    else {cout << "Input must be 11-100" << endl ; }

    if ( num >= 11 && num <= 100 ) {



        return 0;
    }
