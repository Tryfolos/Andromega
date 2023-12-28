//Resetting presses and releases each frame.
//Alphabet.
press_a = 0;
press_b = 0;
press_c = 0;
press_d = 0;
press_e = 0;
press_f = 0;
press_g = 0;
press_h = 0;
press_i = 0;
press_j = 0;
press_k = 0;
press_l = 0;
press_m = 0;
press_n = 0;
press_o = 0;
press_p = 0;
press_q = 0;
press_r = 0;
press_s = 0;
press_t_ = 0;
press_u = 0;
press_v = 0;
press_w = 0;
press_x = 0;
press_y = 0;
press_z = 0;

//Numbers.
press_1 = 0;
press_2 = 0;
press_3 = 0;
press_4 = 0;
press_5 = 0;
press_6 = 0;
press_7 = 0;
press_8 = 0;
press_9 = 0;
press_0 = 0;

//Function keys.
press_f1 = 0;
press_f2 = 0;
press_f3 = 0;
press_f4 = 0;
press_f5 = 0;
press_f6 = 0;
press_f7 = 0;
press_f8 = 0;
press_f9 = 0;
press_f10 = 0;
press_f11 = 0;
press_f12 = 0;

//Arrow keys.
press_up = 0;
press_down = 0;
press_left = 0;
press_right = 0;

//Special.
press_anykey = 0;
press_escape = 0;
press_tab = 0;
press_capslock = 0;
press_lshift = 0;
press_lcontrol = 0;
press_alt = 0;
press_space = 0;
press_rcontrol = 0;
press_rshift = 0;
press_altgr = 0;
press_enter = 0;
press_delete = 0;
press_home = 0;
press_pageup = 0;
press_pagedown = 0;
press_backspace = 0;
press_minus = 0;
press_equals = 0;
press_slash = 0;
press_comma = 0;
press_semicolon = 0;
press_period = 0;
press_tilde = 0;

//Numpad.
press_num_1 = 0;
press_num_2 = 0;
press_num_3 = 0;
press_num_4 = 0;
press_num_5 = 0;
press_num_6 = 0;
press_num_7 = 0;
press_num_8 = 0;
press_num_9 = 0;
press_num_0 = 0;
press_num_slash = 0;
press_num_asterisk = 0;
press_num_minus = 0;
press_num_plus = 0;
press_num_delete = 0;
press_num_enter = 0;

//Alphabet.
release_a = 0;
release_b = 0;
release_c = 0;
release_d = 0;
release_e = 0;
release_f = 0;
release_g = 0;
release_h = 0;
release_i = 0;
release_j = 0;
release_k = 0;
release_l = 0;
release_m = 0;
release_n = 0;
release_o = 0;
release_p = 0;
release_q = 0;
release_r = 0;
release_s = 0;
release_t_ = 0;
release_u = 0;
release_v = 0;
release_w = 0;
release_x = 0;
release_y = 0;
release_z = 0;

//Numbers.
release_1 = 0;
release_2 = 0;
release_3 = 0;
release_4 = 0;
release_5 = 0;
release_6 = 0;
release_7 = 0;
release_8 = 0;
release_9 = 0;
release_0 = 0;

//Function keys.
release_f1 = 0;
release_f2 = 0;
release_f3 = 0;
release_f4 = 0;
release_f5 = 0;
release_f6 = 0;
release_f7 = 0;
release_f8 = 0;
release_f9 = 0;
release_f10 = 0;
release_f11 = 0;
release_f12 = 0;

//Arrow keys.
release_up = 0;
release_down = 0;
release_left = 0;
release_right = 0;

//Special.
release_anykey = 0;
release_escape = 0;
release_tab = 0;
release_capslock = 0;
release_lshift = 0;
release_lcontrol = 0;
release_alt = 0;
release_space = 0;
release_rcontrol = 0;
release_rshift = 0;
release_altgr = 0;
release_enter = 0;
release_delete = 0;
release_home = 0;
release_pageup = 0;
release_pagedown = 0;
release_backspace = 0;
release_minus = 0;
release_equals = 0;
release_slash = 0;
release_comma = 0;
release_semicolon = 0;
release_period = 0;
release_tilde = 0;

