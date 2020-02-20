#include <vector>
#include <iostream>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int numArrays;
	int numValues;
	int numElements;
	int value;
	int value1;
	vector<vector<int>> v;
	vector<int> temp;

	cin >> numArrays >> numValues;
	//Get elements for each arrays
	for (int i = 0; i < numArrays; i++) {
		cin >> numElements;
		for (int j = 0; j < numElements; j++) {
			cin >> value;
			temp.push_back(value);
		}
		//Creating 2D array
		v.push_back(temp);
		temp.resize(0);
	}
	//Get positions
	for (int i = 0; i < numValues; i++) {
		cin >> value >> value1;
		temp.push_back(v[value][value1]);
	}
	//Output
	for (int i = 0; i < numValues; i++) {
		cout << temp[i] << endl;
	}

	return 0;
}