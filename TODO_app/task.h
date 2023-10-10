#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>
class Task;

void saveTasksToFile(const std::vector<Task>& tasks, const std::string& fileName );
std::vector<Task> loadTasksFromFile(const std::string& fileName);

class Task
{
public:
    Task(std::string desc, bool don);
    std::string getDescription() const;
    void setDescription(const std::string &newDescription);
    bool getDone() const;
    void setDone(bool newDone);

private:
    std::string description;
    bool done;
};

#endif // TASK_H
