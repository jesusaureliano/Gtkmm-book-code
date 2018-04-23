#include "examplewindow.h"

ExampleWindow::ExampleWindow()
: m_Button("_Close", /* mnemonic= */ true)
{
  set_title("Alignment");
  set_border_width(10);
  set_default_size(200, 50);

  m_Button.set_halign(Gtk::ALIGN_END);
  m_Button.set_valign(Gtk::ALIGN_CENTER);
  add(m_Button);

  m_Button.signal_clicked().connect( sigc::mem_fun(*this,
              &ExampleWindow::on_button_clicked) );

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_clicked()
{
  hide();
}
