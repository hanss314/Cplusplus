#include <iostream>

using namespace std;

int main(){
    int n;
    bool isPrime = true;
    
    cout << "Please enter a number" << endl;
    cin >> n;
    
    if (n <= 1) isPrime = false;

    for (int i = 2; i < n/2; i++) {
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is prime!" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }
}
