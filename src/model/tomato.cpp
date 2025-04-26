#include "tomato.h"
using std::string;

namespace tomato_model {
    tomato::tomato() {}
    tomato::tomato(const string& sowing_time, const string& mature_time, int minutes, const string& label, const string& user)
     : sowing_time(sowing_time), mature_time(mature_time), minutes(minutes), label(label), user(user) {}

    const string& tomato::get_sowing_time() const {
        return this->sowing_time;
    }
    const string& tomato::get_mature_time() const {
        return this->mature_time;
    }
    int tomato::get_minutes() const {
        return this->minutes;
    }
    const string& tomato::get_label() const {
        return this->label;
    }
    const string& tomato::get_user() const {
        return this->user;
    }
}
