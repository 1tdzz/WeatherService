#include <iostream>
#include <string>
#pragma once
class Weather
{
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(std::string City, double Lon, double Lat, double Temperature, std::string Weather, double WindSpeed, int Clouds);
	void getWeather();
};

