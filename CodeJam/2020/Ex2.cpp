#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    for (int i = 0; i < cases; i++) {
        string S;
        cin >> S;
        string result;
        int numbers [S.length()];
        
        for (int x = 0; x < S.length(); x++) {
            numbers[x] = (int)S[x] - 48;
        }    
        
        for (int a = 0; a < S.size(); a++) {
            int b = 0;
            
            if (a == 0) {
                while (b < numbers[a]) {
                    result.append("(");
                    b++;
                }
                result.append(to_string(numbers[a]));
            }
            
            else {
                if (numbers[a] == numbers[a-1]) {
                    result.append(to_string(numbers[a]));
                }
                
                if (numbers[a] > numbers[a-1]) {
                    int c = 0;
                    while (c < (numbers[a]) - numbers[a-1]) {
                        result.append("(");
                        c++;
                    }
                    result.append(to_string(numbers[a]));
                }
                
                if (numbers[a] < numbers[a-1]) {
                    int c = 0;
                    while (c < numbers[a-1] - numbers[a]) {
                        result.append(")");
                        c++;
                    }
                    result.append(to_string(numbers[a]));
                }
                
            }
        }
        
        int z = 0;
        while (z < numbers[S.size() - 1]) {
            result.append(")");
            z++;
        }
        
        cout << "Case #" << i+1 << ": " << result << endl;
    }
}







