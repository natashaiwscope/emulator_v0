#ifndef __SSL_EMAIL_CLIENT_H
#define __SSL_EMAIL_CLIENT_H

extern "C"
{
int email_main( int argc, char *argv[]);
int setCredencial(const char *smtp_serverName,
                  const char *smtp_port,
                  const char *userName,
                  const char *userPass,
                  const char *userFrom,
                  const char *userTo);
}

#endif
