#include <iostream>
using namespace std;

// Recursion is a function wich invokes itself
// Task: Sum numbers between m and n 

/* As a for-loop:
    
    int sum = 0
    for(i = m; i <= m; i++) {
        sum = sum + i;
    }
    cout << "Sum is: " << sum;
*/

// As recursive function
int recursive_sum(int m, int n) {
    if(m == n) // break case
        return m;
    return m + recursive_sum(m + 1, n);
}

int main()
{
    int m = 1, n = 5;
    cout << "Sum = " << recursive_sum(m, n);

    return 0;
}