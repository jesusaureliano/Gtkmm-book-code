#ifndef GTKMM_EXAMPLE_BUTTONBOX_H
#define GTKMM_EXAMPLE_BUTTONBOX_H

#include <gtkmm.h>

class ExampleButtonBox : public Gtk::Frame
{
public:
  ExampleButtonBox(bool horizontal,
       const Glib::ustring& title,
       gint spacing,
       Gtk::ButtonBoxStyle layout);

protected:
  Gtk::Button m_Button_OK, m_Button_Cancel, m_Button_Help;
};

#endif //GTKMM_EXAMPLE_BUTTONBOX_H
