

#include "TitleLayer.h"


TitleLayer::TitleLayer() : mAnimationManager(NULL),titleLabel(NULL)
{
	
}
TitleLayer::~TitleLayer()
{
	CC_SAFE_RELEASE_NULL(mAnimationManager);
	CC_SAFE_RELEASE(titleLabel);
}

bool TitleLayer::init()
{
	if(!CCLayer::init())
	{
		return false;
	}
	
	return true;
}

SEL_MenuHandler TitleLayer::onResolveCCBCCMenuItemSelector(CCObject* pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "startButtonTapped", TitleLayer::startButtonTapped);
	
	return NULL;
}
SEL_CCControlHandler TitleLayer::onResolveCCBCCControlSelector(CCObject * pTarget, const char *pSelectorName)
{
	return NULL;
}
bool TitleLayer::onAssignCCBMemberVariable(CCObject* pTarget, const char *pMemberVariableName, CCNode* pNode)
{
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"titleLabel",CCLabelBMFont *,this->titleLabel);
	
	return false;
}
// アニメーション終了時の処理
void TitleLayer::completedAnimationSequenceNamed(const char *name)
{
	if(strcmp(name,"TitleAnimation") == 0)
	{
		
	}
}
// ロード後
void TitleLayer::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
	// 日本語以外の場合のローカライズ
	if(CCApplication::sharedApplication()->getCurrentLanguage() != kLanguageJapanese)
	{
		
	}
}

void TitleLayer::setAnimationManager(cocos2d::extension::CCBAnimationManager *pAnimationManager)
{
	CC_SAFE_RELEASE_NULL(mAnimationManager);
    mAnimationManager = pAnimationManager;
    CC_SAFE_RETAIN(mAnimationManager);
	
	// Delegate設定
	mAnimationManager->setDelegate(this);
}

#pragma mark MenuItemTapped
// スタートボタンをタップした
void TitleLayer::startButtonTapped(cocos2d::CCObject pSender, CCControlEvent pCCControlEvent)
{
	CCLOG("startButtonTapped");
}


