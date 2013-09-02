

#ifndef Sample_TitleLayer_h
#define Sample_TitleLayer_h

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class TitleLayer : public CCLayer, public CCBSelectorResolver,public CCBMemberVariableAssigner,
										public CCBAnimationManagerDelegate,public CCNodeLoaderListener
{	
public:
	CCBAnimationManager* mAnimationManager;
	CCLabelBMFont *titleLabel;
	
	TitleLayer();
	virtual ~TitleLayer();
	
	virtual bool init();
	
	virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
	virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
	virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
	virtual void completedAnimationSequenceNamed(const char *name);
	virtual void onNodeLoaded(cocos2d::CCNode * pNode, cocos2d::extension::CCNodeLoader * pNodeLoader);
	
	CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(TitleLayer,create);
	
	void setAnimationManager(CCBAnimationManager *pAnimationManager);
	
	void startButtonTapped(CCObject pSender, CCControlEvent pCCControlEvent);
};

#endif
