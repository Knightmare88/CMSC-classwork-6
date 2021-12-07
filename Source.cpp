#include <iostream>
using namespace std;

int main()
{
	int numOfScores, scoreInput = 1, scores[50], arraySize;

	cout << "How many scores do you want to enter? ";
	cin >> numOfScores;
	arraySize = numOfScores;

	for (int i = 0; i < numOfScores; i++);
	{
		int j = i++;
		cout << "Enter score #" << j << ": ";
	}

	/*do
	{
		cout << "Enter score #" << scoreInput << ": ";
		cin >> scores[scoreInput];
		scoreInput++;
	} while (scoreInput != numOfScores);*/
	
	return 0;
}

void displayArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}

}