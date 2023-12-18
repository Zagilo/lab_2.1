#include "worker_manager.h"

void WorkerManager::addWorker(const WORKER& worker) {
    workers.push_back(worker);
    sortWorkers(); // ��������� ����� ������� ����������
}

void WorkerManager::displayWorkersWithExperience(int years, int currentYear) const {
    bool found = false;
    for (const auto& worker : workers) {
        if (worker.getExperience(currentYear) > years) {
            std::cout << worker << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "��� ���������� �� ������ ����� " << years << " ���." << std::endl;
    }
}

void WorkerManager::sortWorkers() {
    std::sort(workers.begin(), workers.end(), WORKER::compareByName);
}

bool WORKER::compareByName(const WORKER& a, const WORKER& b) {
    return a.getName() < b.getName(); // ������� ������������������ ����������
}