#include <iostream>//#��1 ����� ����� ������ 201-331
#include <bitset>
using namespace std;

int main() {
    cout << "Igor Shurub 201-331" << endl; // ������� 1
    cout << "min=-2^31=-2147483648" << endl; // ������� 2 -����������� �����(�� �����)
    cout << "max=2^31=2147483648" << endl; // ������� 2 -������������ �����(�� �����)
    int n;// 3 �������, ������ ����������
    cin >> n;
    cout << bitset <16>(n) << endl;// 3 ������� � �������� ����
    cout << hex <<n << endl;// 3 ������� � 16 ����
    cout <<bool (n) << endl; // 3 �������
    cout << double(n) << endl;// 3 �������
    cout << char(n) << endl;// 3 �������
    int a, x, b;//���������� ���������� ������� 4
    cin >> a >> b;// ���� ���������� ������� 4
    x = b / a;// ���������� ���������� x
    cout << x << endl;// ����� ���������� x- ��������� ������� 4
    int begin, end, middle;// ���������� ���������� ������� 5
    cin >> begin >> end;// ���� ���������� ������� 5
    middle = (begin + end) / 2;// ���������� �������� �������
    cout << middle;//��������� ������� 5

    return 0;

}
