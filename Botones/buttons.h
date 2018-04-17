#ifndef BUTTONS_H
#define BUTTONS_H

#include <Gtkmm/Window.h>
#include <gtkmm/button.h>


class Buttons : public Gtk::Window
{
    public:
        Buttons();
        virtual ~Buttons();

    protected:
    // signal handlers:
    void on_button_clicked();

    //child widgets
    Gtk::Button m_button;
};

#endif // BUTTONS_H
