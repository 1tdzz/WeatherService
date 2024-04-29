#pragma once
#include "Service.h"
#include "json.hpp"
#include <exception>
#include <fstream>
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

