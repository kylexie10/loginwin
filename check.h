#ifndef CHECK_H
#define CHECK_H
#include <curl/curl.h>
#include <curl/easy.h>
#include<iostream>
#include<list>
#include<string>
#include<QByteArray>
using namespace std;
class check
{
public:
    check();
    ~check();

    std::string curl_post(std::string url,std::string postStr);
    std::string curl_get(std::string url,std::string  & postStr);
};

#endif // CHECK_H
