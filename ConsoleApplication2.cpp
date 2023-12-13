#include <iostream>
#include "Worker.h"
#include "worker_manager.h"
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    WorkerManager manager;
    int choice;
    int currentYear = 2023; // Пример текущего года
    string help, help1, help2, help3;
    int h = 0;
    do {

        std::cout << "1. Добавить работника\n";
        std::cout << "2. Показать работников с опытом работы\n";
        std::cout << "3. Выход\n";
        std::cout << "Выберите опцию: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            WORKER worker;
            std::cout << "Введите данные работника Фамилию: ";
            std::cin >> help1;
            std::cout << "Введите данные работника Имя: ";
            std::cin >> help2;
            std::cout << "Введите данные работника Отчество: ";
            std::cin >> help3;
            help = help1 + " " + help2 + " " + help3;
            worker.setName(help);
            std::cout << "Введите данные работника должность: ";
            std::cin >> help;
            worker.setPosition(help);
            std::cout << "Введите данные работника год: ";
            std::cin >> h;
            worker.setYear(h);
            manager.addWorker(worker);
            break;
        }
        case 2: {
            int years;
            std::cout << "Введите минимальный стаж работы: ";
            std::cin >> years;
            manager.displayWorkersWithExperience(years, currentYear);
            break;
        }
        case 3:
            break;
        default:
            std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
            system("CLS");
        }
    } while (choice != 3);

    return 0;
}