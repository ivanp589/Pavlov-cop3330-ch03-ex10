#include<iostream>
#include<stdio.h>
#include<cstring>
#include <string>


/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ivan Pavlov
 */

//chapter 8,ex 10
//10 Write a program that takes an operation 
//followed by two operands and outputs the result. For example:


using namespace std;
int main(){
	char input[20];
	cout << "Please input an operation followed by two operands: " <<endl;
	cin.getline(input,20);
	
	
	char *ptr;
	ptr = strtok(input, " ");
	int i=0;
	double output;
	char operation;
	char *value[3];
	while (i<3)  
    {  
        value[i] = ptr; // print the string token  
        ptr = strtok(NULL, " ");
        i++;
    }  
    double first = stod(value[1]);
    double second = stod(value[2]);
   operation = *value[0];
	
		if(operation == '*'){
			//multiply
			output = first * second;
		}
		else if(operation == '+'){
			//add
			output = first + second;
		}
		else if(operation == '-'){
			//subtract
			output = first - second;
		}
		else if(operation == '/'){
			//divide
			output = first / second;
		}
		else(cout << "the input was invalid sorry");
		
		cout << output;
	return 0;
}
