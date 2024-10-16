#include <iostream>
using namespace std;

int main() {
    int n;
	cin >> n;
	for(int i=0; i<n; i++) //행
	{	
		for(int j=0; j<n-i; j++) // 별을 그리는 횟수
		{
			for(int k= 0; k<n-i; k++) //별의 개수
				cout << "*";
			cout << " ";
		}
		cout << endl;

	}
    return 0;
}