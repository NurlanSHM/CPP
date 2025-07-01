#include <iostream>

int main(){

 int students = 20;

// - - - ADDITION
    // students = students +1;
    //students+=1;
    //students++;

// - - - SUBTRACTION
    //students = students - 1;
    //students-=1;
    //students--;
    
// - - -  MULTIPLICATION
    //students = students * 2;
    //students *= 2;

// - - -  DIVISION ( IF DECIMAIL, CHANGE TO "DOUBLE"!!!!!)
    //students = students /3;
    //students/=3;

    int remainder = students % 3;


    std::cout<<remainder;
    //std::cout<<students;
    return 0;
}