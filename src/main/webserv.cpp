#include "webserv.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	NginxConfig	config = ( argc > 1 ? NginxConfig(argv[1]) : NginxConfig() );

	try
	{
		config.parse();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}
