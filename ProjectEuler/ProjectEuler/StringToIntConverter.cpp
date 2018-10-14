#include "pch.h"
#include "StringToIntConverter.h"





StringToIntConverter::StringToIntConverter(std::string & stringData):
	_Data(stringData)
{
	
}


void StringToIntConverter::convert() 
{
	_Value = 0;
	if (this->isInputValid())
	{
		_Value = stoi(_Data);
	}
}



bool StringToIntConverter::isInputValid()
{
	auto it = _Data.cbegin();
	return !_Data.empty() && std::find_if(_Data.begin(), _Data.end(), [](char c) {return !std::isdigit(c); }) == _Data.end();
}

int StringToIntConverter::getValue() const
{
	return _Value;
}



int StringToIntConverter::getValue(std::string &stringData) 
{
	_Data = stringData;
	this->convert();
	return _Value;
}

