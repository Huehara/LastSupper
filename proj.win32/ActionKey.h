#ifndef  _ACTION_KEY_H_
#define _ACTION_KEY_H_
#include "cocos2d.h"
#include "define.h"

class ActionKey : public cocos2d::Layer
{
public:
	bool init();
	CREATE_FUNC(ActionKey);
	bool isPressed(Key key, int count);
	bool isPressed(Key key);
	void updateKeyState();

private:
	void onKeyPressed(cocos2d::EventKeyboard::KeyCode keycode, cocos2d::Event * event);
	void onKeyReleased(cocos2d::EventKeyboard::KeyCode keycode, cocos2d::Event * event);
	void initKeyState();
	std::map<Key, int> keyStatus;
};

#endif // _ACTION_KEY_H_