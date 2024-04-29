#include "JsonService.h"
using nlohmann::json;
Weather JsonService::getWeather(std::string s)
{
    setlocale(LC_ALL, "ru");
    std::ifstream fin(s);
    if (!fin)
        throw std::exception("error");

    json j;
    j = json::parse(fin);
    std::string city = j["name"].get<std::string>(); //  Киров
    double lon = j["coord"]["lon"].get<double>(); // 49.6601
    double lat = j["coord"]["lat"].get<double>(); // 58.5966  
    double temperature = j["main"]["temp"].get<double>(); // 5.69
    std::string weather = j["weather"][0]["description"].get<std::string>(); // дождь
    double windSpeed = j["wind"]["speed"].get<double>(); // 4.27
    int clouds = j["clouds"]["all"].get<int>(); // 100
    return Weather(city,lon,lat,temperature,weather,windSpeed,clouds);
}

