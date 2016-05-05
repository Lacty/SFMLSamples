
#include <iostream>
#include <SFML/Network.hpp>
#include <string>


unsigned short port = 12345;

// UDP Recv Test
int main() {
  sf::UdpSocket sock;

  if (sock.bind(port) != sf::Socket::Done) return 0;
  std::cout << "waiting for a message..." << std::endl;

  char in[128];
  std::size_t recieved;
  sf::IpAddress sender;
  unsigned short senderPort;
  if (sock.receive(in, sizeof(in), recieved, sender, senderPort) != sf::Socket::Done) return 0;

  std::cout << "receive message from sender: " << in << std::endl;

  return 0;
}