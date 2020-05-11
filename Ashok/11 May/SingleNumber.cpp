/*
    Q1. Given an array of integers, every element appears twice except for one. Find that single one.
*/

#include <iostream>
using namespace std;

int main() {
    int array[] = {3,9,3,7,5,7,5};
    int output = array[0]; //First element
    for (int i = 1; i < 7; i ++){
        output = output^array[i]; //XOR Operation on every elements of array
    }
    cout << output << endl;
}
