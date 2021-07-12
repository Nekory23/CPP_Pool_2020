
#include <iostream>
#include <stdexcept>
#include <cstring>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)
try : _api(input, output) {}
catch (const std::exception &exception) {
    throw CommunicationError(std::string("Error: ") + exception.what());
}

CommunicationDevice::~CommunicationDevice()
{
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    try {
        for (size_t i = 0; i < nbUsers; ++i)
            _api.addUser(users[i]);
        _api.startMission(missionName);
    } catch (const std::logic_error &logic_error) {
        throw CommunicationError(std::string("LogicError: ") + logic_error.what());
    } catch (const std::runtime_error &runtime_error) {
        throw CommunicationError(std::string("RuntimeError: ") + runtime_error.what());
    } catch (const std::exception &exception) {
        throw CommunicationError(std::string("Error: ") + exception.what());
    }
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try {
        _api.sendMessage(user, message);
    } catch (const std::exception &exception) {
        std::cerr << exception.what() << std::endl;
    }
}

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try {
        _api.receiveMessage(user, message);
    } catch (const std::exception &exception) {
            std::cerr << exception.what() << std::endl << "INVALID MESSAGE";
    }
}
