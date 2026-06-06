#include "server.h"

#define PORT "3490"
#define BACKLOG 10

int main() {
	struct addrinfo *servinfo = server_get_addr_info(PORT);
	int sockfd = server_create_and_bind_socket(servinfo);
	server_free_addr_info(servinfo);
	server_listen(sockfd, BACKLOG);

	while (1) {
		server_accept_connection(sockfd);
	}

	return 0;
}
