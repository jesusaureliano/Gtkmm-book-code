#include <gtkmm.h>
#include "examplewindow.h"

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  ExampleWindow window(app);

  //Shows the window and returns when it is closed.
  return app->run(window);
}
