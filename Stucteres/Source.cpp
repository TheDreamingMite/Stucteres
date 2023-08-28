#include <iostream>

using namespace std;

struct Person
{
	string name;
	int age;
};


int main() {
	int t = 0;
	Person* st = new Person[t+2];
	int answer = 0;
	do {
		t++;
		cout << "Enter the name: ";
		cin >> st[t].name;

		cout << "Enter the age: ";
		cin >> st[t].age;
		cout << endl;

		for (int i = 0; i <= t; i++) {
			cout << "elements of structures" << i << ": " << st[i].name << " " << st[i].age << endl;
		}

		cout << "enter of data? yes - 1; no - 0: ";
		cin >> answer;
		cout << endl;

		if (answer == 1) {
			Person* st_buf = new Person[t+2];
			for (int i = 1; i <= t; i++) {
				st_buf[i].name = st[i].name;
				st_buf[i].age = st[i].age;
			}
			delete[] st;
			st = new Person[t + 2];
			for (int i = 1; i <= t; i++) {
				st[i].name = st_buf[i].name;
				st[i].age = st_buf[i].age;
			}
			delete[] st_buf;
		}
	} while (answer == 1);
}