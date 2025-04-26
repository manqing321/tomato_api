#pragma once
#include <string>
using std::string;

namespace tomato_model {
    class tomato {
    public:
        tomato();
        tomato(const string& sowing_time, const string& mature_time, int minutes, const string& label, const string& user);
        const string& get_sowing_time() const;
        const string& get_mature_time() const;
        int get_minutes() const;
        const string& get_label() const;
        const string& get_user() const;
    private:
        string sowing_time;
        string mature_time;
        int minutes;
        string label;
        string user;
    };
}