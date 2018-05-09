#include "timerexample.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    TimerExample example;
    return app->run(example);
}
