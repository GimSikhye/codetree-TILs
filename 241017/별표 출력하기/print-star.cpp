#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n; i++)
    {
        for(int j= 0 ; j<i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n-2;i>=0; i--) // 3+1 2+1 1+1 0+1
    {
        for(int j= 0 ; j<i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}