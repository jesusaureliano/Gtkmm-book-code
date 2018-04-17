//foo.cpp
#include <gtkmm.h>
#include "buttons.h"


int main(int argc, char** argv)
{
        auto app = Gtk::Application::create(argc, argv);

        Buttons buttons;

        return app->run(buttons);
}
