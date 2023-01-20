//
// Created by jenny zhang on 12/30/22.
//
// Given a line of text as input: (1) output the number of characters excluding the three characters commonly used for end-of-sentence punctuation( period, exclamation point, and question mark), (2) then output the number of end-of-sentence punctuation characters that were found. You can just do (1) to pass the first few test cases for partial credit, then do (2) for full credit.
//
// Ex: If the input is "Listen, Sam! Calm down. Please.", the output is:
//
// 28
// 3
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string userText;
    int count = 0 ;

    getline(cin, userText) ;

    for ( unsigned int i = 0 ; i < userText.size() ; i++ )
    {
        if ( userText.at(i) == ('.') || userText.at(i) == ('?') || userText.at(i) == ('!'))
        {
            count++ ;
        }
    }

    cout << userText.size() - count << endl ;
    cout << count << endl ;


    return 0;
}

