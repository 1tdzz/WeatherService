#include <vector>
#include "XmlService.h"
using namespace std;

int main() {
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

	return 0;
}