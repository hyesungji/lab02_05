#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int num;
	std::vector<int> NumList;

	while (cin >> num){
		NumList.push_back(num);
	}



	std::sort(NumList.rbegin(), NumList.rend());

	for (auto i : NumList)
		cout << i << " ";

	system("pause");
}
