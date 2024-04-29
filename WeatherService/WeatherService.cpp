#include <vector>
#include "json.hpp"
#include "pugixml-1.14/src/pugixml.hpp"
#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include "XmlService.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	JsonService js;
	Weather w = js.getWeather("weather.json");
	w.getWeather();
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

	return 0;
}