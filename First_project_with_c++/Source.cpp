#include<iostream>
using namespace std;
void speed() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

}

#define en "\n" 

string names[10001];
char gender[10001];
int age[10001];
float salary[10001];

void startprojram() {
	cout << "Enter your choice \n";
	cout << "1 For add new employee place \n";
	cout << "2 For print all employee place\n";
	cout << "3 For delete employee enter the start and end ege place\n";
	cout << "4 For update salary enter your name place\n";
	cout << "5 For stop the a program\n";

}

void take_employee(int index) {
	cout << "enter your name\n";
	cin >> names[index];
	cout << "enter your age\n";
	cin >> age[index];
	cout << "enter your salary\n";
	cin >> salary[index];
	cout << "enter your gender\n";
	cin >> gender[index];

}

void print_all(int count) {
	cout << "****************************\n";
	for (int i = 0; i < count; i++) {
		if (age[i] > 0)
			cout << names[i] << " " << salary[i] << " " << age[i] << " " << gender[i] << en;
	}
}

void delete_employee(int count) {
	cout << "Enter start and end end age \n";
	int start, end;
	cin >> start >> end;
	for (int i = 0; i < count; i++) {
		if (age[i] >= start && age[i] <= end) {
			names[i] = "";
			gender[i] = 0.0;
			age[i] = 0;
			salary[i] = 0;



		}
	}
}

void update_salary(int count) {
	cout << "enter your name\n";
	string name; 
	cin >> name;
	cout << "enter your salary\n";
	float salary_employee;
	cin >> salary_employee;
	bool is_found = false;
	for (int i = 0; i < count; i++) {
		if (name == names[i]) {
			is_found = true;

			salary[i] = salary_employee;
		}

	}

	if (is_found)
		cout << "Is done \n";
	else cout << "Not found \n";

}


int main()
{

	speed();

	int index = 0;
	int count = 0;
	while (true) {
		startprojram();
		int choice; cin >> choice;
		if (choice == 1) {
			take_employee(index);
			count++;
			index++;
		}
		else if (choice == 2) 
			print_all(count);
		else if (choice == 3)
			delete_employee(count);
		else if (choice == 4)
			update_salary( count);
		else if (choice == 5)
			break;
		else
			cout << "Invalid choice. Try again\n";

	}

	return 0;

}

