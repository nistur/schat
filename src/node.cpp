#include "node.h"

namespace schat
{
    class ForwardCommand : Command
    {
    public:
        ForwardCommand( const void* payload, int size, Node& node );
    };
    
    Node::Node( Address& address )
        : m_address( address )
    {
    }

    Command CreateCommand( const void* payload, int size )
    {
        ForwardCommand cmd( payload, size, *this );
        return cmd;
    }

    ForwardCommand::ForwardCommand( const void* payload, int size, Node& node )
    {
        m_payload = new char[size];
        memcpy(m_payload, payload, size);
    }
};