//Numpad.
release_num_1 = 0;
release_num_2 = 0;
release_num_3 = 0;
release_num_4 = 0;
release_num_5 = 0;
release_num_6 = 0;
release_num_7 = 0;
release_num_8 = 0;
release_num_9 = 0;
release_num_0 = 0;
release_num_slash = 0;
release_num_asterisk = 0;
release_num_minus = 0;
release_num_plus = 0;
release_num_delete = 0;
release_num_enter = 0;

//Handling presses.
if (event.type == ALLEGRO_EVENT_KEY_DOWN) {
press_anykey = 1;
hold_anykey = 1;

//Alphabet.
if (event.keyboard.keycode == ALLEGRO_KEY_A) {
press_a = 1;
hold_a = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_B) {
press_b = 1;
hold_b = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_C) {
press_c = 1;
hold_c = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_D) {
press_d = 1;
hold_d = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_E) {
press_e = 1;
hold_e = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F) {
press_f = 1;
hold_f = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_G) {
press_g = 1;
hold_g = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_H) {
press_h = 1;
hold_h = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_I) {
press_i = 1;
hold_i = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_J) {
press_j = 1;
hold_j = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_K) {
press_k = 1;
hold_k = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_L) {
press_l = 1;
hold_l = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_M) {
press_m = 1;
hold_m = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_N) {
press_n = 1;
hold_n = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_O) {
press_o = 1;
hold_o = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_P) {
press_p = 1;
hold_p = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_Q) {
press_q = 1;
hold_q = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_R) {
press_r = 1;
hold_r = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_S) {
press_s = 1;
hold_s = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_T) {
press_t_ = 1;
hold_t_ = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_U) {
press_u = 1;
hold_u = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_V) {
press_v = 1;
hold_v = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_W) {
press_w = 1;
hold_w = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_X) {
press_x = 1;
hold_x = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_Y) {
press_y = 1;
hold_y = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_Z) {
press_z = 1;
hold_z = 1;
}

//Numbers.
if (event.keyboard.keycode == ALLEGRO_KEY_1) {
press_1 = 1;
hold_1 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_2) {
press_2 = 1;
hold_2 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_3) {
press_3 = 1;
hold_3 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_4) {
press_4 = 1;
hold_4 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_5) {
press_5 = 1;
hold_5 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_6) {
press_6 = 1;
hold_6 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_7) {
press_7 = 1;
hold_7 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_8) {
press_8 = 1;
hold_8 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_9) {
press_9 = 1;
hold_9 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_0) {
press_0 = 1;
hold_0 = 1;
}

//Function keys.
if (event.keyboard.keycode == ALLEGRO_KEY_F1) {
press_f1 = 1;
hold_f1 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F2) {
press_f2 = 1;
hold_f2 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F3) {
press_f3 = 1;
hold_f3 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F4) {
press_f4 = 1;
hold_f4 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F5) {
press_f5 = 1;
hold_f5 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F6) {
press_f6 = 1;
hold_f6 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F7) {
press_f7 = 1;
hold_f7 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F8) {
press_f8 = 1;
hold_f8 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F9) {
press_f9 = 1;
hold_f9 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F10) {
press_f10 = 1;
hold_f10 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F11) {
press_f11 = 1;
hold_f11 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F12) {
press_f12 = 1;
hold_f12 = 1;
}

//Arrow keys.
if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
press_up = 1;
hold_up = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
press_down = 1;
hold_down = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_LEFT) {
press_left = 1;
hold_left = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_RIGHT) {
press_right = 1;
hold_right = 1;
}

//Special.
if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
press_escape = 1;
hold_escape = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_TAB) {
press_tab = 1;
hold_tab = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_CAPSLOCK) {
press_capslock = 1;
hold_capslock = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_LSHIFT) {
press_lshift = 1;
hold_lshift = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_LCTRL) {
press_lcontrol = 1;
hold_lcontrol = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_ALT) {
press_alt = 1;
hold_alt = 1; 
}

if (event.keyboard.keycode == ALLEGRO_KEY_SPACE) {
press_space = 1;
hold_space = 1;
}


