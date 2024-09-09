// Library to simplify HTTP fetching on Arduino
// (c) Copyright Arduino. 2016
// Released under Apache License, version 2.0

#ifndef ArduinoHttpClient_h
#define ArduinoHttpClient_h

#if defined(ESP_IDF_VERSION)
#if ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(5, 0, 0)
#define HAS_ESP_IDF_5
#endif
#endif

#include "HttpClient.h"
#include "WebSocketClient.h"
#include "URLEncoder.h"

#endif
