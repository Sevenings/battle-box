#include <gtkmm.h>
#include <iostream>


void on_button_pressed_do_lucas() {
    std::cout << "/send_mail(\"joaopedroianke@gmail.com\", \"Eai primo, o que você tá fazendo?\"" << std::endl;
}

class MyWindow : public Gtk::Window
{
public:
    MyWindow();
protected:
    Gtk::Button m_button{"Flexing Machine 7000"};
};

MyWindow::MyWindow() 
{
    set_title("Flexing Machine 7000");
    set_default_size(300, 200);

    m_button.signal_clicked().connect(sigc::ptr_fun(&on_button_pressed_do_lucas));

    set_child(m_button);
    m_button.show();
}

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("org.gtkmm.examples.base");

    return app->make_window_and_run<MyWindow>(argc, argv);
}

