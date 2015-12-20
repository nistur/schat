#include "message.h"
#include "contact.h"

#include <iostream>

namespace schat
{
    void Message::Send( Contact* contact, std::string message )
    {
        std::cout << message << std::endl;
    }
};
