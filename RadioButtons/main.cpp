//foo.cpp
#include <gtkmm.h>
#include "radiobuttons.h"

int main(int argc, char** argv)
{
        auto app = Gtk::Application::create(argc, argv);

        RadioButtons buttons;

        return app->run(buttons);
}
