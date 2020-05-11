/*
    Q3. Given an integer A representing the square blocks. The height of each square block is 1. The task is to create a staircase of 
    max height using these blocks. The first stair would require only one block, the second stair would require two blocks and so on. 
    Find and return the maximum height of the staircase
*/

#include <iostream>
using namespace std;

int MaxHStairCase(int b){
    int s = 0;
    while (b != 0)
    {
        if (s + 1 <= b)
        {
            s++;
            b = b - s;
        }
        else
        {
            break;
        }

    }
    return s;
}
int main() {
    int n;
    cout<<"Enter the number of Blocks: ";
    cin>>n;
    cout<<"Maximum height of the staircase = "<<MaxHStairCase(n);
    return 0;
}
