#include "Weather.h"

Weather::Weather(std::string City, double Lon, double Lat, double Temperature, std::string Weather, double WindSpeed, int Clouds) {
	city = City;
	lon = Lon;
	lat = Lat;
	temperature = Temperature;
	weather = Weather;
	windSpeed = WindSpeed;
	clouds = Clouds;
}
void Weather::getWeather()
{
	std::cout << "������ � ������ " << city << ": \n";
	std::cout << "�����������: " << temperature << "\n";
	std::cout << "������: " << weather << "\n";
	std::cout << "�������� �����: " << windSpeed << "\n";
	std::cout << "����������: " << clouds << "\n";
};