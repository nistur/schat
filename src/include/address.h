#ifndef __SCHAT_ADDRESS_H__
#define __SCHAT_ADDRESS_H__

#define SCHAT_NODE_DEFAULT_PORT 8091
#define SCHAT_ADDRESS_MAX_LENGTH 128

namespace schat
{
    class Address
    {
    public:
        Address( char ip[4] );
        Address( char ip[4], int port );
        Address( const char* domain );
        Address( const char* domain, int port );

        Address( const Address& addr );
    private:
        char m_accessAddress[SCHAT_ADDRESS_MAX_LENGTH];
    };
};

#endif/*__SCHAT_ADDRESS_H__*/
