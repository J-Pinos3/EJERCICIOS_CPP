#include <iostream>
#include <string>

#ifdef _WIN32
#define _WIN32_WINNT 0x0A00
#endif
#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>


int main() {
    asio::error_code ec;

    asio::io_context context;

    asio::ip::tcp::endpoint endpoint( asio::ip::make_address("93.184.216.34",ec), 80);

    asio::ip::tcp::socket socket(context);

    socket.connect(endpoint, ec);

    if (!ec) {
        std::cout << "Conectado!\n";
    }
    else {
        std::cout << "No se pudo conectar a la dirección: " << ec.message() << " \n";
    }

    if( socket.is_open() ){
        std::string sRequest =
            "GET /index.html HTTP/1.1\r\n"
            "Host: example.com\r\n"
            "Connection: close\r\n\r\n";

        socket.write_some( asio::buffer(sRequest.data(), sRequest.size()), ec);

        size_t bytes = socket.available();
        std::cout << "Bytes available: " << bytes << std::endl;

        if( bytes > 0 ){
            std::vector<char> vBuffer(bytes);
            socket.read_some( asio::buffer(vBuffer.data(), vBuffer.size()), ec);

            for(auto c: vBuffer){
                std::cout << c ;
            }
        }
    }

    socket.close();
    return 0;
}
