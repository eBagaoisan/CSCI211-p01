// chart.cpp
// Bagaoisan, ElmerPeter

#include <iostream>
#include <string>
#include <array>

using namespace std;

//Prototypes
int largest(int big[]&);

//global
const int MAX = 100;
int big = 0;

//main function
int main(){
    int userNum = 1;
    int values[MAX];
    while (userNum != 0){
        cout<<"Please enter numbers of asterisk: ";
        cin>>userNum;
        if(userNum <= MAX){
            //asdf
        }
        else if(userNum >= 0){
            cout<<"Please enter a positive number."<<endl;
        }
        else{
            cout<<"Number is too large"<<endl;
        }
    }

    //puts user number into array
    for (int i=0; i<userNum; i++){

    }

    return 0;
}

//largest number function
int largest(int numArr[]){
    for (int i = 0; i < numArr.size(); i++){
        if (numArr[i] < big){
            big = numArr[i];
        }
    }
    return big;
}

//array insert
//parameters: value array and user input
void apply(int arr[], int input){
    
}


//Printing function

