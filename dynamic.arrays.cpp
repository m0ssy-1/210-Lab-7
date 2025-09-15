#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;  // const array size

 

int main(){

    string arr = new string[SIZE];

    *(arr + 0)= "Janet";
    *(arr + 1) = "Jeffe";
    *(arr + 2)= "Jin";
    *(arr + 3) = "Joe";
    *(arr + 4) = "Junio";
}