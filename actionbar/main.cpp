#include "examplewindow.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create("org.gtkmm.example.actionbar");

    ExampleWindow window;

    // Shows the window and returns when it is closed.
    return app->run(window, argc, argv);
}
