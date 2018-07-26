#include <functional>
#include <iostream>
#include <string>
#include "bstrwrap.h"

/* This file contains utilities
 * for CBString
 */

/******************************
 * std::hash<Bstrlib::CBString>
 *****************************/

namespace std {
	template <> struct hash<bst::str>
	{
		size_t operator()(const Bstrlib::CBString& s) const {
			std::string ss{reinterpret_cast<const char*>(s.data)};
			return std::hash<std::string>()(ss);
		}
	};
}
