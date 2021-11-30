/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Edouard
 */
#include "std_lib_facilities.h"	
#include <iostream>
using namespace std;

int main(){
    string operation;
    double firstVal=0, secondVal=0, answer=0;

    cout << "Please enter two values along with an operation: ";
    cin >> firstVal >> secondVal>> operation;

    if(operation=="+"){
        answer = firstVal+secondVal;
    }
    else if(operation=="-"){
        answer = firstVal-secondVal;
    }
    else if(operation=="*"){
        answer = firstVal*secondVal;
    }
    else if(operation=="/"){
        if(secondVal==0){
            cout << "Error";
            return 0;
        }
        else{
        answer = firstVal/secondVal;
        }
    }
    else if(operation=="%"){
        int firstInt = firstVal, secondInt=secondVal;
        answer = firstInt%secondInt;
    }
    else{
        cout << "Error";
        return 0;
    }

    cout << firstVal << operation << secondVal << "= " << answer;
    return 0;
}