if (event.keyboard.keycode == ALLEGRO_KEY_RCTRL) {
press_rcontrol = 1;
hold_rcontrol = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_RSHIFT) {
press_rshift = 1;
hold_rshift = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_ALTGR) {
press_altgr = 1;
hold_altgr = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
press_enter = 1;
hold_enter = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_DELETE) {
press_delete = 1;
hold_delete = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_HOME) {
press_home = 1;
hold_home = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PGUP) {
press_pageup = 1;
hold_pageup = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PGDN) {
press_pagedown = 1;
hold_pagedown = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
press_backspace = 1;
hold_backspace = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_MINUS) {
press_minus = 1;
hold_minus = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_EQUALS) {
press_equals = 1;
hold_equals = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_SLASH) {
press_slash = 1;
hold_slash = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_COMMA) {
press_comma = 1;
hold_comma = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_SEMICOLON) {
press_semicolon = 1;
hold_semicolon = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_FULLSTOP) {
press_period = 1;
hold_period = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_TILDE) {
press_tilde = 1;
hold_tilde = 1;
}

//Numpad.
if (event.keyboard.keycode == ALLEGRO_KEY_PAD_1) {
press_num_1 = 1;
hold_num_1 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_2) {
press_num_2 = 1;
hold_num_2 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_3) {
press_num_3 = 1;
hold_num_3 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_4) {
press_num_4 = 1;
hold_num_4 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_5) {
press_num_5 = 1;
hold_num_5 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_6) {
press_num_6 = 1;
hold_num_6 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_7) {
press_num_7 = 1;
hold_num_7 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_8) {
press_num_8 = 1;
hold_num_8 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_9) {
press_num_9 = 1;
hold_num_9 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_0) {
press_num_0 = 1;
hold_num_0 = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_SLASH) {
press_num_slash = 1;
hold_num_slash = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_ASTERISK) {
press_num_asterisk = 1;
hold_num_asterisk = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_MINUS) {
press_num_minus = 1;
hold_num_minus = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_PLUS) {
press_num_plus = 1;
hold_num_plus = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_DELETE) {
press_num_delete = 1;
hold_num_delete = 1;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_ENTER) {
press_num_enter = 1;
hold_num_enter = 1;
}


event.type = 69;
}



