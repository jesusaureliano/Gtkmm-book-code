#include "examplewindow.h"

ExampleWindow::ExampleWindow()
: m_Button_FixLines("Fix lines")
{
  set_title("Thin lines example");

  m_Container.set_orientation(Gtk::ORIENTATION_HORIZONTAL);

  m_Container.add(m_Area_Lines);
  m_Container.add(m_Button_FixLines);

  add(m_Container);

  m_Button_FixLines.signal_toggled().connect(
    sigc::mem_fun(*this, &ExampleWindow::on_button_toggled));

  // Synchonize the drawing in m_Area_Lines with the state of the toggle button.
  on_button_toggled();

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_toggled()
{
  m_Area_Lines.fix_lines(m_Button_FixLines.get_active());
}
