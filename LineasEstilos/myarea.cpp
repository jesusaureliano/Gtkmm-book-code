#include "myarea.h"

MyArea::MyArea()
: m_fix (0)
{
  set_size_request (200, 100);
}

MyArea::~MyArea()
{
}

bool MyArea::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
  Gtk::Allocation allocation = get_allocation();
  const int width = allocation.get_width();
  const int height = allocation.get_height();

  cr->set_line_width(1.0);

  // draw one line, every two pixels
  // without the 'fix', you won't notice any space between the lines,
  // since each one will occupy two pixels (width)
  for (int i = 0; i < width; i += 2)
  {
    cr->move_to(i + m_fix, 0);
    cr->line_to(i + m_fix, height);
  }

  cr->stroke();

  return true;
}

// Toogle between both values (0 or 0.5)
void MyArea::fix_lines(bool fix)
{
  // to get the width right, we have to draw in the middle of the pixel
  m_fix = fix ? 0.5 : 0.0;

  force_redraw();
}

// force the redraw of the image
void MyArea::force_redraw()
{
  auto win = get_window();
  if (win)
  {
    Gdk::Rectangle r(0, 0, get_allocation().get_width(), get_allocation().get_height());
    win->invalidate_rect(r, false);
  }
}
