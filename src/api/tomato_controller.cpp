#include "tomato_controller.h"

using tomato_model::msg;
using tomato_model::tomato;

namespace tomato_api {
    msg<bool> tomato_controller::add_tomato() {
        return msg<bool>(true, "success", true);
    }

    msg<tomato> tomato_controller::get_tomato(){
        return msg<tomato>(false, "failue", 
            tomato(
                "2025-12-26 20:51:00",
                "2025-12-26 21:16:00",
                25,
                "test tomato",
                "yajun"
            )
        );
    }   
}