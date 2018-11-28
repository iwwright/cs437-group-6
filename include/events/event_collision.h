#ifndef CSCI437_EVENT_COLLISION_H
#define CSCI437_EVENT_COLLISION_H

#include "entity.h"
#include "event.h"

class EventCollision : public Event
{

public:
    EventCollision(Entity *self, Entity *other) : Event(), self(self), other(other) {};
    static const EventType eventType;
    const EventType& getEventType() const override {return eventType;}
    Entity &getSelf() const {return *self;}
    Entity &getOther() const {return *other;}

private:
    Entity *self;
    Entity *other;

};


#endif //CSCI437_EVENT_COLLISION_H
