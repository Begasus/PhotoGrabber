/*
****************************************************************
* Copyright (c) 2004-2010,	Jan-Rixt Van Hoye				   *
* All rights reserved.										   *
* Distributed under the terms of the MIT License.              *
****************************************************************
*/
//
// File definition
#ifndef CONFIGWINDOW_H
#define CONFIGWINDOW_H
//
//		Includes
#include <stdio.h>
#include <Application.h>
#include <Window.h>
#include <View.h>
#include <Bitmap.h>
#include <Box.h>
#include <PopUpMenu.h>
#include <MenuItem.h>
#include <MenuField.h>
#include <interface/TextView.h>
#include <interface/StringView.h>
#include <CheckBox.h>
#include <RadioButton.h>
#include <Button.h>
#include <map>
#include <string>
#include <AppFileInfo.h>
//
//		Local includes
#include "intf_global.h"
#include "core_global.h"
#include "settings.h"
#include "MainWindow.h"

using namespace std;
//
//	Config window Class
class BeCam_ConfigWindow : public BWindow {
public:
					BeCam_ConfigWindow(float xPos,float yPos,class BeCam_MainWindow *parent);
	virtual bool	QuitRequested();
	virtual void	MessageReceived(BMessage* message);

private:
	//	Configuration section
	BPopUpMenu					*cameraMenu;
	BMenuField					*cameraPopup;
	BStringView					*pluginName;
	BStringView					*pluginSource;
	BStringView					*pluginVersion;
	BButton						*pluginConfig;
	// Debugging section
	BCheckBox					*checkFile;
	//	Screen section
	void						FillPluginMenu(BMenu* menu);
	void						GetPluginDetails(const char *cameraname = NULL);
	void						OpenPluginConfig();
	bool						IsPluginConfigPresent();
	multimap<const char*, string>	
								*pluginSupportedCams;
	class BeCam_MainWindow		*parent;
	version_info				versioninfo;
	PG_Settings					*pgsettings;
};

#define	CONF_OFFSET				1055
#define CONF_BUT				CONF_OFFSET + 1
#define CONF_MITM				CONF_OFFSET + 2

// Size
#define CONFIG_WINDOW			4
#define WINDOW_HEIGHT_CONFIG	300
#define	WINDOW_WIDTH_CONFIG		350

#endif


