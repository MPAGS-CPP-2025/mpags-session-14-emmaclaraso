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
    // Store the key
    key_ = key;
    // Make sure the key is uppercase
    std::transform(std::begin(key_), std::end(key_), std::begin(key_),
                   ::toupper);
    // Remove non-alphabet characters
    key_.erase(std::remove_if(std::begin(key_), std::end(key_),
                              [](char c) { return !std::isalpha(c); }),
               std::end(key_));
    // Check if the key is empty and replace with default if so
    if (key_.empty()){
        key_ = "DEFAULT";
    }

    // loop over the key

    for (const char letter : key_) {
        // Find the letter position in the alphabet
        const std::size_t index{Alphabet::alphabet.find(letter)};

        // Create a CaesarCipher using this position as a key
        CaesarCipher cipher(index);

        // Insert a std::pair of the letter and CaesarCipher into the lookup
        charLookup_.insert(std::make_pair(letter, cipher));
        }
        

}

std::string VigenereCipher::applyCipher(const std::string& inputText, const CipherMode) const
{
return inputText;
}