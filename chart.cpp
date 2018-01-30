// chart.cpp
// Bagaoisan, ElmerPeter
#include <iostream>
#include <string>
using namespace std;

//Prototypes
int largest(int []);
void printArray(int []);
void printStar(int []);

//Global Variables
const int MAX = 100;
int big = 0;//HOLDS BIGGEST VALUE INPUT BY THE USER
int userNum;//USER INPUT
int values[MAX];//MAIN ARRAY
int counter = 0;//INDICES USED

//main function
int main(){
    int endArray = 0;
    //BEGINNING OF USER INPUT-----------------------------------------------
    do{
        cin>>userNum;
        if(userNum <= MAX){
            values[endArray] = userNum;
            endArray++;
        }
        else{
        }
    }while (userNum != 0);
    //END OF USER INPUT----------------------------------------------------

    //Area of code that counts how many indices of the array is used
    //---------------------------------------------------------------------
    int valueSize=1;
    while (valueSize != 0){
        valueSize = values[counter];
        counter++;
    }
    counter--;
    //---------------------------------------------------------------------
    //Use of Asterisk printing function
    printStar(values);
}

//Getter function for the largest user input number
int largest(int numArr[]){
    for (int i = 0; i < counter; i++){
        if (numArr[i] > big){
            big = numArr[i];
        }
    }
    return big;
}
//Asterisk Printing Function
void printStar(int starr[]){
    int row = counter;
    int col = largest(starr);
    for (int c = col-1; c>=0; c--){//int c
        for (int r = 0; r<row; r++){//int r counts each indice of the array
            if (starr[r] == largest(starr)){
                cout<<"*";
            }
            else if(starr[c] > starr[r]){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

