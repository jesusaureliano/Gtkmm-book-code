#include "messageslist.h"
#include <sstream>

MessagesList::MessagesList()
{
  /* Create a new scrolled window, with scrollbars only if needed */
  set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);

  add(m_TreeView);

  /* create list store */
  m_refListStore = Gtk::ListStore::create(m_Columns);

  m_TreeView.set_model(m_refListStore);

  /* Add some messages to the window */
  for(int i = 0; i < 10; ++i)
  {
    std::ostringstream text;
    text << "message #" << i;

    Gtk::TreeModel::Row row = *(m_refListStore->append());
    row[m_Columns.m_col_text] = text.str();
  }

  //Add the Model's column to the View's columns:
  m_TreeView.append_column("Messages", m_Columns.m_col_text);

  show_all_children();
}

MessagesList::~MessagesList()
{
}
