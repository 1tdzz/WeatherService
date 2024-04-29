#pragma once
#include "Service.h"
#include "../WeatherService/pugixml-1.14/src/pugixml.hpp"
#include "Weather.h"
//#include "pugixml-1.14/src/pugixml.hpp"
#include <exception>
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


