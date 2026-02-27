#include "VigenereCipher.hpp"
#include "Alphabet.hpp"

#include <algorithm>
#include <string>

/**
 * \file VigenereCipher.cpp
 * \brief Contains the implementation of the VigenereCipher class
 */

VigenereCipher::VigenereCipher (const std::string& key){
// Set the given key
setKey(key);
}

void VigenereCipher::setKey(const std::string& key){
}

std::string VigenereCipher::applyCipher(const std::string& inputText, const CipherMode) const
{
return inputText;
}