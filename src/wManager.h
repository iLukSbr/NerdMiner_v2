#ifndef _WMANAGER_H
#define _WMANAGER_H

#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"

void init_WifiManager();
void wifiManagerProcess();
void reset_configuration();

#endif // _WMANAGER_H
