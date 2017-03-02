#ifndef EXPRESS_RESPONSE_HPP
#define EXPRESS_RESPONSE_HPP

#include <router/common_types.hpp>

namespace express {

	class response {

    public:
		response(HttpServer::Response &resp);

        //set content type to HTML
        void send(htmlContent html);
        //void send(JSON) -- array or JSON ?
        //void send (Buffer) -- octet stream

        void sendStatus(int status);

    private:

        HttpServer::Response * res;
	};

}
#endif
