#include <iostream>
#include "model/msg.hpp"
#include "api/tomato_controller.h"
using std::cout;
using std::endl;
using tomato_api::tomato_controller;

int main() {
    auto ctl = tomato_controller();
    auto msg_tomato = ctl.get_tomato();
    cout <<msg_tomato.get_result() << "\n";
    cout <<msg_tomato.get_message() << "\n";
    auto data = msg_tomato.get_data();
    cout << "\t"  << data.get_sowing_time() << "\n";
    cout << "\t"  << data.get_mature_time() << "\n";
    cout << "\t"  << data.get_minutes() << "\n";
    cout << "\t"  << data.get_label() << "\n";
    cout << "\t"  << data.get_user() << "\n";
    cout << endl;
}
