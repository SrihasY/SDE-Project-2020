using namespace std;

#include <iostream>

int main(void)
{
	int size;
	cin >> size;
	int *nums = new int[size];
	int i;
	for(i=0; i<size; i++)
	{
		cin >> nums[i];
	}
	cout << nums[i-1];
	delete nums;
}
