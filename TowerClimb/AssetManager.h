#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <map>


class AssetManager
{

public:

	static sf::Texture RequestTexture(std::string textureName);
	static sf::Texture RequestSoundBuffer(std::string soundName);
	
	static void DestroyAllAssets();
		


private:

	static std::map<std::string, sf::Texture> textures;
	static std::map<std::string, sf::SoundBuffer> sounds;



};

