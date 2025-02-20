//texture.h programmed by hunter manko
#ifndef TEXTURE_H
#define TEXTURE_H

#define TEXTURE_XAML_CODE r47ww65qpppq3xrr7

int MAX_TEXTURE_SIZE[9999];

class texture_t{
public:
 texture_t();

 int textureid;

 const char * pTextureName;
 virtual const char * SignalTextureName() = 0;

 void LoadTexture(texture_t * texture, int id, const char * pTextureName);

 double TextureFlags = 00000.33333;
};

#endif