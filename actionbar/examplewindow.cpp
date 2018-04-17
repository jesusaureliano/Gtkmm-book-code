#include "examplewindow.h"

ExampleWindow::ExampleWindow()
: m_gallery_button("Gallery"),
  m_effects_button("Effects"),
  m_box(Gtk::ORIENTATION_VERTICAL),
  m_photo_box(Gtk::ORIENTATION_HORIZONTAL)
{
  // Window properties
  set_title("ActionBar Example");
  set_default_size(600, 400);

  // Prefer dark theme
  auto settings = Gtk::Settings::get_default();
  settings->property_gtk_application_prefer_dark_theme().set_value(true);

  // Face
  m_face_image.set_from_icon_name("face-cool", Gtk::ICON_SIZE_DIALOG);

  // Center widget layout
  m_prev_button.set_image_from_icon_name("go-previous-symbolic", Gtk::ICON_SIZE_BUTTON, true);
  m_next_button.set_image_from_icon_name("go-next-symbolic", Gtk::ICON_SIZE_BUTTON, true);
  m_photo_button.set_image_from_icon_name("media-record-symbolic", Gtk::ICON_SIZE_BUTTON, true);
  m_photo_box.pack_start(m_prev_button, Gtk::PACK_SHRINK);
  m_photo_box.pack_start(m_photo_button, Gtk::PACK_SHRINK);
  m_photo_box.pack_start(m_next_button, Gtk::PACK_SHRINK);
  auto style_context = m_photo_box.get_style_context();
  style_context->add_class("raised");
  style_context->add_class("linked");

  // ActionBar layout
  m_action_bar.pack_start(m_gallery_button);
  m_action_bar.set_center_widget(m_photo_box);
  m_action_bar.pack_end(m_effects_button);

  // Layout
  m_box.set_homogeneous(false);
  m_box.pack_start(m_face_image, Gtk::PACK_EXPAND_WIDGET);
  m_box.pack_end(m_action_bar, Gtk::PACK_SHRINK);
  add(m_box);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
