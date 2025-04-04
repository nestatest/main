#include <iostream>
#include <cmath>

using namespace std;

// Проверка корректности данных
int check_trapezoid(int topbase, int bottombase, int leftside, int rightside, int height) {
    if (topbase <= 0 || bottombase <= 0 || leftside <= 0 || rightside <= 0 || height <= 0) {
        cout << "Error: all values must be greater than 0.\n";
        return 1;
    }

    // Проверка: боковые стороны должны быть длиннее высоты
    if (leftside <= height || rightside <= height) {
        cout << "Error: trapezoid cannot exist. Side must be longer than height.\n";
        return 1;
    }
    
    // Проверка: сумма любых трёх сторон должна быть больше четвёртой
    if ((leftside + topbase + rightside) <= bottombase) {
        cout << "Error\n";
        return 1;
    }
    if ((leftside + bottombase + rightside) <= topbase) {
        cout << "Error\n";
        return 1;
    }
    if ((topbase + bottombase + leftside) <= rightside) {
        cout << "Error\n";
        return 1;
    }
    if ((topbase + bottombase + rightside) <= leftside) {
        cout << "Error\n";
        return 1;
    }

    return 0;
}

// Расчёт параметров трапеции
void calculate_trapezoid() {
    int leftside, topbase, rightside, bottombase, height;

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
    } while (check_trapezoid(topbase, bottombase, leftside, rightside, height));

    int perimeter = leftside + topbase + rightside + bottombase;
    double square = ((topbase + bottombase) / 2.0) * height;
    double midline = (topbase + bottombase) / 2.0;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Square: " << square << endl;
    cout << "Midline length: " << midline << endl;
}

int main() {
    calculate_trapezoid();
    return 0;
}
