#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) //행
    {
        for(int j=0; j<n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=n-2; i>=0; i--) //대칭
    {
        for(int j=0; j<n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}