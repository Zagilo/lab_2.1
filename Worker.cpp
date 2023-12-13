#include "worker.h"

WORKER::WORKER() : name(""), position(""), year(0) {
    std::cout << "Default constructor called for WORKER" << std::endl;
}

WORKER::WORKER(std::string name, std::string position, int year)
    : name(name), position(position), year(year) {
    std::cout << "Parameterized constructor called for WORKER" << std::endl;
}

WORKER::WORKER(const WORKER& other)
    : name(other.name), position(other.position), year(other.year) {
    std::cout << "Copy constructor called for WORKER" << std::endl;
}

WORKER::~WORKER() {
    std::cout << "Destructor called for WORKER" << std::endl;
}
int WORKER::getExperience(int currentYear) const {
    return currentYear - year;
}
void WORKER::setName(const std::string& name) { this->name = name; }
void WORKER::setPosition(const std::string& position) { this->position = position; }
void WORKER::setYear(int year) { this->year = year; }
std::string WORKER::getName() const { return name; }
std::string WORKER::getPosition() const { return position; }
int WORKER::getYear() const { return year; }

std::ostream& operator<<(std::ostream& os, const WORKER& worker) {
    os << "Name: " << worker.name << ", Position: " << worker.position << ", Year: " << worker.year;
    return os;
}

std::istream& operator>>(std::istream& is, WORKER& worker) {
    is >> worker.name >> worker.position >> worker.year;
    return is;
}