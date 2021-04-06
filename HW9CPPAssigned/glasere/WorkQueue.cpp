#include "WorkQueue.h"

WorkQueue::WorkQueue(){
    std::vector<std::shared_ptr<Command>> queue = {};
}

void WorkQueue::put(std::shared_ptr<Command> thing) {
    static std::mutex m;
    std::lock_guard <std::mutex> lock( m );
    queue.push_back(thing);
}

std::shared_ptr<Command> WorkQueue::get() {
    static std::mutex m;
    std::lock_guard <std::mutex> lock( m );
    if (queue.empty()) {
        return nullptr;
    }
    std::shared_ptr<Command> & temp = queue.front();
    queue.erase(queue.begin());
    return temp;
}