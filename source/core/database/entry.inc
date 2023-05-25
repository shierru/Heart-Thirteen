/*
    Database Entry
*/
#if defined DATABASE_ENTRY_INCLUDED
    #endinput 
#endif
#define DATABASE_ENTRY_INCLUDED

#include <a_mysql>

static MySQL:db = MYSQL_INVALID_HANDLE;

stock MySQL:GetDB() { return db; }
stock MySQL:SetDB(MySQL:identifier) { db = identifier; }