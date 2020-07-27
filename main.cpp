//Name: Alexander Connolly
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int num1, num2, num3;

//integer variable to hold the sum of the three inputs
int numSum = 0;

//integer to hold the ariable representing the biggest number
int biggestNum = 0;

//prompt the user for three whole numbers

cout << "Enter three whole numbers: ";

//input into the three integer variables num1, num2, num3

cin >> num1 >> num2 >> num3;

//set numSum to be equivalent to the three inputted integers added together

numSum = num1 + num2 + num3;

//output the sum of the three integers

cout << "The sum of the three numbers is: " << numSum << endl;

//if statements to determine which integer is the largest of the three

if(num1 > biggestNum){

    biggestNum = num1;
    
}

if(num2 > biggestNum){
    
    biggestNum = num2;
    
}

if(num3 > biggestNum){
    
    biggestNum = num3;
    
}