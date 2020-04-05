#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int cases, N;
    cin >> cases;
    
    for (int i = 0; i < cases; i++) {
        cin >> N;
        int size = N*N;
        int matrix [size];
        int x = 0;
        int count = 1;
        int rows = 0;
        int columns = 0;
        int trace = 0;
        int a = 0;
        int l = 0;
        
        for (int k = 0; k < size; k++) {
            cin >> matrix[k];
        }
        
        while (x < size) {
            trace += matrix[x];
            x += (N + 1);
        }
        
        while (count <= N) {
            while (a < N*count) {
                for (int y = a; y < N*count; y++) {
                    if (a != y) {
                        if (matrix[a] == matrix[y]) {
                            rows++;
                            y = N*count;
                            a = N*count;
                        }
                    }
                }
                a++;
            }
            a = count*N;
            count++;
        }
        
        while (l < N) {
            int z = l;
            while (z < size) {
                int k = z;
                while (k < size) {
                    if (z != k) {
                        if (matrix[z] == matrix[k]) {
                            columns++;
                            k = size;
                            z = size;
                        }
                    }
                    k = k + N;
                }
                z = z+ N;
            }
            l++;
        }
        
        cout << "Case #" << i+1 << ": " << trace << " " << rows << " " << columns << endl;
    }
}






