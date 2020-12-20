#ifndef LISTENER_H
#define LISTENER_H

#include <vector>
#include "EventType.h"
#include <memory>

class Listener {
    public:
        virtual void listenTo(std::shared_ptr<EventType> e) = 0;
};
#endif