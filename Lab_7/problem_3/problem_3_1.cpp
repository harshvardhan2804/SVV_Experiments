#include <iostream>
using namespace std;

int next_greatest(int n) {

     if(n == 0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    // Count the number of ones in n's binary representation
    int ones = 0;
    int temp = n;
    while (temp) {
        ones++;
        temp &= (temp - 1);
    }
    
    // Find the rightmost non-trailing zero bit
    int pos = 0;
    temp = n;
    while ((temp & 1) == 0 && temp) {
        pos++;
        temp >>= 1;
    }
    while ((temp & 1) == 1) {
        pos++;
        temp >>= 1;
    }
    
    // Flip the rightmost non-trailing zero bit
    n &= ~(1 << pos);
    n |= (1 << (pos - 1));
    
    // Set all bits to the right of pos to zero
    int mask = (1 << (pos - 1)) - 1;
    n &= ~mask;
    
    // Set the rightmost (ones - 1) bits to one
    n |= (1 << (ones - 1)) - 1;
    
    return n;
}

int main() {

    cout<<"enter a number :" <<endl;
    int n;

    cin >> n;

    cout << "Next smallest integer with the same number of ones as " << n << " is " << next_smallest(n) << endl;
    return 0;
}
