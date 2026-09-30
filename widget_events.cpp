#include "widget_events.hpp"
#include <iostream>

bool WidgetEvent::event(QEvent *event)
{
    std::cout << "Event type: "
              << static_cast<int>(event->type())
              << std::endl;

    return true;
}