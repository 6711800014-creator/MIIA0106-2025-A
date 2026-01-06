#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
	string id;
	string nickname;
	string lineID;
	string phone;
};

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
    // TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address addr;
    Phone tel;
    // TODO:
};

int main() {
    Student s1;

    // TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    // TODO 3) cin >> 
	cin >> s1.addr.number;
    cout << "Address - Road: ";

    // TODO 3) cin >> 
	cin >> s1.addr.road;
    cout << "Address - District: ";

    // TODO 3) cin >> 
	cin >> s1.addr.district;
    cout << "Address - Province:";

    // TODO 3) cin 
	cin >> s1.addr.province;
    cout << "Phone - Home: ";

    // TODO 3) cin >>
	cin >> s1.tel.home;
    cout << "Phone - Mobile: ";

    // TODO 3) cin >> 
	cin >> s1.tel.mobile;


    cout << "\n===== Output =====\n";
    //// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "ID: " << s1.id << "\n";
	cout << "Name: " << s1.name << "\n";
	cout << "Surname: " << s1.surname << "\n";
	cout << "Address: " << s1.addr.number << ", " << s1.addr.road << ", " << s1.addr.district << ", " << s1.addr.province << "\n";
	cout << "Phone - Home: " << s1.tel.home << "\n";
	cout << "Phone - Mobile: " << s1.tel.mobile << "\n";

    return 0;
}


    // TODO
	Student tmp = a;
	a = b;
	b = tmp;
}

// TODO: sort เขียนเอง (Bubble sort) id น้อยไปมาก
void sortByID(Student students[], int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
	}

}

void printStudents(Student students[], int size) {
	cout << "ID \tnickname \tLine ID \tPhone\n";
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t\t" << students[i].lineID << "\t\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter ID: ";
        cin >> students[i].id;

        cout << "Enter Nickname: ";
        cin >> students[i].nickname;

        cout << "Enter Line ID: ";
        cin >> students[i].lineID;

        cout << "Enter Phone: ";
        cin >> students[i].phone;
        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
