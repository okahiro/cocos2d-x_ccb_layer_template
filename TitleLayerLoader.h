

#ifndef Sample_TitleLayerLoader_h
#define Sample_TitleLayerLoader_h

#include "TitleLayer.h"

class TitleLayerLoader : public cocos2d::extension::CCLayerLoader
{
public:
	CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(TitleLayerLoader,loader);
protected:
	CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(TitleLayer);
};

#endif
