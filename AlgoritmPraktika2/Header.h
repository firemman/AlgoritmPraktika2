#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

void zadacha_1() {
    system("cls");
    cout << "������� ���������� ��������� �������: ";
    int N;
    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int MAX_EL = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > MAX_EL) {
            MAX_EL = arr[i];
        }
    }

    cout << "\narray[" << N << "] = ";

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "; ";
    }

    cout << "\n\n������������ ������� � �������: " << MAX_EL << "\n\n";

    system("pause");
    delete[] arr;
}

void zadacha_2() {
    system("cls");
    cout << "������� ���������� ��������� �������: ";
    int N;
    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int MAX_EL = arr[0];
    int CNT_MAX = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] > MAX_EL) {
            MAX_EL = arr[i];
            CNT_MAX = 0;
        }
        if (arr[i] == MAX_EL) {
            CNT_MAX++;
        }
    }

    cout << "\narray[" << N << "] = ";

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "; ";
    }

    cout << "\n\n������������ ������� � �������: " << MAX_EL << "\n\n";
    cout << "���������� ����������: " << CNT_MAX << ".\n\n";

    system("pause");
    delete[] arr;
}

void zadacha_3() {
    system("cls");
    cout << "������� ���������� ��������� �������: ";
    int N;
    cin >> N;
    int* arr = new int[N];
    int SUM_OTR = 0;

    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        if (arr[i] < 0) {
            SUM_OTR += arr[i];
        }
    }

    cout << "\narray[" << N << "] = ";

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "; ";
    }

    if (SUM_OTR < 0) {
        cout << "\n\n����� ������������� ��������� � �������: " << SUM_OTR << "\n\n";
    }
    if (SUM_OTR == 0) {
        cout << "\n\n������������� ����� � ������� ���.\n\n";
    }

    system("pause");
    delete[] arr;
}

void zadacha_4() {
    system("cls");
    cout << "������� ���������� ��������� �������: ";
    int N;
    cin >> N;
    int* arr = new int[N];
    int SUM_OTR = 0;
    int mark = 0;

    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        if (arr[i] > 0) {
            mark = i;
        }
        if (arr[i] < 0) {
            SUM_OTR += arr[i];
        }
    }

    int* arr1 = new int[N];
    for (int i = 0; i <= mark-1; i++) {
        arr1[i] = arr[i];
     }

    int* arr2 = new int[N];
    for (int i = N; i >= mark; i--) {
        arr2[i] = arr[i];
    }

    cout << "������ ����� ����������: \n";

    for (int i = 0; i < mark; i++) {
        cout << arr1[i] << "\t";
    }

    cout << SUM_OTR << "\t";

    for (int i = mark; i < N; i++) {
        cout << arr2[i] << "\t";
    }

    delete[] arr;
    delete[] arr1;
    delete[] arr2;
    cout << "\n\n";
    system("pause");
}

void zadacha_5() {
    system("cls");
    cout << "����� ��������� �������� � �������..\n\n";

    cout << "������� ���������� ��������� �������: ";
    int N;
    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    system("cls");

    cout << "�������� ������: ";
    cout << "\narray[" << N << "] = ";

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "; ";
    }

    cout << "\n\n������� ������� ������� �� ������ �����: ";
    int elSearch, mark = 0;
    cin >> elSearch;

    for (int i = 0; i < N; i++) {
        if (arr[i] == elSearch) {
            cout << "\n������� ���� ������� ��������� �� " << i + 1 << " ������� (" << elSearch << ");\n\n";
            mark = 1;
        }
    }

    if (mark == 0)
        cout << "\n������� ���� ������� �� ��� ������ � �������.\n\n";

    delete[] arr;
    system("pause");
}

void zadacha_6() {
    system("cls");
    cout << "������� ���������� ��������� �������: ";
    int N;
    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int MAX_EL = arr[0];
    int VTOR_MAX_EL = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > MAX_EL) {
            VTOR_MAX_EL = MAX_EL;
            MAX_EL = arr[i];
        }
    }

    cout << "\narray[" << N << "] = ";

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "; ";
    }

    cout << "\n\n������������ ������� � �������: " << MAX_EL << ";\n";
    cout << "������ �������� � �������: " << VTOR_MAX_EL << ";\n\n";

    system("pause");
    delete[] arr;
}