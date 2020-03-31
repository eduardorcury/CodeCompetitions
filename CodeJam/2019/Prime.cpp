#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;

int
main ()
{
    int T;
    int N;
    int L;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        cin >> L;
        int x = 0;
        int cipher [L];
        vector <int> primes;
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int mult;
        string resposta(L-1, ' ' );
        
        while (x < L) {
            cin >> cipher[x];
            x++;
        }
        
        vector <int> numbers;
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(5);
        
        for (int z = 6; z < N-1; z++) {
            if (z % 2 != 0 && z % 3 != 0 && z % 5 != 0 ) {
                numbers.push_back(z);
            }
        }
        
        for (int z = 0; z < numbers.size(); z++) {
            for (int a = 0; a < numbers.size(); a++) {
                if (z != a) {
                    mult = numbers[z]*numbers[a];
                    for (int b = 0; b < L; b++) {
                        if (mult == cipher[b]) {
                            primes.push_back(numbers[z]);
                            //cout << numbers[z] << " " << numbers[a] << endl;
                        }
                    }
                }
            }
        }
        
        primes.erase( unique( primes.begin(), primes.end() ), primes.end() );
        
        for (int z = 0; z < L; z++) {
            for (int a = 0; a < primes.size(); a++) {
                for (int b = 0; b < primes.size(); b++) {
                    if (primes[a]*primes[b] == cipher[z]) {
                        resposta[z] = alphabet.at(a);
                        resposta[z+1] = alphabet.at(b);
                        cout << alphabet.at(a) << alphabet.at(b) << endl;
                    }
                }
            }
        }
    }
}












