#include <string> // เรียกใช้ library สำหรับข้อความ
using namespace std;

int main() {
    int score; // ตัวแปรเก็บคะแนน
    string grade; // ตัวแปรเก็บเกรด

    // 1. รับค่าคะแนน
    cout << "กรุณากรอกคะแนนของคุณ (0-100): ";
    cin >> score;

    // 2. ตรวจสอบเงื่อนไข
    if (score >= 80) {
        grade = "A";
    }
    else if (score >= 70) {
        grade = "B";
    }
    else if (score >= 60) {
        grade = "C";
    }
    else if (score >= 50) {
        grade = "D";
    }
    else {
        grade = "F";
    }

    // 3. แสดงผลลัพธ์
    cout << "เกรดที่คุณได้คือ: " << grade << endl;

    return 0;
}