#include "schat.h"
#include <restclient-cpp/restclient.h>
#include "message.h"

int main( int arc, char** argv )
{
    RestClient::headermap headers;
    headers["Accept"] = "application/json";

    RestClient::response r = RestClient::post("http://url.com/post", "text/json", "{\"foo\": \"bla\"}", headers);
        

    schat::Message::Send( NULL, "Testing" );
    return 0;
}
