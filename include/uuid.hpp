#include <windows.h>
#include <rpc.h>
#include <iostream>

#pragma comment(lib, "Rpcrt4.lib") 

std::string generateUUID() {
    UUID uuid;
    UuidCreate(&uuid);

    RPC_CSTR str;
    UuidToStringA(&uuid, &str);

    std::string uuidStr(reinterpret_cast<char*>(str));
    RpcStringFreeA(&str);

    return uuidStr;
}