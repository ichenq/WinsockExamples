﻿
//
//  Use /FI to force include this file
//

#pragma once


#ifndef _WIN32_WINNT
#   define _WIN32_WINNT     0x0502      // Windows 2003 default
#endif


#ifndef WIN32_LEAN_AND_MEAN
#   define WIN32_LEAN_AND_MEAN
#endif

#if _MSC_VER < 1400
#error "Your complier is too old!"
#endif


// CRT
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <tchar.h>
#include <process.h>

// SDK
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <MSWSock.h>
#include <Windows.h>

// STL
#include <string>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <functional>
#include <iterator>


#include "utility.h"