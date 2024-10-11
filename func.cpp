#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int r = 3;
    const int c = 3;
    int array[r][c] = {
        {-1, 2, -3},
        {4, -5, 6},
        {-7, 8, -9}
    };

    int sum = 0;
    int positiveCount = 0, negativeCount = 0;
    int Min = array[0][0], Max = array[0][0]; 

    cout << "Положительные: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum += array[i][j];

            if (array[i][j] < Min) {
                Min = array[i][j];
            }
            if (array[i][j] > Max) {
                Max = array[i][j];
            }

            if (array[i][j] > 0) {
                cout << array[i][j] << " ";
                positiveCount++;
            }
        }
    }

    cout << "Отрицательные: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (array[i][j] < 0) {
                cout << array[i][j] << " ";
                negativeCount++;
            }
        }
    }

    int totalElements = r * c;
    double average = static_cast<double>(sum) / totalElements;

    cout << "\nМинимальное значение: " << Min << endl;
    cout << "Максимальное значение: " << Max << endl;
    cout << "Сумма: " << sum << endl;
    cout << "Среднее: " << average << endl;
    cout << "Всего положительных: " << positiveCount << endl;
    cout << "Всего отрицательных: " << negativeCount << endl;

    return 0;
}
