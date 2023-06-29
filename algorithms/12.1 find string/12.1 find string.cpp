#include <iostream>
#include <string>
using namespace std;



bool IsKPeriodic(const string& s, int k) {
    int n = s.length();

    // �������� ��������� ����� ������
    if (n % k != 0) {
        return false;
    }

    // �������� ������ ���������
    for (int i = 0; i < n; i++) {
        if (s[i] != s[i % k]) {
            return false;
        }
    }
    return true;
}

int main() {

    setlocale(LC_ALL, "Russian");

    string s = "abcabcabcabc";
    int k = 3;

    if (IsKPeriodic(s, k)) {
        cout << "������ �������� " << k << "-�������" << endl;
    }
    else {
        cout << "������ �� �������� " << k << "-�������" << endl;
    }

    return 0;
}