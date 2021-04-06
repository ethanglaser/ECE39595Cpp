#include <vector>
#include <memory>
#include <mutex>
#include "Command.h"

class WorkQueue {
private:
    std::vector<std::shared_ptr<Command>> queue;



public:
    WorkQueue();
    void put(std::shared_ptr<Command>);
    std::shared_ptr<Command> get();


};