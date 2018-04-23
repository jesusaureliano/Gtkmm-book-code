#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <gtkmm.h>

class ExampleWindow : public Gtk::Dialog
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_dialog_response(int response_id);

  //Child widgets:
  Gtk::ScrolledWindow m_ScrolledWindow;
  Gtk::Grid m_Grid;
};

#endif //GTKMM_EXAMPLEWINDOW_H
