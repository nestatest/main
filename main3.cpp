#include <iostream>
#include <cmath>

using namespace std;

// Проверка данных для трапеции
int check_trapezoid(int a, int b, int c, int d, int h) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        cout << "Error, digit less than zero. Retry again\n";
        return 1;
    }
    return 0;
}

// Функция для расчёта параметров трапеции
void calculate_trapezoid() {
    int leftside, topbase, rightside, bottombase, height;

    // Ввод данных с проверкой
    do {
        cout << "Left side: ";
        cin >> leftside;
        cout << "Top base: ";
        cin >> topbase;
        cout << "Right side: ";
        cin >> rightside;
        cout << "Bottom base: ";
        cin >> bottombase;
        cout << "Height: ";
        cin >> height;
    } while (check_trapezoid(leftside, topbase, rightside, bottombase, height));

    // Вычисления
    int perimeter = leftside + topbase + rightside + bottombase;
    double square = ((topbase + bottombase) / 2.0) * height;
    double midline = (topbase + bottombase) / 2.0;

    // Вывод результатов
    cout << "Perimeter: " << perimeter << endl;
    cout << "Square: " << square << endl;
    cout << "Midline length: " << midline << endl;
}

int main() {
    int choice;

    // Выбор фигуры
    cout << "Choose a figure to calculate:\n";
    cout << "1 - Trapezoid\n";
    cout << "2 - Rectangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        calculate_trapezoid();
    }

    return 0;
}



