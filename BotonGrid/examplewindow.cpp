#include <iostream>
#include "examplewindow.h"

ExampleWindow::ExampleWindow()
: m_button_1("button 1"),
  m_button_2("button 2"),
  m_button_quit("Quit")
{
  set_title("Gtk::Grid");
  set_border_width(12);

  add(m_grid);

  m_grid.add(m_button_1);
  m_grid.add(m_button_2);
  m_grid.attach_next_to(m_button_quit, m_button_1, Gtk::POS_BOTTOM, 2, 1);

  m_button_1.signal_clicked().connect(
    sigc::bind<Glib::ustring>( sigc::mem_fun(*this,
      &ExampleWindow::on_button_numbered), "button 1") );
  m_button_2.signal_clicked().connect(
    sigc::bind<Glib::ustring>( sigc::mem_fun(*this,
      &ExampleWindow::on_button_numbered), "button 2") );

  m_button_quit.signal_clicked().connect(sigc::mem_fun(*this,
    &ExampleWindow::on_button_quit) );

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_quit()
{
  hide();
}

void
ExampleWindow::on_button_numbered(const Glib::ustring& data)
{
  std::cout << data << " was pressed" << std::endl;
}
