#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class WORKER {

private:
    std::string name; // ФИО работника
    std::string position; // название занимаемой должности
    int year; // год поступления на работу

public:
    WORKER();
    WORKER(std::string name, std::string position, int year);
    WORKER(const WORKER& other);
    ~WORKER();

    void setName(const std::string& name);
    void setPosition(const std::string& position);
    void setYear(int year);
    std::string getName() const;
    std::string getPosition() const;
    int getYear() const;
    int getExperience(int currentYear) const;

    friend std::ostream& operator<<(std::ostream& os, const WORKER& worker);
    friend std::istream& operator>>(std::istream& is, WORKER& worker);

    // Статический метод для сортировки по ФИО
    static bool compareByName(const WORKER& a, const WORKER& b);
};