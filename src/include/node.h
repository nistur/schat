#ifndef __SCHAT_NODE_H__
#define __SCHAT_NODE_H__

#include "address.h"
#include "command.h"

namespace schat
{
    class Node : Command::IProvider
    {
    public:
        Node( Address& address );

        Command CreateCommand( const void* payload, int size );
    private:
        Address m_address;
    };
};

#endif/*__SCHAT_NODE_H__*/
