#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(0, "rus");
    cout << "Введите массив на 10 элементов : \n";
    const int size = 10;
    int counter = 0;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << " Вы ввели массив : ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
        if (arr[i]%2==0){
            counter++;
        }
    }
    cout << endl;
    cout << "Количество четных элементов в веденном массиве : " << counter << endl;
    int arrtwo[5][5];
    cout << " Теперь введите массив 5 на 5 : \n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> arrtwo[i][j];
        }
    }
    cout << endl;
    cout << " Вот массив, который вы ввели : \n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << arrtwo[i][j] << "[" << i << "]" << "[" << j << "]" << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << " Выводим те элементы массива, которые имеют два четных индекса : \n";
    int sum = 0;
    for (int i = 0; i < 5; i+=2){
        for (int j = 0; j < 5; j+=2){
                sum += arrtwo[i][j];
            cout << arrtwo[i][j] <<"[" <<i << "]" << "[" << j  <<"]" << "  ";
        }
        cout << endl;
    }
    cout << "Сумма на чётных позициях равна = " << sum;
    cout << endl;
    cout << "Рандомный массив от -5 до 5 значений : \n";
    int arrthree[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            arrthree[i][j] = rand() %11 -5;
            cout << arrthree[i][j] << "\t";
        }
        cout << endl;
    }
    int left = 4;
    int diagsum = 0;
    int c = 0;
    for (int i = 0; i < 5; i++){
        c = arrthree[i][i] + arrthree[i][left--];
        diagsum += c;
    }
    cout << endl;
    cout << " Сумма чисел, находящиеся на главной диагонали двумерного массива равна: " << diagsum << endl;
    return 0;
}
