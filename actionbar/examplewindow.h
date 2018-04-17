#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  // Slots

  // Widgets
  Gtk::Image m_face_image;
  Gtk::ActionBar m_action_bar;
  Gtk::ToggleButton m_gallery_button;
  Gtk::Button m_prev_button;
  Gtk::Button m_next_button;
  Gtk::Button m_photo_button;
  Gtk::ToggleButton m_effects_button;

  // Containers
  Gtk::Box m_box;
  Gtk::Box m_photo_box;

private:
};

#endif // GTKMM_EXAMPLEWINDOW_H
