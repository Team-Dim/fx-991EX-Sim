//
// Created by wongc on 7/2/2021.
//
#include <string>
#include <iostream>
#include <map>
#include "calc/Decode.h"
#include "ErrorCode.h"

using namespace std;

uint8_t calculate() {
    string input;
    cout << "Input instruction" << endl;
    cin >> input;

    Calculator calc = Calculator();
    map<char, void (*)(const char &,::Calculator *)> decoder = {
            {'1', &Decode::num},
            {'2', &Decode::num},
            {'3', &Decode::num},
            {'4', &Decode::num},
            {'5', &Decode::num},
            {'6', &Decode::num},
            {'7', &Decode::num},
            {'8', &Decode::num},
            {'9', &Decode::num},
            {'0', &Decode::num}
    };

    for (char& c : input) {
        if (decoder.count(c) == 0)
            return SYNTAX_ERROR;
        cout << "Executing instruction " << c << " at address " << decoder[c] << endl;
        decoder[c](c, &calc);
    }

    return OK;
}

void ignore() {
    string ignore;
    cin >> ignore;
    ignore = "";
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
int main() {
    while (true) {
        uint8_t result = calculate();
        switch (result) {
            case 0:
                cout << "Execution completed";
                break;
            case 1:
                cout << "Syntax ERROR";
        }
        cout << endl;
        ::ignore();
    }
}


#pragma clang diagnostic pop
