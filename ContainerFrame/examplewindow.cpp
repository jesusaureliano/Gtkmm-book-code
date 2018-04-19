#include "examplewindow.h"

ExampleWindow::ExampleWindow()
{
 /* Set some window properties */
  set_title("Frame Example");
  set_size_request(300, 300);

  /* Sets the border width of the window. */
  set_border_width(10);

  add(m_Frame);

  /* Set the frames label */
  m_Frame.set_label("Gtk::Frame Widget");

  /* Align the label at the right of the frame */
  //m_Frame.set_label_align(Gtk::ALIGN_END, Gtk::ALIGN_START);

  /* Set the style of the frame */
  m_Frame.set_shadow_type(Gtk::SHADOW_ETCHED_OUT);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
