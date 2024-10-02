/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** Client
*/

#include <asio.hpp>
#include <string>
#include <thread>
#include <array>

#ifndef CLIENT_HPP_
#define CLIENT_HPP_

class Client {
    public:
        Client(asio::io_context& ioContext, const std::string& host, const std::string& port);
        ~Client();
        void sendMessage(const std::string &message);
        bool getIsRunning();

    private:
        void msgFromServer();

        asio::ip::udp::socket _socket;
        asio::ip::udp::endpoint _receiveEndpoint;
        std::thread _receiverThread;
        bool _isRunning;
};

#endif /* !CLIENT_HPP_ */
