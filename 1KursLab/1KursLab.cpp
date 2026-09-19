// 1KursLab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "fraction.h"
#include <iostream>
using namespace std;
fraction make_fraction(int F, int S)
{
    fraction t;
    t.Init(F, S);
    return t;
}

int main()
{
    fraction A;
    fraction B;
    A.Init(7, 3);
    B.Read();
    A.Show();
    B.Show();
    cout << "A.Ipart(" << A.first << "," << A.second << ")=" << A.Ipart() << endl;
    cout << "B.Ipart(" << B.first << "," << B.second << ")=" << B.Ipart() << endl;
    fraction *X = new fraction;
    X->Init(2, 5);
    X->Show();
    X->Ipart();
    cout << "X.Ipart(" << X->first << "," << X->second << ")=" << X->Ipart() << endl;
    fraction mas[3];
    for (int i = 0; i < 3; i++)
    {
        mas[i].Read();
    }
    for (int i = 0; i < 3; i++)
    {
        mas[i].Show();
    }
    for (int i = 0; i < 3; i++)
    {
        mas[i].Ipart();
        cout << "mas[" << i << "].Ipart(" << mas[i].first << "," << mas[i].second << ")=" << mas[i].Ipart() << endl;
    }
    fraction *p_mas=new fraction[3];
    for (int i = 0; i < 3; i++)
    {
        p_mas[i].Read();
    }
    for (int i = 0; i < 3; i++)
    {
        p_mas[i].Show();
    }
    for (int i = 0; i < 3; i++)
    {
        p_mas[i].Ipart();
        cout << "p_mas[" << i << "].Ipart(" << p_mas[i].first << "," << p_mas[i].second << ")=" << p_mas[i].Ipart() << endl;
    }
    int x, y;
    cout << "n\First?"; cin >> x;
    cout << "n\Second?"; cin >> y;
    fraction F = make_fraction(x, y);
    F.Show();
    cout << "F.Ipart(" << F.first << "," << F.second << ")=" << F.Ipart() << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
