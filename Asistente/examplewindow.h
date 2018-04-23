#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include "exampleassistant.h"
#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

private:
  // Signal handlers:
  void on_button_clicked();
  void on_assistant_apply();

  // Child widgets:
  Gtk::Grid m_grid;
  Gtk::Button m_button;
  Gtk::Label m_label1, m_label2;
  Gtk::CheckButton m_check;
  Gtk::Entry m_entry;
  ExampleAssistant m_assistant;
};

#endif /* GTKMM_EXAMPLEWINDOW_H */
