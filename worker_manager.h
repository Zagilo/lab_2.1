#pragma once

#include "worker.h"
#include <vector>

class WorkerManager {
private:
    std::vector<WORKER> workers;

public:
    void addWorker(const WORKER& worker);
    void displayWorkersWithExperience(int years, int currentYear) const;
    void sortWorkers();
};