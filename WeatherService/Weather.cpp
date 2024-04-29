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
	std::cout << "Погода в городе " << city << ": \n";
	std::cout << "Температура: " << temperature << "\n";
	std::cout << "Погода: " << weather << "\n";
	std::cout << "Скорость ветра: " << windSpeed << "\n";
	std::cout << "Облачность: " << clouds << "\n";
};