#pragma once

#include "BsEditorPrerequisites.h"
#include "BsGUIButtonBase.h"
#include "BsGUIToggleGroup.h"
#include "BsImageSprite.h"
#include "BsTextSprite.h"
#include "BsGUIContent.h"
#include "BsEvent.h"

namespace BansheeEngine
{
	class GUIDropButton : public GUIButtonBase
	{
	public:
		static const String& getGUITypeName();

		static GUIDropButton* create(UINT32 dragType, const String& styleName = StringUtil::BLANK);
		static GUIDropButton* create(UINT32 dragType, const GUIOptions& layoutOptions, 
			const String& styleName = StringUtil::BLANK);

		Event<void(void*)> onDataDropped;
	protected:
		virtual ~GUIDropButton();

	protected:
		GUIDropButton(UINT32 dragType, const String& styleName, const GUILayoutOptions& layoutOptions);

		virtual bool mouseEvent(const GUIMouseEvent& ev);

		UINT32 mDragType;
	};
}