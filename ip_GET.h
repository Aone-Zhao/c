//
// Created by Aone on 2023/4/19.
//

#ifndef ZH_IP_GET_H
#define ZH_IP_GET_H
#include <winsock2.h>
#include <string>
#pragma comment(lib,"ws_32.lib")
using namespace std;
class ip_GET{
private:
    string _url;
public:
    ip_GET();
    ip_GET(string url);
    ~ip_GET();
};
#endif //ZH_IP_GET_H
