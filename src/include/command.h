#ifndef __SCHAT_COMMAND_H__
#define __SCHAT_COMMAND_H__

namespace schat
{
    class Command
    {
    public:
        class IProvider
        {
        public:
            virtual Command CreateCommand( const void* payload, int size ) = 0;
        };

        const void* const GetPayload() const { return m_payload; }
        const int GetPayloadSize() const { return m_payloadSize; }
    protected:
        void* m_payload;
        int   m_payloadSize;
    };
};

#endif/*__SCHAT_COMMAND_H__*/
