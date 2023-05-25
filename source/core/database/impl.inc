/*
    Database Impl
*/
#if defined DATABASE_IMPL_INCLUDED
    #endinput 
#endif
#define DATABASE_IMPL_INCLUDED

#include <YSI_Coding/y_hooks>

hook OnGameModeInit() {
    new MySQL:identifier;
    
    #if !defined DATABASE_CONNECT_FILE
        new MySQLOpt:option_id = mysql_init_options();
        mysql_set_option(option_id, AUTO_RECONNECT);

        identifier = mysql_connect("localhost", "root", "", "server", option_id);
    #else
        identifier = mysql_connect_file("mysql.ini");
    #endif

    new error_code = mysql_errno(identifier);

    if(error_code != 0) {
        new error_message[100];

        mysql_error(error_message, sizeof(error_message));

        print("[MYSQL] Not Connected...");
        printf("[MYSQL] Error code: #%d, message: \"%s\"", error_code, error_message);
        
        SendRconCommand("exit");

        return;
    }

    SetDB(identifier);

    print("[MYSQL] Database connected.");
}

hook OnGameModeExit() {
    mysql_close(GetDB());
}