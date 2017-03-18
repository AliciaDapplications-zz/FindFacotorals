//
//  main.cpp
//  FindFactorials
//
//  Created by Alicia Dale on 4/7/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>

using namespace std;

    //DECLARE FUNCTION PROTOTYPES
void printHeadings();
int findFactorial(int);
void printFooter();

int main(int argc, const char * argv[]) {
    //CALL THE PRINTHEADINGS() FUNCTION
    printHeadings();
    
        //DECLARE THE VARIALBES TO BE USED IN THE PROJECT
    int number;
    int result;
    
    cout << "Enter a number: " ;
    cin >> number;
    
    
        //CALL THE METHOD FACTORIAL() WITH NUMBER PARAMETER WHICH IS 5
    result = findFactorial(number);
    
   
    cout << "\t The factorial of " << number << " is = " << result << endl;
    cout << endl;
    
        //CALL THE PRINTFOOTER() FUNCTION
    printFooter();
    
    
    return 0;
}

    //CODE THE PRINTHEADINGS() FUNCTION
void printHeadings()

{
    cout << "\t ***************************************************\n";
    cout << "\t This project calculates the factorial of a number\n";
    cout << "\t Programmer: Alicia Dale\n";
    cout << "\t****************************************************\n";

}

    //THE FINDFACTORIAL FUNCTION
int findFactorial(int n)
{
    int answer;
    
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        answer = (n * findFactorial(n - 1)); //RECURSIVE CALL TO ITSELF
        return answer;
    }
}

    //THE PRINTFOOTERS FUNCTION
void printFooter()
{
    cout << "\t***********************************************\n\n";
    cout << "\t****************END OF JOB PROJECT*************\n";
    cout << "\t*********PROGRAMMER: ALICIA DALE***************\n";
    cout << "\t************************************************\n\n";
}
