#include "EventQueue.h"
#include "Listener.h"

EventQueue::EventQueue() {
    listenerArray = std::vector<std::shared_ptr<Listener>>();
}

void EventQueue::addEventListener(std::shared_ptr<Listener> l) {
    listenerArray.push_back(l);
}

void EventQueue::removeEventListener(std::shared_ptr<Listener> l) {
    for(int i = 0; i < listenerArray.size(); ++i) {
        if(listenerArray.at(i) == l) {
            listenerArray.erase(listenerArray.begin() + i);
        }
    }
}

void EventQueue::callEvent(std::shared_ptr<Event> e) {
    for(std::shared_ptr<Listener> l : listenerArray) {
        l->listenTo(e);
    }
}