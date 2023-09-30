//
// Created by Luis Ruisinger on 28.09.23.
//

#ifndef WEBSERVER_C_CLIENT_H
#define WEBSERVER_C_CLIENT_H

#include <netinet/in.h>

typedef struct Client {
    int32_t fd;
    in_port_t sin6_port;
    struct in6_addr sin6_addr;
} client;

#endif //WEBSERVER_C_CLIENT_H