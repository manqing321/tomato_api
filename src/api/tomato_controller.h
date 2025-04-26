#pragma once
#include "../model/msg.hpp"
#include "../model/tomato.h"
using tomato_model::msg;
using tomato_model::tomato;

namespace tomato_api {
    class tomato_controller {
    public:
        msg<bool> add_tomato();
        msg<tomato> get_tomato();
    };
}