//
// Created by Aone on 2023/4/19.
//

#include "ip_GET.h"
ip_GET::ip_GET() {
    throw "必须要有一个参数";
}
ip_GET::ip_GET(std::string url) {
     _url = url;
     WSAData wsadata;
    WSAStartup(MAKEWORD(2,2),&wsadata);
    socket(AF_INET,SOCK_STREAM,0);

}