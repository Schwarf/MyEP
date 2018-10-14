#include "pch.h"
#include "StringSplit.h"


StringSplit::StringSplit(std::string & originString, std::string & delimiter):
	_OriginString(originString),
	_Delimiter(delimiter)
{
}

bool StringSplit::isInputValid() const
{
	return !_OriginString.empty() && !_Delimiter.empty();
}

void StringSplit::split()
{
	if (this->isInputValid())
	{
		auto data = _OriginString;
		std::size_t position = 0;
		// Find position of delimiter and make sure its not the end of the string
		while ((position = data.find(_Delimiter)) != std::string::npos )
		{
			auto token = data.substr(0, position);
			_StringTokens.push_back(token);
			data.erase(0, position + _Delimiter.length());
		}
		// Last element has no delimiter
		_StringTokens.push_back(data);
	}
}

std::vector<std::string> StringSplit::getStringTokens() 
{
	split();
	return _StringTokens;
}
