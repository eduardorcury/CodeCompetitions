#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int A [cases];
    int B [cases];
    
    for (int i = 0; i < cases; i++) {
        int number;
        int x;
        int count = 1;
        cin >> number;
        int y = number;
        A[i] = number;
        B[i] = 0;
        
        while (y > 1) {
            x = y % 10;
            if (x == 4) {
                A[i] = A[i] - count*2;
                B[i] = B[i] + count*2;
            }
            y /= 10;
            count *= 10;
        }
    }
    
    for (int i = 0; i < cases; i++) {
        cout << "Case #" << i+1 << ": " << A[i] << " " << B[i] << endl;
    }
    
}