#ifndef EXPRESS_RESPONSE_HPP
#define EXPRESS_RESPONSE_HPP

#include <router/common_types.hpp>

namespace express {

class response {
  public:
    explicit response(std::shared_ptr<HttpServer::Response> res);

    void append(const std::string &header_name, std::string header_content);
    void send(const htmlContent &html);
    void json(std::string const &json);
    // void send (Buffer) -- octet stream

    void sendStatus(http_status status);
    void sendFile(const boost::filesystem::path &file);

  private:
    std::shared_ptr<HttpServer::Response> _res;
    std::string _header_append;
};

}  // namespace express
#endif
