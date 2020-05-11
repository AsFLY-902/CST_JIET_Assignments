/*
    Q5. Given an integer A. Compute and return the square root of A.
    If A is not a perfect square, return floor(sqrt(A)).

    DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY
*/

#include <iostream>
using namespace std;

int SquareRoot(int A) {
    if (A==0 || A==1){
            return A;
    }
    int first = 0, last = A,output;
    while(first<=last){
        int mid = first + (last - first)/2;
        if (mid <= A/mid){
            first = mid + 1;
            output = mid;
        }
        else
            last = mid - 1;
    }
    return output;
}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Square root of "<<n<<" is = "<<SquareRoot(n);
    return 0;
}
