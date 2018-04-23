#include "examplewindow.h"
#include <gtkmm/application.h>
#include <iostream>
#include <cstdlib>

#define GTK_APPLICATION_RECEIVES_COMMAND_LINE_ARGUMENTS 0

#if GTK_APPLICATION_RECEIVES_COMMAND_LINE_ARGUMENTS
namespace
{
int on_command_line(const Glib::RefPtr<Gio::ApplicationCommandLine>& command_line,
                    Glib::RefPtr<Gtk::Application>& app)
{
  int argc = 0;
  char** argv = command_line->get_arguments(argc);

  for (int i = 0; i < argc; ++i)
    std::cout << "argv[" << i << "] = " << argv[i] << std::endl;

  app->activate(); // Without activate() the window won't be shown.
  return EXIT_SUCCESS;
}
} // anonymous namespace
#endif


int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    std::cerr << "Usage: example <num>, where <num> is 1, 2, or 3." << std::endl;
    return EXIT_FAILURE;
  }

#if GTK_APPLICATION_RECEIVES_COMMAND_LINE_ARGUMENTS
  // The command line arguments must be checked before Gtk::Application::run()
  // is called. The Gio::APPLICATION_HANDLES_COMMAND_LINE flag and the
  // on_command_line() signal handler are not necessary. This program is simpler
  // without them, and with argc = 1 in the call to Gtk::Application::create().
  // They are included to show a program with Gio::APPLICATION_HANDLES_COMMAND_LINE.
  // Gio::APPLICATION_NON_UNIQUE makes it possible to run several instances of
  // this application simultaneously.
  auto app = Gtk::Application::create(argc, argv,
    "org.gtkmm.example", Gio::APPLICATION_HANDLES_COMMAND_LINE | Gio::APPLICATION_NON_UNIQUE);

  // Note after = false.
  // Only one signal handler is invoked. This signal handler must run before
  // the default signal handler, or else it won't run at all.
  app->signal_command_line().connect(sigc::bind(sigc::ptr_fun(&on_command_line), app), false);
#else
  // Gio::APPLICATION_NON_UNIQUE makes it possible to run several instances of
  // this application simultaneously.
  int argc1 = 1; // Don't give the command line arguments to Gtk::Application.
  auto app = Gtk::Application::create(argc1, argv,
    "org.gtkmm.example", Gio::APPLICATION_NON_UNIQUE);
#endif

  ExampleWindow window(std::atoi(argv[1]));
  return app->run(window); //Shows the window and returns when it is closed.
}
