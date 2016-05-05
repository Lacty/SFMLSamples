
#include <iostream>
#include <SFML/Network.hpp>
#include <string>


unsigned short port = 12345;

// UDP Send Test
int main() {
  sf::UdpSocket sock;

  char out[] = "Hello reciever";
  sf::IpAddress receiver("127.0.0.1");
  if (sock.send(out, sizeof(out), receiver, port) != sf::Socket::Done) return 0;

  std::cout << "Send Message to Receiver: " << out << std::endl;

  return 0;
}