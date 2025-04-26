#pragma once
#include <string>
using std::string;

namespace tomato_model {
    template <typename T>
    class msg {
    public:
        msg();
        msg(bool result, const string& message, const T& data);
        void set_result(bool result);
        void set_message(const string& message);
        void set_data(const T& data);
        bool get_result() const;
        const string& get_message() const;
        const T& get_data() const;

    private:
        bool result;
        string message;
        T data;
    };
}

namespace tomato_model {
    
    template <typename T>
    msg<T>::msg(): result(false), message("") {}

    template <typename T>
    msg<T>::msg(bool result, const string& message, const T& data) 
    : result(result), message(message), data(data) {}

    template <typename T>
    void msg<T>::set_result(bool result) {
        this->result = result;
    }

    template <typename T>
    void msg<T>::set_message(const string& message) {
        this->message = message;
    }

    template <typename T>
    void msg<T>::set_data(const T& data) {
        this->data = data;
    }
    template <typename T>
    bool msg<T>::get_result() const {
        return this->result;
    }

    template <typename T>
    const string& msg<T>::get_message() const {
        return this->message;
    }

    template <typename T>
    const T& msg<T>::get_data() const {
        return this->data;
    }
}