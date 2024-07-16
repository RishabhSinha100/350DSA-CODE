#include <iostream>
using namespace std;

void generatePattern(int n) {
    for (int i = 1; i <= n; ++i) {
     
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }

       
        for (int j = i; j >= 1; --j) {
            cout << "*";
        }

      
        for (int j = 2; j <= i; ++j) {
            cout << "*";
        }

       
        cout << endl;
    }
        for (int i = n; i >= 1; --i) {
    
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }

      
        for (int j = 0; j < (2 * i - 1); ++j) {
            cout << "*";
        }

        
        cout << endl;
    }

}

int main() {
    int num_rows = 5;
    generatePattern(num_rows);
    return 0;
}
