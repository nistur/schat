#ifndef __SCHAT_MESSAGE_H__
#define __SCHAT_MESSAGE_H__

#include <string>

namespace schat
{
    class Contact;

    class Message
    {
    public:
        static void Send( Contact* contact, std::string message );
    };
};

#endif/*__SCHAT_MESSAGE_H__*/
