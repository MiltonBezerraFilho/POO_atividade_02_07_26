#ifndef ALERTA_HPP
#define ALERTA_HPP

#include "formatavel.hpp"
#include <string>

class alerta : public formatavel {
private:
    std::string origem_;
    int severidade_;

public:
    alerta(const std::string& origem, int sev);
    virtual ~alerta() = default;

    void exibir() const;

    virtual std::string tipo() const = 0;
    virtual std::string formatar() const = 0;

    std::string origem() const;
    int severidade() const;
};

#endif