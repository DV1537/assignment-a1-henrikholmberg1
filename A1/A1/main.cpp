#include<iostream>
#include<fstream>

using namespace std;

int main() {
	char buffer[100];
	int n = 100;

	for (int i = 0; i < n; i++) {
		buffer[i] = 0;
	}

	ifstream txt;
	txt.open("numbers.txt");

	if (txt.is_open()) {
		bool test = false;
		int i = 0;
		while (test == false) {
			
			txt >> buffer[i];

			if (buffer[i] == 0) {
				test = true;
			}
			
			i++;
		}
		txt.close();
	}

	cout << endl;

	double x = 0, y = 0;

	for (int i = 0; i < n; i++) {
		if (buffer[i] - 48 >= 0) {
			x += (int)buffer[i] - 48;
			y++;
		}
	}
	
	int *arr = new int[y];
	int z = 0;
	for (int i = 0; i < 100; i++) {
		if ((buffer[i] - 48) >= (x / y)) {
			arr[z] = buffer[i] - 48;
			cout << arr[z] << " ";
			z++;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}