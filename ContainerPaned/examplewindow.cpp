#include "examplewindow.h"

ExampleWindow::ExampleWindow()
: m_VPaned(Gtk::ORIENTATION_VERTICAL)
{
  set_title ("Paned Windows");
  set_border_width(10);
  set_default_size(450, 400);

  /* Add a vpaned widget to our toplevel window */
  add(m_VPaned);

  /* Now add the contents of the two halves of the window */
  m_VPaned.add1(m_MessagesList);
  m_VPaned.add2(m_MessageText);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
