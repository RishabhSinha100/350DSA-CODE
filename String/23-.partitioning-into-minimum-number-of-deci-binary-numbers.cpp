#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int minPartitions(string n) {
   
    char maxDigit = '0';
    for (int i=0;i<n.length();i++) {
        if (n[i] > maxDigit) {
            maxDigit = n[i];
        }
    }
    return maxDigit -'0';
}

int main() {
  
    string n1 = "32";
    string n2 = "82734";
    string n3 = "27346209830709182346";

    cout << "Minimum number of deci-binary numbers for " << n1 << " is " << minPartitions(n1) << endl;
    cout << "Minimum number of deci-binary numbers for " << n2 << " is " << minPartitions(n2) << endl;
    cout << "Minimum number of deci-binary numbers for " << n3 << " is " << minPartitions(n3) << endl;

    return 0;
}
