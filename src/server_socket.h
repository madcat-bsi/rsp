struct server_socket_event_data {
    int epoll_fd;
    char *backend_addr;
    char *backend_port_str;
};

extern struct epoll_event_handler_data *create_server_socket_handler(int epoll_fd,
                                                                     char *server_port_str,
                                                                     char *backend_addr,
                                                                     char *backend_port_str);
