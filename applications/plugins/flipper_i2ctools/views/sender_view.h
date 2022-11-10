#include <furi.h>
#include <furi_hal.h>
#include <gui/gui.h>
#include <i2cTools_icons.h>
#include "../i2csender.h"

#define SEND_MENU_TEXT "Send"
#define SEND_MENU_X 75
#define SEND_MENU_Y 34

void draw_sender_view(Canvas* canvas, i2cSender* i2c_sender);