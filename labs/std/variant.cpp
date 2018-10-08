#include <iostream>

using namespace std;

int main(){

    // N - ваш номер в журнале группы
    // M - общее количество вариантов
    int N, M;
    cout << "Enter N:" << endl;
    cin >> N;
    cout << "Enter M:" << endl;
    cin >> M;

    // Вычисление номера варианта
    int number = ((N * N - 1) % M) + 1;
    cout << "Number is " << number << endl;

    return 0;
}
