#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow(int which);
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_quit_clicked();

  //Child widgets:
  Gtk::Button m_button;
  Gtk::Box m_box1;
  Gtk::Box m_boxQuit;
  Gtk::Button m_buttonQuit;

  Gtk::Label m_Label1, m_Label2;

  Gtk::Separator m_separator1, m_separator2;
};

#endif //GTKMM_EXAMPLEWINDOW_H
