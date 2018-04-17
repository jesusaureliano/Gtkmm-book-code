#include "buttons.h"
#include <iostream>

Buttons::Buttons() : m_button("something")
{

    set_title("CheckButton example");
    set_border_width(10);

    m_button.signal_clicked().connect(sigc::mem_fun(*this,
                                                    &Buttons::on_button_clicked));

    add(m_button);

    show_all_children();
}

Buttons::~Buttons()
{ }

void Buttons::on_button_clicked(){
    std::cout << "El botón fue clicked. state="
        <<  (m_button.get_active()? "true" : "false") << std::endl;
}
