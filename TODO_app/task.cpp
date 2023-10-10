#include "task.h"
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <algorithm>
Task::Task(std::string desc, bool don)
{
    this->description = desc;
    this->done=don;
}

void saveTasksToFile(const std::vector<Task>& tasks, const std::string& fileName){
    std::ofstream ostream (fileName);
    ostream << tasks.size();

    for(const Task& task : tasks){
        std::string description = task.getDescription();
        std::replace(description.begin(), description.end(), ' ','_');

        ostream << "\n" << description << " " << task.getDone();
    }

}


std::vector<Task> loadTasksFromFile(const std::string& fileName){

    if( !std::filesystem::exists(fileName) ){
        return std::vector<Task>();
    }
    std::vector<Task> tasks;
    std::ifstream istream(fileName);
    int n;

    istream >> n;

    for(int i = 0; i < n; i++){
        std:: string description;
        bool done;
        istream >> description >> done;
        std::replace(description.begin(), description.end(), '_',' ');
        tasks.push_back(Task{description,done});
    }

    return tasks;
}

std::string Task::getDescription() const
{
    return description;
}

void Task::setDescription(const std::string &newDescription)
{
    description = newDescription;
}

bool Task::getDone() const
{
    return done;
}

void Task::setDone(bool newDone)
{
    done = newDone;
}
