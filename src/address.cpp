#include "address.h"

#include <stdio.h>
#include <string.h>

namespace schat
{
    Address::Address( char ip[4] )
    {
        sprintf( m_accessAddress, "%d.%d.%d.%d:%d",
                 ip[ 0 ], ip[ 1 ],
                 ip[ 2 ], ip[ 3 ], SCHAT_NODE_DEFAULT_PORT );
    }

    Address::Address( char ip[4], int port )
    {
        sprintf( m_accessAddress, "%d.%d.%d.%d:%d",
                 ip[ 0 ], ip[ 1 ],
                 ip[ 2 ], ip[ 3 ], port );
    }
    
    Address::Address( const char* domain )
    {
        sprintf( m_accessAddress, "%s:%s", domain, SCHAT_NODE_DEFAULT_PORT );
    }

    Address::Address( const char* domain, int port )
    {
        sprintf( m_accessAddress, "%s:%s", domain, port );
    }

    Address::Address( const Address& addr )
    {
        memcpy( m_accessAddress, addr.m_accessAddress, SCHAT_ADDRESS_MAX_LENGTH );
    }
}
