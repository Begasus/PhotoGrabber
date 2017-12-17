/*
****************************************************************
* Copyright (c) 2004-2010,	Jan-Rixt Van Hoye				   *
* All rights reserved.										   *
* Distributed under the terms of the MIT License.              *
****************************************************************
*/
//
// File defenition
#ifndef GLOBAL_H
#define GLOBAL_H

//includes
#include <File.h>
#include <NodeInfo.h>

// defenitions
#define APP_SIG                     "application/x-vnd.Jixt.PhotoGrabber"
#define	THUMBHEIGHT                 120
#define THUMBWIDTH                  160
//#define DEBUG                     1
// Global Messages
#define UPDATE_STAT                 'UPST'
#define ABOUT                       'ABOU'
#define QUIT                        'QUIT'
#define CONFIG                      'CONF'
#define CAM_CONNECTED               'CCON'
#define CAM_DISCONNECTED            'DCON'
#define	CAM_CONNECT                 'CONN'
#define	CAM_CONNECT_OK              'CONO'
#define CAM_CONNECT_FAIL            'CNFA'
#define	CAM_DISCON                  'DISC'
#define CON_MENU                    'CONM'
#define DISCON_MENU                 'DCNM'
#define ADD_ITEM                    'ADDI'
#define REM_ITEM                    'REMI'
#define REM_ITEM_OK                 'RITO'
#define DOWN_ITEM                   'DOWI'
#define DOWN_ITEM_OK                'DITO'
#define GET_ITEMS                   'GITM'
#define GET_ITEMS_START             'GITS'
#define GET_ITEMS_DONE              'GITD'
#define REM_ITEMS                   'RITM'
#define ADD_PTPCAM                  'ADDP'
#define REM_PTPCAM                  'REMP'
#define ADD_MSCAM                   'ADDM'
#define REM_MSCAM                   'REMM'
#define	SAVE_CONFIGURATION          'SCON'
#define RELOAD_CONFIGURATION        'RCON'
#define GET_CONFIGURATION           'GCON'
#define	CANCEL                      'CANC'
#define CHECK_TERMINAL              'TCHE'
#define CHECK_FILE                  'CFIL'
#define CHECK_PTP                   'CPTP'
#define CHECK_BDCP                  'CBDC'
#define CHECK_MOVIE                 'CMOV'
#define CHECK_FUNCTION              'CFUN'
#define SELECT_PATH                 'SPAT'
#define	DRAG_PICTURE                'DPIC'
#define GET_DEVTYPE                 'DTPY'
#define GET_CAMSTRING               'GCST'
#define GET_PLUG_DETAIL             'GPDT'
#define OPEN_PLUG_WINDOW            'OPWI'
#define SHOW_MAINWINDOW             'SMWI'
#define PLUG_CONFIG_PRESENT         'PCRE'
#define GET_ITEM_COUNT              'GITC'
#define GET_DEVICE_TYPE             'GDET'
#define OPEN_DEVICE                 'OPND'
#define CLOSE_DEVICE                'CLSD'
#define CAM_SORT_TITLE              'CSTI'
#define CAM_SORT_DATE               'CSDA'
#define CAM_TAKE_SHOT               'CTSH'
#define CAM_SHOT_TAKEN              'CSHT'
//
//		Item status
#define	ITEM_NOT_DOWNLOADED         0
#define	ITEM_DOWNLOADED             1						

#define connected                   2
#define disconnected                1

// Type of camera
#define	TYPE_PAR                    0
#define TYPE_USB                    1

#endif
