#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;  // const array size

//funct protos
string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main(){

    string* arr = new string[SIZE];

//array names
    *(arr + 0)= "Janet";
    *(arr + 1) = "Jeffe";
    *(arr + 2)= "Jin";
    *(arr + 3) = "Joe";
    *(arr + 4) = "Junio";

//display original array
cout << "something";
displayArray(arr, SIZE);

reverseArray(arr, SIZE);

cout << "something";
displayArray(arr, SIZE);

delete[] arr;

return 0;
}

string* reverseArray(string* arr, int size) {
    for (int i = 0; i < size /2; i++) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
    return arr;
}