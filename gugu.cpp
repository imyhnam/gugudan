#include <iostream>

using namespace std;

int main()
{
	//9를 10으로 수정
	for(int i = 2; i < 10; i++)
	{
		for(int j = 1; j < 10; j++)
		{
			cout << i << "X" << j << "=" << i*j << endl;
		}
		cout << endl;
	}
	
	return 0;
}
