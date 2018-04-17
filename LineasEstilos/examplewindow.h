#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/grid.h>
#include <gtkmm/checkbutton.h>
#include "myarea.h"

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_toggled();

private:
  Gtk::Grid m_Container;
  MyArea m_Area_Lines;
  Gtk::CheckButton m_Button_FixLines;
};

#endif //GTKMM_EXAMPLEWINDOW_H