//Handling releases.
if (event.type == ALLEGRO_EVENT_KEY_UP) {
release_anykey = 1;
hold_anykey = 0;

//Alphabet.
if (event.keyboard.keycode == ALLEGRO_KEY_A) {
release_a = 1;
hold_a = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_B) {
release_b = 1;
hold_b = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_C) {
release_c = 1;
hold_c = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_D) {
release_d = 1;
hold_d = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_E) {
release_e = 1;
hold_e = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F) {
release_f = 1;
hold_f = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_G) {
release_g = 1;
hold_g = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_H) {
release_h = 1;
hold_h = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_I) {
release_i = 1;
hold_i = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_J) {
release_j = 1;
hold_j = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_K) {
release_k = 1;
hold_k = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_L) {
release_l = 1;
hold_l = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_M) {
release_m = 1;
hold_m = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_N) {
release_n = 1;
hold_n = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_O) {
release_o = 1;
hold_o = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_P) {
release_p = 1;
hold_p = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_Q) {
release_q = 1;
hold_q = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_R) {
release_r = 1;
hold_r = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_S) {
release_s = 1;
hold_s = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_T) {
release_t_ = 1;
hold_t_ = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_U) {
release_u = 1;
hold_u = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_V) {
release_v = 1;
hold_v = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_W) {
release_w = 1;
hold_w = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_X) {
release_x = 1;
hold_x = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_Y) {
release_y = 1;
hold_y = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_Z) {
release_z = 1;
hold_z = 0;
}

//Numbers.
if (event.keyboard.keycode == ALLEGRO_KEY_1) {
release_1 = 1;
hold_1 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_2) {
release_2 = 1;
hold_2 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_3) {
release_3 = 1;
hold_3 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_4) {
release_4 = 1;
hold_4 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_5) {
release_5 = 1;
hold_5 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_6) {
release_6 = 1;
hold_6 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_7) {
release_7 = 1;
hold_7 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_8) {
release_8 = 1;
hold_8 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_9) {
release_9 = 1;
hold_9 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_0) {
release_0 = 1;
hold_0 = 0;
}

//Function keys.
if (event.keyboard.keycode == ALLEGRO_KEY_F1) {
release_f1 = 1;
hold_f1 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F2) {
release_f2 = 1;
hold_f2 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F3) {
release_f3 = 1;
hold_f3 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F4) {
release_f4 = 1;
hold_f4 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F5) {
release_f5 = 1;
hold_f5 = 0;
}
 
if (event.keyboard.keycode == ALLEGRO_KEY_F6) {
release_f6 = 1;
hold_f6 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F7) {
release_f7 = 1;
hold_f7 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F8) {
release_f8 = 1;
hold_f8 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F9) {
release_f9 = 1;
hold_f9 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F10) {
release_f10 = 1;
hold_f10 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F11) {
release_f11 = 1;
hold_f11 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_F12) {
release_f12 = 1;
hold_f12 = 0;
}

//Arrow keys.
if (event.keyboard.keycode == ALLEGRO_KEY_UP) {
release_up = 1;
hold_up = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_DOWN) {
release_down = 1;
hold_down = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_LEFT) {
release_left = 1;
hold_left = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_RIGHT) {
release_right = 1;
hold_right = 0;
}

//Special.
if (event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
release_escape = 1;
hold_escape = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_TAB) {
release_tab = 1;
hold_tab = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_CAPSLOCK) {
release_capslock = 1;
hold_capslock = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_LSHIFT) {
release_lshift = 1;
hold_lshift = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_LCTRL) {
release_lcontrol = 1;
hold_lcontrol = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_ALT) {
release_alt = 1;
hold_alt = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_SPACE) {
release_space = 1;
hold_space = 0;
}


if (event.keyboard.keycode == ALLEGRO_KEY_RCTRL) {
release_rcontrol = 1;
hold_rcontrol = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_RSHIFT) {
release_rshift = 1;
hold_rshift = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_ALTGR) {
release_altgr = 1;
hold_altgr = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
release_enter = 1;
hold_enter = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_DELETE) {
release_delete = 1;
hold_delete = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_HOME) {
release_home = 1;
hold_home = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PGUP) {
release_pageup = 1;
hold_pageup = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PGDN) {
release_pagedown = 1;
hold_pagedown = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
release_backspace = 1;
hold_backspace = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_MINUS) {
release_minus = 1;
hold_minus = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_EQUALS) {
release_equals = 1;
hold_equals = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_SLASH) {
release_slash = 1;
hold_slash = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_COMMA) {
release_comma = 1;
hold_comma = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_SEMICOLON) {
release_semicolon = 1;
hold_semicolon = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_FULLSTOP) {
release_period = 1;
hold_period = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_TILDE) {
release_tilde = 1;
hold_tilde = 0;
}


//Numpad.
if (event.keyboard.keycode == ALLEGRO_KEY_PAD_1) {
release_num_1 = 1;
hold_num_1 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_2) {
release_num_2 = 1;
hold_num_2 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_3) {
release_num_3 = 1;
hold_num_3 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_4) {
release_num_4 = 1;
hold_num_4 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_5) {
release_num_5 = 1;
hold_num_5 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_6) {
release_num_6 = 1;
hold_num_6 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_7) {
release_num_7 = 1;
hold_num_7 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_8) {
release_num_8 = 1;
hold_num_8 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_9) {
release_num_9 = 1;
hold_num_9 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_0) {
release_num_0 = 1;
hold_num_0 = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_SLASH) {
release_num_slash = 1;
hold_num_slash = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_ASTERISK) {
release_num_asterisk = 1;
hold_num_asterisk = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_MINUS) {
release_num_minus = 1;
hold_num_minus = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_PLUS) {
release_num_plus = 1;
hold_num_plus = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_DELETE) {
release_num_delete = 1;
hold_num_delete = 0;
}

if (event.keyboard.keycode == ALLEGRO_KEY_PAD_ENTER) {
release_num_enter = 1;
hold_num_enter = 0;
}

event.type = 69;
}