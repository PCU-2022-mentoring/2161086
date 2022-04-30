// 최솟값을 찾아서 맨앞 요소와 교환

/*
size가 0이면 프로그램 종료
Ex)
size >> 8
>> 1 6 8 7 5 3 4 9
정렬 : 1 3 4 5 6 7 8 9

size >> 4
>> 1 5 2 4
정렬 : 1 2 4 5

size >> 0
프로그램이 종료됩니다...
*/

#include <iostream>
using namespace std;

class SelectionSort {
	int size;
	int* buffer;
public:
	void Init(int size);
	void Setbuffer(int index, int x);
	void Sort();
	void Show();
};

int main() {
	int size;
	int tmp;
	SelectionSort* sel = NULL;
	bool first = true;
	bool enter = true;

	while (true) {
		if (!enter) {
			cout << "\n";
		}
		else {
			enter = false;
		}

		cout << "size >> ";
		cin >> size;

		if (size == 0) break;

		sel = new SelectionSort();
		sel->Init(size);
		for (int i = 0; i < size; i++) {
			if (first) {
				cout << ">> ";
				first = false;
			}
			cin >> tmp;
			sel->Setbuffer(i, tmp);
		}
		first = true;
		sel->Sort();
		sel->Show();
		delete sel;
	}

	cout << "프로그램을 종료합니다..." << endl;
}

void SelectionSort::Init(int size) {
	this->size = size;
	buffer = new int[size];
	memset(buffer, 0, size);
}

void SelectionSort::Setbuffer(int index, int x) {
	buffer[index] = x;
}

void SelectionSort::Sort() {
	int min;
	int tmp;

	for (int i = 0; i < this->size; i++) {
		min = i;
		for (int j = i + 1; j < this->size - 1; j++) {
			if (buffer[min] > buffer[j]) {
				min = j;
			}
		}
		tmp = buffer[i];
		buffer[i] = buffer[min];
		buffer[min] = tmp;
	}
}

void SelectionSort::Show() {
	cout << "정렬 : ";
	for (int i = 0; i < size; i++) {
		cout << buffer[i] << " ";
	}
	cout << "\n";
}