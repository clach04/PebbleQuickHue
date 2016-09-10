/*******************************************************************************
* Header file for the main entry point.
*
* Copyright (c) 2015 carlosperate https://github.com/carlosperate/
* Licensed under The MIT License (MIT), a copy can be found in the LICENSE file.
*
* The main.c file creates and controls all the GUI elements and Pebble hardware
* handlers.
*******************************************************************************/
#ifndef MAIN_H_
#define MAIN_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include <pebble.h>
#include "hue_control.h"

/*
** Avoid:
**  [INFO] essage_outbox.c:49: app_message_open() called with app_message_outbox_size_maximum().
**  [INFO] essage_outbox.c:52: This consumes 8200 bytes of heap memory, potentially more in the future!
**  [INFO] message_inbox.c:13: app_message_open() called with app_message_inbox_size_maximum().
**  [INFO] message_inbox.c:16: This consumes 8200 bytes of heap memory, potentially more in the future!    
*/
#define MAX_MESSAGE_SIZES
#define MAX_MESSAGE_SIZE_IN 2000 // probably waaaaay bigger than needed
#define MAX_MESSAGE_SIZE_OUT 2000 // probably waaaaay bigger than needed, why store config on watch and not hone LocalStorage? Perhaps an old pebblejs limitation?


/*******************************************************************************
* Public function definitions
*******************************************************************************/
void gui_light_state(light_t on_state);
void gui_brightness_level(int8_t level);

#endif  // MAIN_H_
