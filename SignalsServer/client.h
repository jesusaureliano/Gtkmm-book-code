#ifndef GTKMM_EXAMPLE_CLIENT_H
#define GTKMM_EXAMPLE_CLIENT_H

#include <sigc++/sigc++.h>

//Client must inherit from sigc::trackable.
//because libsigc++ needs to keep track of the lifetime of signal handlers.
class Client : public sigc::trackable
{
public:
  Client();
  virtual ~Client();

  //Signal handler:
  void on_server_something(bool a, int b);
};

#endif //GTKMM_EXAMPLE_CLIENT_H
