#pragma once
#include "DlgSetting.h"
#include "DlgTerrainEditor.h"
#include "DlgToolObject.h"

class CDlgToolbar : public CDlgBaseEditor
{
public:
	CDlgToolbar();
	~CDlgToolbar();
public:
	virtual void OnControlRegister();
	virtual bool OnInitDialog();

	void OnBtnSetting();
	void OnBtnTerrain();
	void OnBtnObject();

	void reset();
protected:
	virtual CUIWorldEditorDisplay& getDisplay();
private:
	void closeAllChildDialog();
	CDlgSetting			m_dlgSetting;
	CDlgTerrainEditor	m_DlgTerrainEditor;
	CDlgToolObject		m_DlgToolObject;
};