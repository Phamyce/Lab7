#pragma once
#include "Service.h"
#include "pugiconfig.hpp"
#include "pugixml.hpp"
#include <stdexcept>
using namespace std;
using namespace pugi;

class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


