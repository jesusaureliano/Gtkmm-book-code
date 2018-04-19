#ifndef GTKMM_EXAMPLE_MESSAGETEXT_H
#define GTKMM_EXAMPLE_MESSAGETEXT_H

#include <gtkmm.h>

class MessageText : public Gtk::ScrolledWindow
{
public:
  MessageText();
  virtual ~MessageText();

  void insert_text();

protected:
  Gtk::TextView m_TextView;
};

#endif //GTKMM_EXAMPLE_MESSAGETEXT_H
