#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:

  //Child widgets:
  Gtk::AspectFrame m_AspectFrame;
  Gtk::DrawingArea m_DrawingArea;
};

#endif //GTKMM_EXAMPLEWINDOW_H
