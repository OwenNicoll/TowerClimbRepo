#include "AssetManager.h"


std::map<std::string, sf::Texture> AssetManager::textures; 


sf::Texture AssetManager::RequestTexture(std::string textureName)
{
    auto pairFound = textures.find(textureName);

    if (pairFound != textures.end())
    {
        // We found an existing texture
        return pairFound->second;           // The value in the key-value pair
    }
    else
    {
        sf::Texture newTexture = textures[textureName];
        newTexture.loadFromFile(textureName);
        return newTexture;
    }
}

sf::SoundBuffer AssetManager::RequestSoundBuffer(std::string soundName)
{
    auto pairFound = sounds.find(soundName);

    if (pairFound != sounds.end())
    {
        return pairFound->second;
    }
    else
    {
        sf::SoundBuffer newSound = sounds[soundName];
        newSound.loadFromFile(soundName);
        return newSound;
    }
}

void AssetManager::DestroyAllAssets()
{
}
