#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    // First, Accept input from console
    // Nothing should be printed out for an input
    getline (cin, s1);
    getline (cin, s2);

    // Then process
    result = s1 + " " + s2;

    // Lastly, print only the result to console
    cout << result << endl;

    return 0;
}
