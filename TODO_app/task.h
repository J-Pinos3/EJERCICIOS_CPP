#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

class Task
{
public:
    Task(std::string desc, bool don);
    void saveTasksToFile(const std::vector<Task>& tasks, const std::string& fileName );
    std::vector<Task> loadTasksFromFile(const std::string& fileName);

private:
    std::string description;
    bool done;
};

#endif // TASK_H
