#include "client.h"
#include <iostream>

Client::Client()
{
}

Client::~Client()
{
}

void Client::on_server_something(bool a, int b)
{
  std::cout << "Client::on_server_something() called with these parameters: "
      << a << ", " << b << std::endl;
}
