#ifndef FORMATAVEL_HPP
#define FORMATAVEL_HPP

#include <string>

class formatavel {
public:
    virtual ~formatavel() = default;
    virtual std::string formatar() const = 0;
};

#endif