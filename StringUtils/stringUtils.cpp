#include "stringUtils.h"
#include <string>
#include <algorithm>
#include <cctype>

std::string StringUtils::toUpper(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), 
		[](unsigned char c) {return std::toupper(c);} );
	return str;
}

std::string StringUtils::toLower(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(),
		[](unsigned char c) {return std::tolower(c); });
	return str;
}

int StringUtils::countVowels(std::string str) {
	int count = 0;
	for (char c : str) {
		c = std::tolower(static_cast<unsigned char>(c));
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			count++;
		}
	}
	return count;
}

int StringUtils::countWords(std::string str) {
	int count = 0;
	bool inWord = false;
	
	for (char c : str) {
		if (std::isspace(static_cast<unsigned char>(c))) {
			inWord = false;
		}
		else if (!inWord) {
			count++;
			inWord = true;
		}
	}

	return count;
}

bool StringUtils::isPalindrome(std::string str) {
	int left = 0, right = str.length() - 1;
	while (left < right) {
		if (str[left] != str[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

std::string StringUtils::reverse(std::string str) {
	std::reverse(str.begin(), str.end());
	return str;
}

std::string StringUtils::removeWhiteSpace(std::string str) {
	str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
	return str;
}

