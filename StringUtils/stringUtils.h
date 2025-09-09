#pragma once
#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <string>

class StringUtils
{
public:
	static std::string toUpper(std::string str);
	static std::string toLower(std::string str);
	static std::string reverse(std::string str);
	static int countVowels(std::string str);
	static bool isPalindrome(std::string str);
	static std::string removeWhiteSpace(std::string str);
	static int countWords(std::string str);
};

#endif // !STRINGUTILS_H
