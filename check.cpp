#include "check.h"

static size_t receive_data_t(void *contents, size_t size, size_t nmemb, void *stream){
   std::string *str = (std::string *)stream;
   (*str).append((char *)contents, size * nmemb);
   return size * nmemb;
}

check::check()
{

}

std::string check::curl_post(std::string url,std::string postStr)
{
    std::string strResponse = "";
    CURL *curl;
    CURLcode res;
    //CURLMcode mres;
    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (!curl) {
        std::cout << "curl init failed." << endl;
        return "";
    }
    //std::cout << " url: " << url << std::endl;
    //std::cout << " postStr: " << postStr << std::endl;
    curl_slist *pList = NULL;
    pList = curl_slist_append(pList, "Content-Type: application/json");
    pList = curl_slist_append(pList, "Accept: application/json");
    pList = curl_slist_append(pList, "Connection: close");
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, pList);
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_POST, 1);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postStr.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, receive_data_t);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void*)&strResponse);
    res = curl_easy_perform(curl);
    //std::cout << " res: " << res << std::endl;
    //std::cout << " strResponse: " << strResponse << std::endl;
    curl_easy_cleanup(curl);
    curl_slist_free_all(pList);
    curl_global_cleanup();
    return strResponse;
}

std::string check::curl_get(string url, string & postStr)
{
    std::string s="Authorization:"+postStr;
    std::string strResponse = "";
    CURL *curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (!curl) {
        std::cout << "curl init failed." << endl;
        return "";
    }
    //std::cout << " url: " << url << std::endl;
    //std::cout << "s: " << s << std::endl;
    //std::cout << " postStr: " << postStr << std::endl;
    curl_slist *pList = NULL;
    pList = curl_slist_append(pList, "Accept: application/json");
    pList = curl_slist_append(pList, s.c_str());
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, pList);
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
   //curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
   curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);
   curl_easy_setopt(curl, CURLOPT_TIMEOUT, 1);
   curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
   curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION,receive_data_t);
   curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void*)&strResponse);
   res = curl_easy_perform(curl);
   //std::cout << "curl_get   " << res << std::endl;
   //std::cout << "strResponse" << strResponse << std::endl;
   curl_easy_cleanup(curl);
   return strResponse;
}
