#pragma once

namespace sf {
    class Texture;
}

class RaycasterInterface
{
public:
    virtual const char * getRaycasterTechName() const = 0;
    virtual void rasterize() = 0;
    virtual void setScreenSize(unsigned width, unsigned height) = 0;
    virtual void setTexture(unsigned texnum, const sf::Image& img) = 0;
    virtual void downloadImage(sf::Texture& texture) = 0;
    virtual void downloadDepthImage(sf::Texture& texture) = 0;

private:


};
