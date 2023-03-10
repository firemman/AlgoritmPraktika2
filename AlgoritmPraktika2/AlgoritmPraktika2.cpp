#include "Header.h"

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Меню алгоритмы и структуры данных: \n";
    cout << "0. Завершить работу программы.\n";
    cout << "1. Начать работу программы.\n\n";
    int i;
    cin >> i;
    cout << endl;
    system("cls");
    while (i == 1) {
        system("cls");
        cout << "Введите номер необходимой задачи: \n";
        cout << "------------------------------------------------\n";
        cout << "0. Завершить работу программы.\n";
        cout << "1. Первая задача (максимальный элемент в массиве).\n";
        cout << "2. Вторая задача (количество максимумов в массиве).\n";
        cout << "3. Третья задача (сумма отрицательных элементов в массиве).\n";
        cout << "4. Четвертая задача (добавление эл. массива перед последним положительным).\n";
        cout << "5. Пятая задача (функция Search поиска заданного элемента в массиве).\n";
        cout << "6. Шестая задача (поиск второго максимума в массиве)\n\n";
        int p;
        cin >> p;
        cout << endl;

        switch (p) {
        case 0:
            system("cls");
            cout << "End of the programm...\n\n";
            i = 0;
            break;
        case 1:
        {
            zadacha_1();
            break;
        }
        case 2:
        {
            zadacha_2();
            break;
        }
        case 3:
        {
            zadacha_3();
            break;
        }
        case 4:
        {
            zadacha_4();
            break;
        }
        case 5:
        {
            zadacha_5();
            break;
        }
        case 6:
        {
            zadacha_6();
            break;
        }
        default:
        {
            break;
        }
        }
    }
}