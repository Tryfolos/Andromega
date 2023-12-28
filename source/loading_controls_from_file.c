//This runs once on startup and that's it. 
//This code will open the controls file and read the keymappings as described in the file.

//Checking if controls file exists. If it doesn't, create it.
if (access("user_data/controls.txt", F_OK) == -1) {
FILE * file_controls = fopen("user_data/controls.txt", "w");
fputs("shoot: space\n", file_controls); //Writing default data.
fputs("laser: _b\n", file_controls); //Writing default data.
fputs("select: enter\n", file_controls); //Writing default data.
fputs("pause: escape\n", file_controls); //Writing default data.
fputs("moveup: _up\n", file_controls); //Writing default data.
fputs("movedown: _down\n", file_controls); //Writing default data.
fputs("moveleft: _left\n", file_controls); //Writing default data.
fputs("moveright: _right", file_controls); //Writing default data.
fclose(file_controls);
}


//Open controls file in read mode.
FILE * file_controls = fopen("user_data/controls.txt", "r");

//Reading all the text and putting it in arrays.
fgets(controls_file_line_1, 99, file_controls);
fgets(controls_file_line_2, 99, file_controls);
fgets(controls_file_line_3, 99, file_controls);
fgets(controls_file_line_4, 99, file_controls);
fgets(controls_file_line_5, 99, file_controls);
fgets(controls_file_line_6, 99, file_controls);
fgets(controls_file_line_7, 99, file_controls);
fgets(controls_file_line_8, 99, file_controls);




////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Reading arrays as read from file to setting input mappings.
//Alphabet.
if (strstr(controls_file_line_1, "_a") != NULL) {
strcpy(input_mapping_shoot, "_a");
}

if (strstr(controls_file_line_1, "_b") != NULL) {
strcpy(input_mapping_shoot, "_b");
}

if (strstr(controls_file_line_1, "_c") != NULL) {
strcpy(input_mapping_shoot, "_c");
}

if (strstr(controls_file_line_1, "_d") != NULL) {
strcpy(input_mapping_shoot, "_d");
}

if (strstr(controls_file_line_1, "_e") != NULL) {
strcpy(input_mapping_shoot, "_e");
}

if (strstr(controls_file_line_1, "_f") != NULL) {
strcpy(input_mapping_shoot, "_f");
}

if (strstr(controls_file_line_1, "_g") != NULL) {
strcpy(input_mapping_shoot, "_g");
}

if (strstr(controls_file_line_1, "_h") != NULL) {
strcpy(input_mapping_shoot, "_h");
}

if (strstr(controls_file_line_1, "_i") != NULL) {
strcpy(input_mapping_shoot, "_i");
}

if (strstr(controls_file_line_1, "_j") != NULL) {
strcpy(input_mapping_shoot, "_j");
}

if (strstr(controls_file_line_1, "_k") != NULL) {
strcpy(input_mapping_shoot, "_k");
}

if (strstr(controls_file_line_1, "_l") != NULL) {
strcpy(input_mapping_shoot, "_l");
}

if (strstr(controls_file_line_1, "_m") != NULL) {
strcpy(input_mapping_shoot, "_m");
}

if (strstr(controls_file_line_1, "_n") != NULL) {
strcpy(input_mapping_shoot, "_n");
}

if (strstr(controls_file_line_1, "_o") != NULL) {
strcpy(input_mapping_shoot, "_o");
}

if (strstr(controls_file_line_1, "_p") != NULL) {
strcpy(input_mapping_shoot, "_p");
}

if (strstr(controls_file_line_1, "_q") != NULL) {
strcpy(input_mapping_shoot, "_q");
}

if (strstr(controls_file_line_1, "_r") != NULL) {
strcpy(input_mapping_shoot, "_r");
}

if (strstr(controls_file_line_1, "_s") != NULL) {
strcpy(input_mapping_shoot, "_s");
}

if (strstr(controls_file_line_1, "_t") != NULL) {
strcpy(input_mapping_shoot, "_t");
}

if (strstr(controls_file_line_1, "_u") != NULL) {
strcpy(input_mapping_shoot, "_u");
}

if (strstr(controls_file_line_1, "_v") != NULL) {
strcpy(input_mapping_shoot, "_v");
}

if (strstr(controls_file_line_1, "_w") != NULL) {
strcpy(input_mapping_shoot, "_w");
}

if (strstr(controls_file_line_1, "_x") != NULL) {
strcpy(input_mapping_shoot, "_x");
}

if (strstr(controls_file_line_1, "_y") != NULL) {
strcpy(input_mapping_shoot, "_y");
}

if (strstr(controls_file_line_1, "_z") != NULL) {
strcpy(input_mapping_shoot, "_z");
}

//Numbers.
if (strstr(controls_file_line_1, "1") != NULL) {
strcpy(input_mapping_shoot, "1");
}

if (strstr(controls_file_line_1, "2") != NULL) {
strcpy(input_mapping_shoot, "2");
}

if (strstr(controls_file_line_1, "3") != NULL) {
strcpy(input_mapping_shoot, "3");
}

if (strstr(controls_file_line_1, "4") != NULL) {
strcpy(input_mapping_shoot, "4");
}

if (strstr(controls_file_line_1, "5") != NULL) {
strcpy(input_mapping_shoot, "5");
}

if (strstr(controls_file_line_1, "6") != NULL) {
strcpy(input_mapping_shoot, "6");
}

if (strstr(controls_file_line_1, "7") != NULL) {
strcpy(input_mapping_shoot, "7");
}

if (strstr(controls_file_line_1, "8") != NULL) {
strcpy(input_mapping_shoot, "8");
}

if (strstr(controls_file_line_1, "9") != NULL) {
strcpy(input_mapping_shoot, "9");
}

if (strstr(controls_file_line_1, "0") != NULL) {
strcpy(input_mapping_shoot, "0");
}

//Function keys.
if (strstr(controls_file_line_1, "f1") != NULL) {
strcpy(input_mapping_shoot, "f1");
}

if (strstr(controls_file_line_1, "f2") != NULL) {
strcpy(input_mapping_shoot, "f2");
}

if (strstr(controls_file_line_1, "f3") != NULL) {
strcpy(input_mapping_shoot, "f3");
}

if (strstr(controls_file_line_1, "f4") != NULL) {
strcpy(input_mapping_shoot, "f4");
}

if (strstr(controls_file_line_1, "f5") != NULL) {
strcpy(input_mapping_shoot, "f5");
}

if (strstr(controls_file_line_1, "f6") != NULL) {
strcpy(input_mapping_shoot, "f6");
}

if (strstr(controls_file_line_1, "f7") != NULL) {
strcpy(input_mapping_shoot, "f7");
}

if (strstr(controls_file_line_1, "f8") != NULL) {
strcpy(input_mapping_shoot, "f8");
}

if (strstr(controls_file_line_1, "f9") != NULL) {
strcpy(input_mapping_shoot, "f9");
}

if (strstr(controls_file_line_1, "f10") != NULL) {
strcpy(input_mapping_shoot, "f10");
}

if (strstr(controls_file_line_1, "f11") != NULL) {
strcpy(input_mapping_shoot, "f11");
}

if (strstr(controls_file_line_1, "f12") != NULL) {
strcpy(input_mapping_shoot, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_1, "_up") != NULL) {
strcpy(input_mapping_shoot, "_up");
}

if (strstr(controls_file_line_1, "_down") != NULL) {
strcpy(input_mapping_shoot, "_down");
}

if (strstr(controls_file_line_1, "_left") != NULL) {
strcpy(input_mapping_shoot, "_left");
}

if (strstr(controls_file_line_1, "_right") != NULL) {
strcpy(input_mapping_shoot, "_right");
}

//Special keys.
if (strstr(controls_file_line_1, "escape") != NULL) {
strcpy(input_mapping_shoot, "escape");
}

if (strstr(controls_file_line_1, "tab") != NULL) {
strcpy(input_mapping_shoot, "tab");
}

if (strstr(controls_file_line_1, "capslock") != NULL) {
strcpy(input_mapping_shoot, "capslock");
}

if (strstr(controls_file_line_1, "lshift") != NULL) {
strcpy(input_mapping_shoot, "lshift");
}

if (strstr(controls_file_line_1, "lcontrol") != NULL) {
strcpy(input_mapping_shoot, "lcontrol");
}

if (strstr(controls_file_line_1, "alt") != NULL) {
strcpy(input_mapping_shoot, "alt");
}

if (strstr(controls_file_line_1, "space") != NULL) {
strcpy(input_mapping_shoot, "space");
}

if (strstr(controls_file_line_1, "rcontrol") != NULL) {
strcpy(input_mapping_shoot, "rcontrol");
}

if (strstr(controls_file_line_1, "rshift") != NULL) {
strcpy(input_mapping_shoot, "rshift");
}

if (strstr(controls_file_line_1, "altgr") != NULL) {
strcpy(input_mapping_shoot, "altgr");
}

if (strstr(controls_file_line_1, "enter") != NULL) {
strcpy(input_mapping_shoot, "enter");
}

if (strstr(controls_file_line_1, "delete") != NULL) {
strcpy(input_mapping_shoot, "delete");
}

if (strstr(controls_file_line_1, "home") != NULL) {
strcpy(input_mapping_shoot, "home");
}

if (strstr(controls_file_line_1, "pageup") != NULL) {
strcpy(input_mapping_shoot, "pageup");
}

if (strstr(controls_file_line_1, "pagedown") != NULL) {
strcpy(input_mapping_shoot, "pagedown");
}

if (strstr(controls_file_line_1, "backspace") != NULL) {
strcpy(input_mapping_shoot, "backspace");
}

if (strstr(controls_file_line_1, "minus") != NULL) {
strcpy(input_mapping_shoot, "minus");
}

if (strstr(controls_file_line_1, "equals") != NULL) {
strcpy(input_mapping_shoot, "equals");
}

if (strstr(controls_file_line_1, "slash") != NULL) {
strcpy(input_mapping_shoot, "slash");
}

if (strstr(controls_file_line_1, "comma") != NULL) {
strcpy(input_mapping_shoot, "comma");
}

if (strstr(controls_file_line_1, "semicolon") != NULL) {
strcpy(input_mapping_shoot, "semicolon");
}

if (strstr(controls_file_line_1, "period") != NULL) {
strcpy(input_mapping_shoot, "period");
}

if (strstr(controls_file_line_1, "tilde") != NULL) {
strcpy(input_mapping_shoot, "tilde");
}

//Numpad.
if (strstr(controls_file_line_1, "num_1") != NULL) {
strcpy(input_mapping_shoot, "num_1");
}

if (strstr(controls_file_line_1, "num_2") != NULL) {
strcpy(input_mapping_shoot, "num_2");
}

if (strstr(controls_file_line_1, "num_3") != NULL) {
strcpy(input_mapping_shoot, "num_3");
}

if (strstr(controls_file_line_1, "num_4") != NULL) {
strcpy(input_mapping_shoot, "num_4");
}

if (strstr(controls_file_line_1, "num_5") != NULL) {
strcpy(input_mapping_shoot, "num_5");
}

if (strstr(controls_file_line_1, "num_6") != NULL) {
strcpy(input_mapping_shoot, "num_6");
}

if (strstr(controls_file_line_1, "num_7") != NULL) {
strcpy(input_mapping_shoot, "num_7");
}

if (strstr(controls_file_line_1, "num_8") != NULL) {
strcpy(input_mapping_shoot, "num_8");
}

if (strstr(controls_file_line_1, "num_9") != NULL) {
strcpy(input_mapping_shoot, "num_9");
}

if (strstr(controls_file_line_1, "num_0") != NULL) {
strcpy(input_mapping_shoot, "num_0");
}

if (strstr(controls_file_line_1, "num_slash") != NULL) {
strcpy(input_mapping_shoot, "num_slash");
}

if (strstr(controls_file_line_1, "num_asterisk") != NULL) {
strcpy(input_mapping_shoot, "num_asterisk");
}

if (strstr(controls_file_line_1, "num_minus") != NULL) {
strcpy(input_mapping_shoot, "num_minus");
}

if (strstr(controls_file_line_1, "num_plus") != NULL) {
strcpy(input_mapping_shoot, "num_plus");
}

if (strstr(controls_file_line_1, "num_delete") != NULL) {
strcpy(input_mapping_shoot, "num_delete");
}

if (strstr(controls_file_line_1, "num_enter") != NULL) {
strcpy(input_mapping_shoot, "num_enter");
}

////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_2, "_a") != NULL) {
strcpy(input_mapping_laser, "_a");
}

if (strstr(controls_file_line_2, "_b") != NULL) {
strcpy(input_mapping_laser, "_b");
}

if (strstr(controls_file_line_2, "_c") != NULL) {
strcpy(input_mapping_laser, "_c");
}

if (strstr(controls_file_line_2, "_d") != NULL) {
strcpy(input_mapping_laser, "_d");
}

if (strstr(controls_file_line_2, "_e") != NULL) {
strcpy(input_mapping_laser, "_e");
}

if (strstr(controls_file_line_2, "_f") != NULL) {
strcpy(input_mapping_laser, "_f");
}

if (strstr(controls_file_line_2, "_g") != NULL) {
strcpy(input_mapping_laser, "_g");
}

if (strstr(controls_file_line_2, "_h") != NULL) {
strcpy(input_mapping_laser, "_h");
}

if (strstr(controls_file_line_2, "_i") != NULL) {
strcpy(input_mapping_laser, "_i");
}

if (strstr(controls_file_line_2, "_j") != NULL) {
strcpy(input_mapping_laser, "_j");
}

if (strstr(controls_file_line_2, "_k") != NULL) {
strcpy(input_mapping_laser, "_k");
}

if (strstr(controls_file_line_2, "_l") != NULL) {
strcpy(input_mapping_laser, "_l");
}

if (strstr(controls_file_line_2, "_m") != NULL) {
strcpy(input_mapping_laser, "_m");
}

if (strstr(controls_file_line_2, "_n") != NULL) {
strcpy(input_mapping_laser, "_n");
}

if (strstr(controls_file_line_2, "_o") != NULL) {
strcpy(input_mapping_laser, "_o");
}

if (strstr(controls_file_line_2, "_p") != NULL) {
strcpy(input_mapping_laser, "_p");
}

if (strstr(controls_file_line_2, "_q") != NULL) {
strcpy(input_mapping_laser, "_q");
}

if (strstr(controls_file_line_2, "_r") != NULL) {
strcpy(input_mapping_laser, "_r");
}

if (strstr(controls_file_line_2, "_s") != NULL) {
strcpy(input_mapping_laser, "_s");
}

if (strstr(controls_file_line_2, "_t") != NULL) {
strcpy(input_mapping_laser, "_t");
}

if (strstr(controls_file_line_2, "_u") != NULL) {
strcpy(input_mapping_laser, "_u");
}

if (strstr(controls_file_line_2, "_v") != NULL) {
strcpy(input_mapping_laser, "_v");
}

if (strstr(controls_file_line_2, "_w") != NULL) {
strcpy(input_mapping_laser, "_w");
}

if (strstr(controls_file_line_2, "_x") != NULL) {
strcpy(input_mapping_laser, "_x");
}

if (strstr(controls_file_line_2, "_y") != NULL) {
strcpy(input_mapping_laser, "_y");
}

if (strstr(controls_file_line_2, "_z") != NULL) {
strcpy(input_mapping_laser, "_z");
}

//Numbers.
if (strstr(controls_file_line_2, "1") != NULL) {
strcpy(input_mapping_laser, "1");
}

if (strstr(controls_file_line_2, "2") != NULL) {
strcpy(input_mapping_laser, "2");
}

if (strstr(controls_file_line_2, "3") != NULL) {
strcpy(input_mapping_laser, "3");
}

if (strstr(controls_file_line_2, "4") != NULL) {
strcpy(input_mapping_laser, "4");
}

if (strstr(controls_file_line_2, "5") != NULL) {
strcpy(input_mapping_laser, "5");
}

if (strstr(controls_file_line_2, "6") != NULL) {
strcpy(input_mapping_laser, "6");
}

if (strstr(controls_file_line_2, "7") != NULL) {
strcpy(input_mapping_laser, "7");
}

if (strstr(controls_file_line_2, "8") != NULL) {
strcpy(input_mapping_laser, "8");
}

if (strstr(controls_file_line_2, "9") != NULL) {
strcpy(input_mapping_laser, "9");
}

if (strstr(controls_file_line_2, "0") != NULL) {
strcpy(input_mapping_laser, "0");
}

//Function keys.
if (strstr(controls_file_line_2, "f1") != NULL) {
strcpy(input_mapping_laser, "f1");
}

if (strstr(controls_file_line_2, "f2") != NULL) {
strcpy(input_mapping_laser, "f2");
}

if (strstr(controls_file_line_2, "f3") != NULL) {
strcpy(input_mapping_laser, "f3");
}

if (strstr(controls_file_line_2, "f4") != NULL) {
strcpy(input_mapping_laser, "f4");
}

if (strstr(controls_file_line_2, "f5") != NULL) {
strcpy(input_mapping_laser, "f5");
}

if (strstr(controls_file_line_2, "f6") != NULL) {
strcpy(input_mapping_laser, "f6");
}

if (strstr(controls_file_line_2, "f7") != NULL) {
strcpy(input_mapping_laser, "f7");
}

if (strstr(controls_file_line_2, "f8") != NULL) {
strcpy(input_mapping_laser, "f8");
}

if (strstr(controls_file_line_2, "f9") != NULL) {
strcpy(input_mapping_laser, "f9");
}

if (strstr(controls_file_line_2, "f10") != NULL) {
strcpy(input_mapping_laser, "f10");
}

if (strstr(controls_file_line_2, "f11") != NULL) {
strcpy(input_mapping_laser, "f11");
}

if (strstr(controls_file_line_2, "f12") != NULL) {
strcpy(input_mapping_laser, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_2, "_up") != NULL) {
strcpy(input_mapping_laser, "_up");
}

if (strstr(controls_file_line_2, "_down") != NULL) {
strcpy(input_mapping_laser, "_down");
}

if (strstr(controls_file_line_2, "_left") != NULL) {
strcpy(input_mapping_laser, "_left");
}

if (strstr(controls_file_line_2, "_right") != NULL) {
strcpy(input_mapping_laser, "_right");
}

//Special keys.
if (strstr(controls_file_line_2, "escape") != NULL) {
strcpy(input_mapping_laser, "escape");
}

if (strstr(controls_file_line_2, "tab") != NULL) {
strcpy(input_mapping_laser, "tab");
}

if (strstr(controls_file_line_2, "capslock") != NULL) {
strcpy(input_mapping_laser, "capslock");
}

if (strstr(controls_file_line_2, "lshift") != NULL) {
strcpy(input_mapping_laser, "lshift");
}

if (strstr(controls_file_line_2, "lcontrol") != NULL) {
strcpy(input_mapping_laser, "lcontrol");
}

if (strstr(controls_file_line_2, "alt") != NULL) {
strcpy(input_mapping_laser, "alt");
}

if (strstr(controls_file_line_2, "space") != NULL) {
strcpy(input_mapping_laser, "space");
}

if (strstr(controls_file_line_2, "rcontrol") != NULL) {
strcpy(input_mapping_laser, "rcontrol");
}

if (strstr(controls_file_line_2, "rshift") != NULL) {
strcpy(input_mapping_laser, "rshift");
}

if (strstr(controls_file_line_2, "altgr") != NULL) {
strcpy(input_mapping_laser, "altgr");
}

if (strstr(controls_file_line_2, "enter") != NULL) {
strcpy(input_mapping_laser, "enter");
}

if (strstr(controls_file_line_2, "delete") != NULL) {
strcpy(input_mapping_laser, "delete");
}

if (strstr(controls_file_line_2, "home") != NULL) {
strcpy(input_mapping_laser, "home");
}

if (strstr(controls_file_line_2, "pageup") != NULL) {
strcpy(input_mapping_laser, "pageup");
}

if (strstr(controls_file_line_2, "pagedown") != NULL) {
strcpy(input_mapping_laser, "pagedown");
}

if (strstr(controls_file_line_2, "backspace") != NULL) {
strcpy(input_mapping_laser, "backspace");
}

if (strstr(controls_file_line_2, "minus") != NULL) {
strcpy(input_mapping_laser, "minus");
}

if (strstr(controls_file_line_2, "equals") != NULL) {
strcpy(input_mapping_laser, "equals");
}

if (strstr(controls_file_line_2, "slash") != NULL) {
strcpy(input_mapping_laser, "slash");
}

if (strstr(controls_file_line_2, "comma") != NULL) {
strcpy(input_mapping_laser, "comma");
}

if (strstr(controls_file_line_2, "semicolon") != NULL) {
strcpy(input_mapping_laser, "semicolon");
}

if (strstr(controls_file_line_2, "period") != NULL) {
strcpy(input_mapping_laser, "period");
}

if (strstr(controls_file_line_2, "tilde") != NULL) {
strcpy(input_mapping_laser, "tilde");
}

//Numpad.
if (strstr(controls_file_line_2, "num_1") != NULL) {
strcpy(input_mapping_laser, "num_1");
}

if (strstr(controls_file_line_2, "num_2") != NULL) {
strcpy(input_mapping_laser, "num_2");
}

if (strstr(controls_file_line_2, "num_3") != NULL) {
strcpy(input_mapping_laser, "num_3");
}

if (strstr(controls_file_line_2, "num_4") != NULL) {
strcpy(input_mapping_laser, "num_4");
}

if (strstr(controls_file_line_2, "num_5") != NULL) {
strcpy(input_mapping_laser, "num_5");
}

if (strstr(controls_file_line_2, "num_6") != NULL) {
strcpy(input_mapping_laser, "num_6");
}

if (strstr(controls_file_line_2, "num_7") != NULL) {
strcpy(input_mapping_laser, "num_7");
}

if (strstr(controls_file_line_2, "num_8") != NULL) {
strcpy(input_mapping_laser, "num_8");
}

if (strstr(controls_file_line_2, "num_9") != NULL) {
strcpy(input_mapping_laser, "num_9");
}

if (strstr(controls_file_line_2, "num_0") != NULL) {
strcpy(input_mapping_laser, "num_0");
}

if (strstr(controls_file_line_2, "num_slash") != NULL) {
strcpy(input_mapping_laser, "num_slash");
}

if (strstr(controls_file_line_2, "num_asterisk") != NULL) {
strcpy(input_mapping_laser, "num_asterisk");
}

if (strstr(controls_file_line_2, "num_minus") != NULL) {
strcpy(input_mapping_laser, "num_minus");
}

if (strstr(controls_file_line_2, "num_plus") != NULL) {
strcpy(input_mapping_laser, "num_plus");
}

if (strstr(controls_file_line_2, "num_delete") != NULL) {
strcpy(input_mapping_laser, "num_delete");
}

if (strstr(controls_file_line_2, "num_enter") != NULL) {
strcpy(input_mapping_laser, "num_enter");
}

////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_3, "_a") != NULL) {
strcpy(input_mapping_select, "_a");
}

if (strstr(controls_file_line_3, "_b") != NULL) {
strcpy(input_mapping_select, "_b");
}

if (strstr(controls_file_line_3, "_c") != NULL) {
strcpy(input_mapping_select, "_c");
}

if (strstr(controls_file_line_3, "_d") != NULL) {
strcpy(input_mapping_select, "_d");
}

if (strstr(controls_file_line_3, "_e") != NULL) {
strcpy(input_mapping_select, "_e");
}

if (strstr(controls_file_line_3, "_f") != NULL) {
strcpy(input_mapping_select, "_f");
}

if (strstr(controls_file_line_3, "_g") != NULL) {
strcpy(input_mapping_select, "_g");
}

if (strstr(controls_file_line_3, "_h") != NULL) {
strcpy(input_mapping_select, "_h");
}

if (strstr(controls_file_line_3, "_i") != NULL) {
strcpy(input_mapping_select, "_i");
}

if (strstr(controls_file_line_3, "_j") != NULL) {
strcpy(input_mapping_select, "_j");
}

if (strstr(controls_file_line_3, "_k") != NULL) {
strcpy(input_mapping_select, "_k");
}

if (strstr(controls_file_line_3, "_l") != NULL) {
strcpy(input_mapping_select, "_l");
}

if (strstr(controls_file_line_3, "_m") != NULL) {
strcpy(input_mapping_select, "_m");
}

if (strstr(controls_file_line_3, "_n") != NULL) {
strcpy(input_mapping_select, "_n");
}

if (strstr(controls_file_line_3, "_o") != NULL) {
strcpy(input_mapping_select, "_o");
}

if (strstr(controls_file_line_3, "_p") != NULL) {
strcpy(input_mapping_select, "_p");
}

if (strstr(controls_file_line_3, "_q") != NULL) {
strcpy(input_mapping_select, "_q");
}

if (strstr(controls_file_line_3, "_r") != NULL) {
strcpy(input_mapping_select, "_r");
}

if (strstr(controls_file_line_3, "_s") != NULL) {
strcpy(input_mapping_select, "_s");
}

if (strstr(controls_file_line_3, "_t") != NULL) {
strcpy(input_mapping_select, "_t");
}

if (strstr(controls_file_line_3, "_u") != NULL) {
strcpy(input_mapping_select, "_u");
}

if (strstr(controls_file_line_3, "_v") != NULL) {
strcpy(input_mapping_select, "_v");
}

if (strstr(controls_file_line_3, "_w") != NULL) {
strcpy(input_mapping_select, "_w");
}

if (strstr(controls_file_line_3, "_x") != NULL) {
strcpy(input_mapping_select, "_x");
}

if (strstr(controls_file_line_3, "_y") != NULL) {
strcpy(input_mapping_select, "_y");
}

if (strstr(controls_file_line_3, "_z") != NULL) {
strcpy(input_mapping_select, "_z");
}

//Numbers.
if (strstr(controls_file_line_3, "1") != NULL) {
strcpy(input_mapping_select, "1");
}

if (strstr(controls_file_line_3, "2") != NULL) {
strcpy(input_mapping_select, "2");
}

if (strstr(controls_file_line_3, "3") != NULL) {
strcpy(input_mapping_select, "3");
}

if (strstr(controls_file_line_3, "4") != NULL) {
strcpy(input_mapping_select, "4");
}

if (strstr(controls_file_line_3, "5") != NULL) {
strcpy(input_mapping_select, "5");
}

if (strstr(controls_file_line_3, "6") != NULL) {
strcpy(input_mapping_select, "6");
}

if (strstr(controls_file_line_3, "7") != NULL) {
strcpy(input_mapping_select, "7");
}

if (strstr(controls_file_line_3, "8") != NULL) {
strcpy(input_mapping_select, "8");
}

if (strstr(controls_file_line_3, "9") != NULL) {
strcpy(input_mapping_select, "9");
}

if (strstr(controls_file_line_3, "0") != NULL) {
strcpy(input_mapping_select, "0");
}

//Function keys.
if (strstr(controls_file_line_3, "f1") != NULL) {
strcpy(input_mapping_select, "f1");
}

if (strstr(controls_file_line_3, "f2") != NULL) {
strcpy(input_mapping_select, "f2");
}

if (strstr(controls_file_line_3, "f3") != NULL) {
strcpy(input_mapping_select, "f3");
}

if (strstr(controls_file_line_3, "f4") != NULL) {
strcpy(input_mapping_select, "f4");
}

if (strstr(controls_file_line_3, "f5") != NULL) {
strcpy(input_mapping_select, "f5");
}

if (strstr(controls_file_line_3, "f6") != NULL) {
strcpy(input_mapping_select, "f6");
}

if (strstr(controls_file_line_3, "f7") != NULL) {
strcpy(input_mapping_select, "f7");
}

if (strstr(controls_file_line_3, "f8") != NULL) {
strcpy(input_mapping_select, "f8");
}

if (strstr(controls_file_line_3, "f9") != NULL) {
strcpy(input_mapping_select, "f9");
}

if (strstr(controls_file_line_3, "f10") != NULL) {
strcpy(input_mapping_select, "f10");
}

if (strstr(controls_file_line_3, "f11") != NULL) {
strcpy(input_mapping_select, "f11");
}

if (strstr(controls_file_line_3, "f12") != NULL) {
strcpy(input_mapping_select, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_3, "_up") != NULL) {
strcpy(input_mapping_select, "_up");
}

if (strstr(controls_file_line_3, "_down") != NULL) {
strcpy(input_mapping_select, "_down");
}

if (strstr(controls_file_line_3, "_left") != NULL) {
strcpy(input_mapping_select, "_left");
}

if (strstr(controls_file_line_3, "_right") != NULL) {
strcpy(input_mapping_select, "_right");
}

//Special keys.
if (strstr(controls_file_line_3, "escape") != NULL) {
strcpy(input_mapping_select, "escape");
}

if (strstr(controls_file_line_3, "tab") != NULL) {
strcpy(input_mapping_select, "tab");
}

if (strstr(controls_file_line_3, "capslock") != NULL) {
strcpy(input_mapping_select, "capslock");
}

if (strstr(controls_file_line_3, "lshift") != NULL) {
strcpy(input_mapping_select, "lshift");
}

if (strstr(controls_file_line_3, "lcontrol") != NULL) {
strcpy(input_mapping_select, "lcontrol");
}

if (strstr(controls_file_line_3, "alt") != NULL) {
strcpy(input_mapping_select, "alt");
}

if (strstr(controls_file_line_3, "space") != NULL) {
strcpy(input_mapping_select, "space");
}

if (strstr(controls_file_line_3, "rcontrol") != NULL) {
strcpy(input_mapping_select, "rcontrol");
}

if (strstr(controls_file_line_3, "rshift") != NULL) {
strcpy(input_mapping_select, "rshift");
}

if (strstr(controls_file_line_3, "altgr") != NULL) {
strcpy(input_mapping_select, "altgr");
}

if (strstr(controls_file_line_3, "enter") != NULL) {
strcpy(input_mapping_select, "enter");
}

if (strstr(controls_file_line_3, "delete") != NULL) {
strcpy(input_mapping_select, "delete");
}

if (strstr(controls_file_line_3, "home") != NULL) {
strcpy(input_mapping_select, "home");
}

if (strstr(controls_file_line_3, "pageup") != NULL) {
strcpy(input_mapping_select, "pageup");
}

if (strstr(controls_file_line_3, "pagedown") != NULL) {
strcpy(input_mapping_select, "pagedown");
}

if (strstr(controls_file_line_3, "backspace") != NULL) {
strcpy(input_mapping_select, "backspace");
}

if (strstr(controls_file_line_3, "minus") != NULL) {
strcpy(input_mapping_select, "minus");
}

if (strstr(controls_file_line_3, "equals") != NULL) {
strcpy(input_mapping_select, "equals");
}

if (strstr(controls_file_line_3, "slash") != NULL) {
strcpy(input_mapping_select, "slash");
}

if (strstr(controls_file_line_3, "comma") != NULL) {
strcpy(input_mapping_select, "comma");
}

if (strstr(controls_file_line_3, "semicolon") != NULL) {
strcpy(input_mapping_select, "semicolon");
}

if (strstr(controls_file_line_3, "period") != NULL) {
strcpy(input_mapping_select, "period");
}

if (strstr(controls_file_line_3, "tilde") != NULL) {
strcpy(input_mapping_select, "tilde");
}

//Numpad.
if (strstr(controls_file_line_3, "num_1") != NULL) {
strcpy(input_mapping_select, "num_1");
}

if (strstr(controls_file_line_3, "num_2") != NULL) {
strcpy(input_mapping_select, "num_2");
}

if (strstr(controls_file_line_3, "num_3") != NULL) {
strcpy(input_mapping_select, "num_3");
}

if (strstr(controls_file_line_3, "num_4") != NULL) {
strcpy(input_mapping_select, "num_4");
}

if (strstr(controls_file_line_3, "num_5") != NULL) {
strcpy(input_mapping_select, "num_5");
}

if (strstr(controls_file_line_3, "num_6") != NULL) {
strcpy(input_mapping_select, "num_6");
}

if (strstr(controls_file_line_3, "num_7") != NULL) {
strcpy(input_mapping_select, "num_7");
}

if (strstr(controls_file_line_3, "num_8") != NULL) {
strcpy(input_mapping_select, "num_8");
}

if (strstr(controls_file_line_3, "num_9") != NULL) {
strcpy(input_mapping_select, "num_9");
}

if (strstr(controls_file_line_3, "num_0") != NULL) {
strcpy(input_mapping_select, "num_0");
}

if (strstr(controls_file_line_3, "num_slash") != NULL) {
strcpy(input_mapping_select, "num_slash");
}

if (strstr(controls_file_line_3, "num_asterisk") != NULL) {
strcpy(input_mapping_select, "num_asterisk");
}

if (strstr(controls_file_line_3, "num_minus") != NULL) {
strcpy(input_mapping_select, "num_minus");
}

if (strstr(controls_file_line_3, "num_plus") != NULL) {
strcpy(input_mapping_select, "num_plus");
}

if (strstr(controls_file_line_3, "num_delete") != NULL) {
strcpy(input_mapping_select, "num_delete");
}

if (strstr(controls_file_line_3, "num_enter") != NULL) {
strcpy(input_mapping_select, "num_enter");
}

////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_4, "_a") != NULL) {
strcpy(input_mapping_pause, "_a");
}

if (strstr(controls_file_line_4, "_b") != NULL) {
strcpy(input_mapping_pause, "_b");
}

if (strstr(controls_file_line_4, "_c") != NULL) {
strcpy(input_mapping_pause, "_c");
}

if (strstr(controls_file_line_4, "_d") != NULL) {
strcpy(input_mapping_pause, "_d");
}

if (strstr(controls_file_line_4, "_e") != NULL) {
strcpy(input_mapping_pause, "_e");
}

if (strstr(controls_file_line_4, "_f") != NULL) {
strcpy(input_mapping_pause, "_f");
}

if (strstr(controls_file_line_4, "_g") != NULL) {
strcpy(input_mapping_pause, "_g");
}

if (strstr(controls_file_line_4, "_h") != NULL) {
strcpy(input_mapping_pause, "_h");
}

if (strstr(controls_file_line_4, "_i") != NULL) {
strcpy(input_mapping_pause, "_i");
}

if (strstr(controls_file_line_4, "_j") != NULL) {
strcpy(input_mapping_pause, "_j");
}

if (strstr(controls_file_line_4, "_k") != NULL) {
strcpy(input_mapping_pause, "_k");
}

if (strstr(controls_file_line_4, "_l") != NULL) {
strcpy(input_mapping_pause, "_l");
}

if (strstr(controls_file_line_4, "_m") != NULL) {
strcpy(input_mapping_pause, "_m");
}

if (strstr(controls_file_line_4, "_n") != NULL) {
strcpy(input_mapping_pause, "_n");
}

if (strstr(controls_file_line_4, "_o") != NULL) {
strcpy(input_mapping_pause, "_o");
}

if (strstr(controls_file_line_4, "_p") != NULL) {
strcpy(input_mapping_pause, "_p");
}

if (strstr(controls_file_line_4, "_q") != NULL) {
strcpy(input_mapping_pause, "_q");
}

if (strstr(controls_file_line_4, "_r") != NULL) {
strcpy(input_mapping_pause, "_r");
}

if (strstr(controls_file_line_4, "_s") != NULL) {
strcpy(input_mapping_pause, "_s");
}

if (strstr(controls_file_line_4, "_t") != NULL) {
strcpy(input_mapping_pause, "_t");
}

if (strstr(controls_file_line_4, "_u") != NULL) {
strcpy(input_mapping_pause, "_u");
}

if (strstr(controls_file_line_4, "_v") != NULL) {
strcpy(input_mapping_pause, "_v");
}

if (strstr(controls_file_line_4, "_w") != NULL) {
strcpy(input_mapping_pause, "_w");
}

if (strstr(controls_file_line_4, "_x") != NULL) {
strcpy(input_mapping_pause, "_x");
}

if (strstr(controls_file_line_4, "_y") != NULL) {
strcpy(input_mapping_pause, "_y");
}

if (strstr(controls_file_line_4, "_z") != NULL) {
strcpy(input_mapping_pause, "_z");
}

//Numbers.
if (strstr(controls_file_line_4, "1") != NULL) {
strcpy(input_mapping_pause, "1");
}

if (strstr(controls_file_line_4, "2") != NULL) {
strcpy(input_mapping_pause, "2");
}

if (strstr(controls_file_line_4, "3") != NULL) {
strcpy(input_mapping_pause, "3");
}

if (strstr(controls_file_line_4, "4") != NULL) {
strcpy(input_mapping_pause, "4");
}

if (strstr(controls_file_line_4, "5") != NULL) {
strcpy(input_mapping_pause, "5");
}

if (strstr(controls_file_line_4, "6") != NULL) {
strcpy(input_mapping_pause, "6");
}

if (strstr(controls_file_line_4, "7") != NULL) {
strcpy(input_mapping_pause, "7");
}

if (strstr(controls_file_line_4, "8") != NULL) {
strcpy(input_mapping_pause, "8");
}

if (strstr(controls_file_line_4, "9") != NULL) {
strcpy(input_mapping_pause, "9");
}

if (strstr(controls_file_line_4, "0") != NULL) {
strcpy(input_mapping_pause, "0");
}

//Function keys.
if (strstr(controls_file_line_4, "f1") != NULL) {
strcpy(input_mapping_pause, "f1");
}

if (strstr(controls_file_line_4, "f2") != NULL) {
strcpy(input_mapping_pause, "f2");
}

if (strstr(controls_file_line_4, "f3") != NULL) {
strcpy(input_mapping_pause, "f3");
}

if (strstr(controls_file_line_4, "f4") != NULL) {
strcpy(input_mapping_pause, "f4");
}

if (strstr(controls_file_line_4, "f5") != NULL) {
strcpy(input_mapping_pause, "f5");
}

if (strstr(controls_file_line_4, "f6") != NULL) {
strcpy(input_mapping_pause, "f6");
}

if (strstr(controls_file_line_4, "f7") != NULL) {
strcpy(input_mapping_pause, "f7");
}

if (strstr(controls_file_line_4, "f8") != NULL) {
strcpy(input_mapping_pause, "f8");
}

if (strstr(controls_file_line_4, "f9") != NULL) {
strcpy(input_mapping_pause, "f9");
}

if (strstr(controls_file_line_4, "f10") != NULL) {
strcpy(input_mapping_pause, "f10");
}

if (strstr(controls_file_line_4, "f11") != NULL) {
strcpy(input_mapping_pause, "f11");
}

if (strstr(controls_file_line_4, "f12") != NULL) {
strcpy(input_mapping_pause, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_4, "_up") != NULL) {
strcpy(input_mapping_pause, "_up");
}

if (strstr(controls_file_line_4, "_down") != NULL) {
strcpy(input_mapping_pause, "_down");
}

if (strstr(controls_file_line_4, "_left") != NULL) {
strcpy(input_mapping_pause, "_left");
}

if (strstr(controls_file_line_4, "_right") != NULL) {
strcpy(input_mapping_pause, "_right");
}

//Special keys.
if (strstr(controls_file_line_4, "escape") != NULL) {
strcpy(input_mapping_pause, "escape");
}

if (strstr(controls_file_line_4, "tab") != NULL) {
strcpy(input_mapping_pause, "tab");
}

if (strstr(controls_file_line_4, "capslock") != NULL) {
strcpy(input_mapping_pause, "capslock");
}

if (strstr(controls_file_line_4, "lshift") != NULL) {
strcpy(input_mapping_pause, "lshift");
}

if (strstr(controls_file_line_4, "lcontrol") != NULL) {
strcpy(input_mapping_pause, "lcontrol");
}

if (strstr(controls_file_line_4, "alt") != NULL) {
strcpy(input_mapping_pause, "alt");
}

if (strstr(controls_file_line_4, "space") != NULL) {
strcpy(input_mapping_pause, "space");
}

if (strstr(controls_file_line_4, "rcontrol") != NULL) {
strcpy(input_mapping_pause, "rcontrol");
}

if (strstr(controls_file_line_4, "rshift") != NULL) {
strcpy(input_mapping_pause, "rshift");
}

if (strstr(controls_file_line_4, "altgr") != NULL) {
strcpy(input_mapping_pause, "altgr");
}

if (strstr(controls_file_line_4, "enter") != NULL) {
strcpy(input_mapping_pause, "enter");
}

if (strstr(controls_file_line_4, "delete") != NULL) {
strcpy(input_mapping_pause, "delete");
}

if (strstr(controls_file_line_4, "home") != NULL) {
strcpy(input_mapping_pause, "home");
}

if (strstr(controls_file_line_4, "pageup") != NULL) {
strcpy(input_mapping_pause, "pageup");
}

if (strstr(controls_file_line_4, "pagedown") != NULL) {
strcpy(input_mapping_pause, "pagedown");
}

if (strstr(controls_file_line_4, "backspace") != NULL) {
strcpy(input_mapping_pause, "backspace");
}

if (strstr(controls_file_line_4, "minus") != NULL) {
strcpy(input_mapping_pause, "minus");
}

if (strstr(controls_file_line_4, "equals") != NULL) {
strcpy(input_mapping_pause, "equals");
}

if (strstr(controls_file_line_4, "slash") != NULL) {
strcpy(input_mapping_pause, "slash");
}

if (strstr(controls_file_line_4, "comma") != NULL) {
strcpy(input_mapping_pause, "comma");
}

if (strstr(controls_file_line_4, "semicolon") != NULL) {
strcpy(input_mapping_pause, "semicolon");
}

if (strstr(controls_file_line_4, "period") != NULL) {
strcpy(input_mapping_pause, "period");
}

if (strstr(controls_file_line_4, "tilde") != NULL) {
strcpy(input_mapping_pause, "tilde");
}

//Numpad.
if (strstr(controls_file_line_4, "num_1") != NULL) {
strcpy(input_mapping_pause, "num_1");
}

if (strstr(controls_file_line_4, "num_2") != NULL) {
strcpy(input_mapping_pause, "num_2");
}

if (strstr(controls_file_line_4, "num_3") != NULL) {
strcpy(input_mapping_pause, "num_3");
}

if (strstr(controls_file_line_4, "num_4") != NULL) {
strcpy(input_mapping_pause, "num_4");
}

if (strstr(controls_file_line_4, "num_5") != NULL) {
strcpy(input_mapping_pause, "num_5");
}

if (strstr(controls_file_line_4, "num_6") != NULL) {
strcpy(input_mapping_pause, "num_6");
}

if (strstr(controls_file_line_4, "num_7") != NULL) {
strcpy(input_mapping_pause, "num_7");
}

if (strstr(controls_file_line_4, "num_8") != NULL) {
strcpy(input_mapping_pause, "num_8");
}

if (strstr(controls_file_line_4, "num_9") != NULL) {
strcpy(input_mapping_pause, "num_9");
}

if (strstr(controls_file_line_4, "num_0") != NULL) {
strcpy(input_mapping_pause, "num_0");
}

if (strstr(controls_file_line_4, "num_slash") != NULL) {
strcpy(input_mapping_pause, "num_slash");
}

if (strstr(controls_file_line_4, "num_asterisk") != NULL) {
strcpy(input_mapping_pause, "num_asterisk");
}

if (strstr(controls_file_line_4, "num_minus") != NULL) {
strcpy(input_mapping_pause, "num_minus");
}

if (strstr(controls_file_line_4, "num_plus") != NULL) {
strcpy(input_mapping_pause, "num_plus");
}

if (strstr(controls_file_line_4, "num_delete") != NULL) {
strcpy(input_mapping_pause, "num_delete");
}

if (strstr(controls_file_line_4, "num_enter") != NULL) {
strcpy(input_mapping_pause, "num_enter");
}

////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_5, "_a") != NULL) {
strcpy(input_mapping_up, "_a");
}

if (strstr(controls_file_line_5, "_b") != NULL) {
strcpy(input_mapping_up, "_b");
}

if (strstr(controls_file_line_5, "_c") != NULL) {
strcpy(input_mapping_up, "_c");
}

if (strstr(controls_file_line_5, "_d") != NULL) {
strcpy(input_mapping_up, "_d");
}

if (strstr(controls_file_line_5, "_e") != NULL) {
strcpy(input_mapping_up, "_e");
}

if (strstr(controls_file_line_5, "_f") != NULL) {
strcpy(input_mapping_up, "_f");
}

if (strstr(controls_file_line_5, "_g") != NULL) {
strcpy(input_mapping_up, "_g");
}

if (strstr(controls_file_line_5, "_h") != NULL) {
strcpy(input_mapping_up, "_h");
}

if (strstr(controls_file_line_5, "_i") != NULL) {
strcpy(input_mapping_up, "_i");
}

if (strstr(controls_file_line_5, "_j") != NULL) {
strcpy(input_mapping_up, "_j");
}

if (strstr(controls_file_line_5, "_k") != NULL) {
strcpy(input_mapping_up, "_k");
}

if (strstr(controls_file_line_5, "_l") != NULL) {
strcpy(input_mapping_up, "_l");
}

if (strstr(controls_file_line_5, "_m") != NULL) {
strcpy(input_mapping_up, "_m");
}

if (strstr(controls_file_line_5, "_n") != NULL) {
strcpy(input_mapping_up, "_n");
}

if (strstr(controls_file_line_5, "_o") != NULL) {
strcpy(input_mapping_up, "_o");
}

if (strstr(controls_file_line_5, "_p") != NULL) {
strcpy(input_mapping_up, "_p");
}

if (strstr(controls_file_line_5, "_q") != NULL) {
strcpy(input_mapping_up, "_q");
}

if (strstr(controls_file_line_5, "_r") != NULL) {
strcpy(input_mapping_up, "_r");
}

if (strstr(controls_file_line_5, "_s") != NULL) {
strcpy(input_mapping_up, "_s");
}

if (strstr(controls_file_line_5, "_t") != NULL) {
strcpy(input_mapping_up, "_t");
}

if (strstr(controls_file_line_5, "_u") != NULL) {
strcpy(input_mapping_up, "_u");
}

if (strstr(controls_file_line_5, "_v") != NULL) {
strcpy(input_mapping_up, "_v");
}

if (strstr(controls_file_line_5, "_w") != NULL) {
strcpy(input_mapping_up, "_w");
}

if (strstr(controls_file_line_5, "_x") != NULL) {
strcpy(input_mapping_up, "_x");
}

if (strstr(controls_file_line_5, "_y") != NULL) {
strcpy(input_mapping_up, "_y");
}

if (strstr(controls_file_line_5, "_z") != NULL) {
strcpy(input_mapping_up, "_z");
}

//Numbers.
if (strstr(controls_file_line_5, "1") != NULL) {
strcpy(input_mapping_up, "1");
}

if (strstr(controls_file_line_5, "2") != NULL) {
strcpy(input_mapping_up, "2");
}

if (strstr(controls_file_line_5, "3") != NULL) {
strcpy(input_mapping_up, "3");
}

if (strstr(controls_file_line_5, "4") != NULL) {
strcpy(input_mapping_up, "4");
}

if (strstr(controls_file_line_5, "5") != NULL) {
strcpy(input_mapping_up, "5");
}

if (strstr(controls_file_line_5, "6") != NULL) {
strcpy(input_mapping_up, "6");
}

if (strstr(controls_file_line_5, "7") != NULL) {
strcpy(input_mapping_up, "7");
}

if (strstr(controls_file_line_5, "8") != NULL) {
strcpy(input_mapping_up, "8");
}

if (strstr(controls_file_line_5, "9") != NULL) {
strcpy(input_mapping_up, "9");
}

if (strstr(controls_file_line_5, "0") != NULL) {
strcpy(input_mapping_up, "0");
}

//Function keys.
if (strstr(controls_file_line_5, "f1") != NULL) {
strcpy(input_mapping_up, "f1");
}

if (strstr(controls_file_line_5, "f2") != NULL) {
strcpy(input_mapping_up, "f2");
}

if (strstr(controls_file_line_5, "f3") != NULL) {
strcpy(input_mapping_up, "f3");
}

if (strstr(controls_file_line_5, "f4") != NULL) {
strcpy(input_mapping_up, "f4");
}

if (strstr(controls_file_line_5, "f5") != NULL) {
strcpy(input_mapping_up, "f5");
}

if (strstr(controls_file_line_5, "f6") != NULL) {
strcpy(input_mapping_up, "f6");
}

if (strstr(controls_file_line_5, "f7") != NULL) {
strcpy(input_mapping_up, "f7");
}

if (strstr(controls_file_line_5, "f8") != NULL) {
strcpy(input_mapping_up, "f8");
}

if (strstr(controls_file_line_5, "f9") != NULL) {
strcpy(input_mapping_up, "f9");
}

if (strstr(controls_file_line_5, "f10") != NULL) {
strcpy(input_mapping_up, "f10");
}

if (strstr(controls_file_line_5, "f11") != NULL) {
strcpy(input_mapping_up, "f11");
}

if (strstr(controls_file_line_5, "f12") != NULL) {
strcpy(input_mapping_up, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_5, "_up") != NULL) {
strcpy(input_mapping_up, "_up");
}

if (strstr(controls_file_line_5, "_down") != NULL) {
strcpy(input_mapping_up, "_down");
}

if (strstr(controls_file_line_5, "_left") != NULL) {
strcpy(input_mapping_up, "_left");
}

if (strstr(controls_file_line_5, "_right") != NULL) {
strcpy(input_mapping_up, "_right");
}

//Special keys.
if (strstr(controls_file_line_5, "escape") != NULL) {
strcpy(input_mapping_up, "escape");
}

if (strstr(controls_file_line_5, "tab") != NULL) {
strcpy(input_mapping_up, "tab");
}

if (strstr(controls_file_line_5, "capslock") != NULL) {
strcpy(input_mapping_up, "capslock");
}

if (strstr(controls_file_line_5, "lshift") != NULL) {
strcpy(input_mapping_up, "lshift");
}

if (strstr(controls_file_line_5, "lcontrol") != NULL) {
strcpy(input_mapping_up, "lcontrol");
}

if (strstr(controls_file_line_5, "alt") != NULL) {
strcpy(input_mapping_up, "alt");
}

if (strstr(controls_file_line_5, "space") != NULL) {
strcpy(input_mapping_up, "space");
}

if (strstr(controls_file_line_5, "rcontrol") != NULL) {
strcpy(input_mapping_up, "rcontrol");
}

if (strstr(controls_file_line_5, "rshift") != NULL) {
strcpy(input_mapping_up, "rshift");
}

if (strstr(controls_file_line_5, "altgr") != NULL) {
strcpy(input_mapping_up, "altgr");
}

if (strstr(controls_file_line_5, "enter") != NULL) {
strcpy(input_mapping_up, "enter");
}

if (strstr(controls_file_line_5, "delete") != NULL) {
strcpy(input_mapping_up, "delete");
}

if (strstr(controls_file_line_5, "home") != NULL) {
strcpy(input_mapping_up, "home");
}

if (strstr(controls_file_line_5, "pageup") != NULL) {
strcpy(input_mapping_up, "pageup");
}

if (strstr(controls_file_line_5, "pagedown") != NULL) {
strcpy(input_mapping_up, "pagedown");
}

if (strstr(controls_file_line_5, "backspace") != NULL) {
strcpy(input_mapping_up, "backspace");
}

if (strstr(controls_file_line_5, "minus") != NULL) {
strcpy(input_mapping_up, "minus");
}

if (strstr(controls_file_line_5, "equals") != NULL) {
strcpy(input_mapping_up, "equals");
}

if (strstr(controls_file_line_5, "slash") != NULL) {
strcpy(input_mapping_up, "slash");
}

if (strstr(controls_file_line_5, "comma") != NULL) {
strcpy(input_mapping_up, "comma");
}

if (strstr(controls_file_line_5, "semicolon") != NULL) {
strcpy(input_mapping_up, "semicolon");
}

if (strstr(controls_file_line_5, "period") != NULL) {
strcpy(input_mapping_up, "period");
}

if (strstr(controls_file_line_5, "tilde") != NULL) {
strcpy(input_mapping_up, "tilde");
}

//Numpad.
if (strstr(controls_file_line_5, "num_1") != NULL) {
strcpy(input_mapping_up, "num_1");
}

if (strstr(controls_file_line_5, "num_2") != NULL) {
strcpy(input_mapping_up, "num_2");
}

if (strstr(controls_file_line_5, "num_3") != NULL) {
strcpy(input_mapping_up, "num_3");
}

if (strstr(controls_file_line_5, "num_4") != NULL) {
strcpy(input_mapping_up, "num_4");
}

if (strstr(controls_file_line_5, "num_5") != NULL) {
strcpy(input_mapping_up, "num_5");
}

if (strstr(controls_file_line_5, "num_6") != NULL) {
strcpy(input_mapping_up, "num_6");
}

if (strstr(controls_file_line_5, "num_7") != NULL) {
strcpy(input_mapping_up, "num_7");
}

if (strstr(controls_file_line_5, "num_8") != NULL) {
strcpy(input_mapping_up, "num_8");
}

if (strstr(controls_file_line_5, "num_9") != NULL) {
strcpy(input_mapping_up, "num_9");
}

if (strstr(controls_file_line_5, "num_0") != NULL) {
strcpy(input_mapping_up, "num_0");
}

if (strstr(controls_file_line_5, "num_slash") != NULL) {
strcpy(input_mapping_up, "num_slash");
}

if (strstr(controls_file_line_5, "num_asterisk") != NULL) {
strcpy(input_mapping_up, "num_asterisk");
}

if (strstr(controls_file_line_5, "num_minus") != NULL) {
strcpy(input_mapping_up, "num_minus");
}

if (strstr(controls_file_line_5, "num_plus") != NULL) {
strcpy(input_mapping_up, "num_plus");
}

if (strstr(controls_file_line_5, "num_delete") != NULL) {
strcpy(input_mapping_up, "num_delete");
}

if (strstr(controls_file_line_5, "num_enter") != NULL) {
strcpy(input_mapping_up, "num_enter");
}

////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_6, "_a") != NULL) {
strcpy(input_mapping_down, "_a");
}

if (strstr(controls_file_line_6, "_b") != NULL) {
strcpy(input_mapping_down, "_b");
}

if (strstr(controls_file_line_6, "_c") != NULL) {
strcpy(input_mapping_down, "_c");
}

if (strstr(controls_file_line_6, "_d") != NULL) {
strcpy(input_mapping_down, "_d");
}

if (strstr(controls_file_line_6, "_e") != NULL) {
strcpy(input_mapping_down, "_e");
}

if (strstr(controls_file_line_6, "_f") != NULL) {
strcpy(input_mapping_down, "_f");
}

if (strstr(controls_file_line_6, "_g") != NULL) {
strcpy(input_mapping_down, "_g");
}

if (strstr(controls_file_line_6, "_h") != NULL) {
strcpy(input_mapping_down, "_h");
}

if (strstr(controls_file_line_6, "_i") != NULL) {
strcpy(input_mapping_down, "_i");
}

if (strstr(controls_file_line_6, "_j") != NULL) {
strcpy(input_mapping_down, "_j");
}

if (strstr(controls_file_line_6, "_k") != NULL) {
strcpy(input_mapping_down, "_k");
}

if (strstr(controls_file_line_6, "_l") != NULL) {
strcpy(input_mapping_down, "_l");
}

if (strstr(controls_file_line_6, "_m") != NULL) {
strcpy(input_mapping_down, "_m");
}

if (strstr(controls_file_line_6, "_n") != NULL) {
strcpy(input_mapping_down, "_n");
}

if (strstr(controls_file_line_6, "_o") != NULL) {
strcpy(input_mapping_down, "_o");
}

if (strstr(controls_file_line_6, "_p") != NULL) {
strcpy(input_mapping_down, "_p");
}

if (strstr(controls_file_line_6, "_q") != NULL) {
strcpy(input_mapping_down, "_q");
}

if (strstr(controls_file_line_6, "_r") != NULL) {
strcpy(input_mapping_down, "_r");
}

if (strstr(controls_file_line_6, "_s") != NULL) {
strcpy(input_mapping_down, "_s");
}

if (strstr(controls_file_line_6, "_t") != NULL) {
strcpy(input_mapping_down, "_t");
}

if (strstr(controls_file_line_6, "_u") != NULL) {
strcpy(input_mapping_down, "_u");
}

if (strstr(controls_file_line_6, "_v") != NULL) {
strcpy(input_mapping_down, "_v");
}

if (strstr(controls_file_line_6, "_w") != NULL) {
strcpy(input_mapping_down, "_w");
}

if (strstr(controls_file_line_6, "_x") != NULL) {
strcpy(input_mapping_down, "_x");
}

if (strstr(controls_file_line_6, "_y") != NULL) {
strcpy(input_mapping_down, "_y");
}

if (strstr(controls_file_line_6, "_z") != NULL) {
strcpy(input_mapping_down, "_z");
}

//Numbers.
if (strstr(controls_file_line_6, "1") != NULL) {
strcpy(input_mapping_down, "1");
}

if (strstr(controls_file_line_6, "2") != NULL) {
strcpy(input_mapping_down, "2");
}

if (strstr(controls_file_line_6, "3") != NULL) {
strcpy(input_mapping_down, "3");
}

if (strstr(controls_file_line_6, "4") != NULL) {
strcpy(input_mapping_down, "4");
}

if (strstr(controls_file_line_6, "5") != NULL) {
strcpy(input_mapping_down, "5");
}

if (strstr(controls_file_line_6, "6") != NULL) {
strcpy(input_mapping_down, "6");
}

if (strstr(controls_file_line_6, "7") != NULL) {
strcpy(input_mapping_down, "7");
}

if (strstr(controls_file_line_6, "8") != NULL) {
strcpy(input_mapping_down, "8");
}

if (strstr(controls_file_line_6, "9") != NULL) {
strcpy(input_mapping_down, "9");
}

if (strstr(controls_file_line_6, "0") != NULL) {
strcpy(input_mapping_down, "0");
}

//Function keys.
if (strstr(controls_file_line_6, "f1") != NULL) {
strcpy(input_mapping_down, "f1");
}

if (strstr(controls_file_line_6, "f2") != NULL) {
strcpy(input_mapping_down, "f2");
}

if (strstr(controls_file_line_6, "f3") != NULL) {
strcpy(input_mapping_down, "f3");
}

if (strstr(controls_file_line_6, "f4") != NULL) {
strcpy(input_mapping_down, "f4");
}

if (strstr(controls_file_line_6, "f5") != NULL) {
strcpy(input_mapping_down, "f5");
}

if (strstr(controls_file_line_6, "f6") != NULL) {
strcpy(input_mapping_down, "f6");
}

if (strstr(controls_file_line_6, "f7") != NULL) {
strcpy(input_mapping_down, "f7");
}

if (strstr(controls_file_line_6, "f8") != NULL) {
strcpy(input_mapping_down, "f8");
}

if (strstr(controls_file_line_6, "f9") != NULL) {
strcpy(input_mapping_down, "f9");
}

if (strstr(controls_file_line_6, "f10") != NULL) {
strcpy(input_mapping_down, "f10");
}

if (strstr(controls_file_line_6, "f11") != NULL) {
strcpy(input_mapping_down, "f11");
}

if (strstr(controls_file_line_6, "f12") != NULL) {
strcpy(input_mapping_down, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_6, "_up") != NULL) {
strcpy(input_mapping_down, "_up");
}

if (strstr(controls_file_line_6, "_down") != NULL) {
strcpy(input_mapping_down, "_down");
}

if (strstr(controls_file_line_6, "_left") != NULL) {
strcpy(input_mapping_down, "_left");
}

if (strstr(controls_file_line_6, "_right") != NULL) {
strcpy(input_mapping_down, "_right");
}

//Special keys.
if (strstr(controls_file_line_6, "escape") != NULL) {
strcpy(input_mapping_down, "escape");
}

if (strstr(controls_file_line_6, "tab") != NULL) {
strcpy(input_mapping_down, "tab");
}

if (strstr(controls_file_line_6, "capslock") != NULL) {
strcpy(input_mapping_down, "capslock");
}

if (strstr(controls_file_line_6, "lshift") != NULL) {
strcpy(input_mapping_down, "lshift");
}

if (strstr(controls_file_line_6, "lcontrol") != NULL) {
strcpy(input_mapping_down, "lcontrol");
}

if (strstr(controls_file_line_6, "alt") != NULL) {
strcpy(input_mapping_down, "alt");
}

if (strstr(controls_file_line_6, "space") != NULL) {
strcpy(input_mapping_down, "space");
}

if (strstr(controls_file_line_6, "rcontrol") != NULL) {
strcpy(input_mapping_down, "rcontrol");
}

if (strstr(controls_file_line_6, "rshift") != NULL) {
strcpy(input_mapping_down, "rshift");
}

if (strstr(controls_file_line_6, "altgr") != NULL) {
strcpy(input_mapping_down, "altgr");
}

if (strstr(controls_file_line_6, "enter") != NULL) {
strcpy(input_mapping_down, "enter");
}

if (strstr(controls_file_line_6, "delete") != NULL) {
strcpy(input_mapping_down, "delete");
}

if (strstr(controls_file_line_6, "home") != NULL) {
strcpy(input_mapping_down, "home");
}

if (strstr(controls_file_line_6, "pageup") != NULL) {
strcpy(input_mapping_down, "pageup");
}

if (strstr(controls_file_line_6, "pagedown") != NULL) {
strcpy(input_mapping_down, "pagedown");
}

if (strstr(controls_file_line_6, "backspace") != NULL) {
strcpy(input_mapping_down, "backspace");
}

if (strstr(controls_file_line_6, "minus") != NULL) {
strcpy(input_mapping_down, "minus");
}

if (strstr(controls_file_line_6, "equals") != NULL) {
strcpy(input_mapping_down, "equals");
}

if (strstr(controls_file_line_6, "slash") != NULL) {
strcpy(input_mapping_down, "slash");
}

if (strstr(controls_file_line_6, "comma") != NULL) {
strcpy(input_mapping_down, "comma");
}

if (strstr(controls_file_line_6, "semicolon") != NULL) {
strcpy(input_mapping_down, "semicolon");
}

if (strstr(controls_file_line_6, "period") != NULL) {
strcpy(input_mapping_down, "period");
}

if (strstr(controls_file_line_6, "tilde") != NULL) {
strcpy(input_mapping_down, "tilde");
}

//Numpad.
if (strstr(controls_file_line_6, "num_1") != NULL) {
strcpy(input_mapping_down, "num_1");
}

if (strstr(controls_file_line_6, "num_2") != NULL) {
strcpy(input_mapping_down, "num_2");
}

if (strstr(controls_file_line_6, "num_3") != NULL) {
strcpy(input_mapping_down, "num_3");
}

if (strstr(controls_file_line_6, "num_4") != NULL) {
strcpy(input_mapping_down, "num_4");
}

if (strstr(controls_file_line_6, "num_5") != NULL) {
strcpy(input_mapping_down, "num_5");
}

if (strstr(controls_file_line_6, "num_6") != NULL) {
strcpy(input_mapping_down, "num_6");
}

if (strstr(controls_file_line_6, "num_7") != NULL) {
strcpy(input_mapping_down, "num_7");
}

if (strstr(controls_file_line_6, "num_8") != NULL) {
strcpy(input_mapping_down, "num_8");
}

if (strstr(controls_file_line_6, "num_9") != NULL) {
strcpy(input_mapping_down, "num_9");
}

if (strstr(controls_file_line_6, "num_0") != NULL) {
strcpy(input_mapping_down, "num_0");
}

if (strstr(controls_file_line_6, "num_slash") != NULL) {
strcpy(input_mapping_down, "num_slash");
}

if (strstr(controls_file_line_6, "num_asterisk") != NULL) {
strcpy(input_mapping_down, "num_asterisk");
}

if (strstr(controls_file_line_6, "num_minus") != NULL) {
strcpy(input_mapping_down, "num_minus");
}

if (strstr(controls_file_line_6, "num_plus") != NULL) {
strcpy(input_mapping_down, "num_plus");
}

if (strstr(controls_file_line_6, "num_delete") != NULL) {
strcpy(input_mapping_down, "num_delete");
}

if (strstr(controls_file_line_6, "num_enter") != NULL) {
strcpy(input_mapping_down, "num_enter");
}


////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_7, "_a") != NULL) {
strcpy(input_mapping_left, "_a");
}

if (strstr(controls_file_line_7, "_b") != NULL) {
strcpy(input_mapping_left, "_b");
}

if (strstr(controls_file_line_7, "_c") != NULL) {
strcpy(input_mapping_left, "_c");
}

if (strstr(controls_file_line_7, "_d") != NULL) {
strcpy(input_mapping_left, "_d");
}

if (strstr(controls_file_line_7, "_e") != NULL) {
strcpy(input_mapping_left, "_e");
}

if (strstr(controls_file_line_7, "_f") != NULL) {
strcpy(input_mapping_left, "_f");
}

if (strstr(controls_file_line_7, "_g") != NULL) {
strcpy(input_mapping_left, "_g");
}

if (strstr(controls_file_line_7, "_h") != NULL) {
strcpy(input_mapping_left, "_h");
}

if (strstr(controls_file_line_7, "_i") != NULL) {
strcpy(input_mapping_left, "_i");
}

if (strstr(controls_file_line_7, "_j") != NULL) {
strcpy(input_mapping_left, "_j");
}

if (strstr(controls_file_line_7, "_k") != NULL) {
strcpy(input_mapping_left, "_k");
}

if (strstr(controls_file_line_7, "_l") != NULL) {
strcpy(input_mapping_left, "_l");
}

if (strstr(controls_file_line_7, "_m") != NULL) {
strcpy(input_mapping_left, "_m");
}

if (strstr(controls_file_line_7, "_n") != NULL) {
strcpy(input_mapping_left, "_n");
}

if (strstr(controls_file_line_7, "_o") != NULL) {
strcpy(input_mapping_left, "_o");
}

if (strstr(controls_file_line_7, "_p") != NULL) {
strcpy(input_mapping_left, "_p");
}

if (strstr(controls_file_line_7, "_q") != NULL) {
strcpy(input_mapping_left, "_q");
}

if (strstr(controls_file_line_7, "_r") != NULL) {
strcpy(input_mapping_left, "_r");
}

if (strstr(controls_file_line_7, "_s") != NULL) {
strcpy(input_mapping_left, "_s");
}

if (strstr(controls_file_line_7, "_t") != NULL) {
strcpy(input_mapping_left, "_t");
}

if (strstr(controls_file_line_7, "_u") != NULL) {
strcpy(input_mapping_left, "_u");
}

if (strstr(controls_file_line_7, "_v") != NULL) {
strcpy(input_mapping_left, "_v");
}

if (strstr(controls_file_line_7, "_w") != NULL) {
strcpy(input_mapping_left, "_w");
}

if (strstr(controls_file_line_7, "_x") != NULL) {
strcpy(input_mapping_left, "_x");
}

if (strstr(controls_file_line_7, "_y") != NULL) {
strcpy(input_mapping_left, "_y");
}

if (strstr(controls_file_line_7, "_z") != NULL) {
strcpy(input_mapping_left, "_z");
}

//Numbers.
if (strstr(controls_file_line_7, "1") != NULL) {
strcpy(input_mapping_left, "1");
}

if (strstr(controls_file_line_7, "2") != NULL) {
strcpy(input_mapping_left, "2");
}

if (strstr(controls_file_line_7, "3") != NULL) {
strcpy(input_mapping_left, "3");
}

if (strstr(controls_file_line_7, "4") != NULL) {
strcpy(input_mapping_left, "4");
}

if (strstr(controls_file_line_7, "5") != NULL) {
strcpy(input_mapping_left, "5");
}

if (strstr(controls_file_line_7, "6") != NULL) {
strcpy(input_mapping_left, "6");
}

if (strstr(controls_file_line_7, "7") != NULL) {
strcpy(input_mapping_left, "7");
}

if (strstr(controls_file_line_7, "8") != NULL) {
strcpy(input_mapping_left, "8");
}

if (strstr(controls_file_line_7, "9") != NULL) {
strcpy(input_mapping_left, "9");
}

if (strstr(controls_file_line_7, "0") != NULL) {
strcpy(input_mapping_left, "0");
}

//Function keys.
if (strstr(controls_file_line_7, "f1") != NULL) {
strcpy(input_mapping_left, "f1");
}

if (strstr(controls_file_line_7, "f2") != NULL) {
strcpy(input_mapping_left, "f2");
}

if (strstr(controls_file_line_7, "f3") != NULL) {
strcpy(input_mapping_left, "f3");
}

if (strstr(controls_file_line_7, "f4") != NULL) {
strcpy(input_mapping_left, "f4");
}

if (strstr(controls_file_line_7, "f5") != NULL) {
strcpy(input_mapping_left, "f5");
}

if (strstr(controls_file_line_7, "f6") != NULL) {
strcpy(input_mapping_left, "f6");
}

if (strstr(controls_file_line_7, "f7") != NULL) {
strcpy(input_mapping_left, "f7");
}

if (strstr(controls_file_line_7, "f8") != NULL) {
strcpy(input_mapping_left, "f8");
}

if (strstr(controls_file_line_7, "f9") != NULL) {
strcpy(input_mapping_left, "f9");
}

if (strstr(controls_file_line_7, "f10") != NULL) {
strcpy(input_mapping_left, "f10");
}

if (strstr(controls_file_line_7, "f11") != NULL) {
strcpy(input_mapping_left, "f11");
}

if (strstr(controls_file_line_7, "f12") != NULL) {
strcpy(input_mapping_left, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_7, "_up") != NULL) {
strcpy(input_mapping_left, "_up");
}

if (strstr(controls_file_line_7, "_down") != NULL) {
strcpy(input_mapping_left, "_down");
}

if (strstr(controls_file_line_7, "_left") != NULL) {
strcpy(input_mapping_left, "_left");
}

if (strstr(controls_file_line_7, "_right") != NULL) {
strcpy(input_mapping_left, "_right");
}

//Special keys.
if (strstr(controls_file_line_7, "escape") != NULL) {
strcpy(input_mapping_left, "escape");
}

if (strstr(controls_file_line_7, "tab") != NULL) {
strcpy(input_mapping_left, "tab");
}

if (strstr(controls_file_line_7, "capslock") != NULL) {
strcpy(input_mapping_left, "capslock");
}

if (strstr(controls_file_line_7, "lshift") != NULL) {
strcpy(input_mapping_left, "lshift");
}

if (strstr(controls_file_line_7, "lcontrol") != NULL) {
strcpy(input_mapping_left, "lcontrol");
}

if (strstr(controls_file_line_7, "alt") != NULL) {
strcpy(input_mapping_left, "alt");
}

if (strstr(controls_file_line_7, "space") != NULL) {
strcpy(input_mapping_left, "space");
}

if (strstr(controls_file_line_7, "rcontrol") != NULL) {
strcpy(input_mapping_left, "rcontrol");
}

if (strstr(controls_file_line_7, "rshift") != NULL) {
strcpy(input_mapping_left, "rshift");
}

if (strstr(controls_file_line_7, "altgr") != NULL) {
strcpy(input_mapping_left, "altgr");
}

if (strstr(controls_file_line_7, "enter") != NULL) {
strcpy(input_mapping_left, "enter");
}

if (strstr(controls_file_line_7, "delete") != NULL) {
strcpy(input_mapping_left, "delete");
}

if (strstr(controls_file_line_7, "home") != NULL) {
strcpy(input_mapping_left, "home");
}

if (strstr(controls_file_line_7, "pageup") != NULL) {
strcpy(input_mapping_left, "pageup");
}

if (strstr(controls_file_line_7, "pagedown") != NULL) {
strcpy(input_mapping_left, "pagedown");
}

if (strstr(controls_file_line_7, "backspace") != NULL) {
strcpy(input_mapping_left, "backspace");
}

if (strstr(controls_file_line_7, "minus") != NULL) {
strcpy(input_mapping_left, "minus");
}

if (strstr(controls_file_line_7, "equals") != NULL) {
strcpy(input_mapping_left, "equals");
}

if (strstr(controls_file_line_7, "slash") != NULL) {
strcpy(input_mapping_left, "slash");
}

if (strstr(controls_file_line_7, "comma") != NULL) {
strcpy(input_mapping_left, "comma");
}

if (strstr(controls_file_line_7, "semicolon") != NULL) {
strcpy(input_mapping_left, "semicolon");
}

if (strstr(controls_file_line_7, "period") != NULL) {
strcpy(input_mapping_left, "period");
}

if (strstr(controls_file_line_7, "tilde") != NULL) {
strcpy(input_mapping_left, "tilde");
}

//Numpad.
if (strstr(controls_file_line_7, "num_1") != NULL) {
strcpy(input_mapping_left, "num_1");
}

if (strstr(controls_file_line_7, "num_2") != NULL) {
strcpy(input_mapping_left, "num_2");
}

if (strstr(controls_file_line_7, "num_3") != NULL) {
strcpy(input_mapping_left, "num_3");
}

if (strstr(controls_file_line_7, "num_4") != NULL) {
strcpy(input_mapping_left, "num_4");
}

if (strstr(controls_file_line_7, "num_5") != NULL) {
strcpy(input_mapping_left, "num_5");
}

if (strstr(controls_file_line_7, "num_6") != NULL) {
strcpy(input_mapping_left, "num_6");
}

if (strstr(controls_file_line_7, "num_7") != NULL) {
strcpy(input_mapping_left, "num_7");
}

if (strstr(controls_file_line_7, "num_8") != NULL) {
strcpy(input_mapping_left, "num_8");
}

if (strstr(controls_file_line_7, "num_9") != NULL) {
strcpy(input_mapping_left, "num_9");
}

if (strstr(controls_file_line_7, "num_0") != NULL) {
strcpy(input_mapping_left, "num_0");
}

if (strstr(controls_file_line_7, "num_slash") != NULL) {
strcpy(input_mapping_left, "num_slash");
}

if (strstr(controls_file_line_7, "num_asterisk") != NULL) {
strcpy(input_mapping_left, "num_asterisk");
}

if (strstr(controls_file_line_7, "num_minus") != NULL) {
strcpy(input_mapping_left, "num_minus");
}

if (strstr(controls_file_line_7, "num_plus") != NULL) {
strcpy(input_mapping_left, "num_plus");
}

if (strstr(controls_file_line_7, "num_delete") != NULL) {
strcpy(input_mapping_left, "num_delete");
}

if (strstr(controls_file_line_7, "num_enter") != NULL) {
strcpy(input_mapping_left, "num_enter");
}


////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////

//Alphabet.
if (strstr(controls_file_line_8, "_a") != NULL) {
strcpy(input_mapping_right, "_a");
}

if (strstr(controls_file_line_8, "_b") != NULL) {
strcpy(input_mapping_right, "_b");
}

if (strstr(controls_file_line_8, "_c") != NULL) {
strcpy(input_mapping_right, "_c");
}

if (strstr(controls_file_line_8, "_d") != NULL) {
strcpy(input_mapping_right, "_d");
}

if (strstr(controls_file_line_8, "_e") != NULL) {
strcpy(input_mapping_right, "_e");
}

if (strstr(controls_file_line_8, "_f") != NULL) {
strcpy(input_mapping_right, "_f");
}

if (strstr(controls_file_line_8, "_g") != NULL) {
strcpy(input_mapping_right, "_g");
}

if (strstr(controls_file_line_8, "_h") != NULL) {
strcpy(input_mapping_right, "_h");
}

if (strstr(controls_file_line_8, "_i") != NULL) {
strcpy(input_mapping_right, "_i");
}

if (strstr(controls_file_line_8, "_j") != NULL) {
strcpy(input_mapping_right, "_j");
}

if (strstr(controls_file_line_8, "_k") != NULL) {
strcpy(input_mapping_right, "_k");
}

if (strstr(controls_file_line_8, "_l") != NULL) {
strcpy(input_mapping_right, "_l");
}

if (strstr(controls_file_line_8, "_m") != NULL) {
strcpy(input_mapping_right, "_m");
}

if (strstr(controls_file_line_8, "_n") != NULL) {
strcpy(input_mapping_right, "_n");
}

if (strstr(controls_file_line_8, "_o") != NULL) {
strcpy(input_mapping_right, "_o");
}

if (strstr(controls_file_line_8, "_p") != NULL) {
strcpy(input_mapping_right, "__p");
}

if (strstr(controls_file_line_8, "_q") != NULL) {
strcpy(input_mapping_right, "_q");
}

if (strstr(controls_file_line_8, "_r") != NULL) {
strcpy(input_mapping_right, "_r");
}

if (strstr(controls_file_line_8, "_s") != NULL) {
strcpy(input_mapping_right, "_s");
}

if (strstr(controls_file_line_8, "_t") != NULL) {
strcpy(input_mapping_right, "_t");
}

if (strstr(controls_file_line_8, "_u") != NULL) {
strcpy(input_mapping_right, "_u");
}

if (strstr(controls_file_line_8, "_v") != NULL) {
strcpy(input_mapping_right, "_v");
}

if (strstr(controls_file_line_8, "_w") != NULL) {
strcpy(input_mapping_right, "_w");
}

if (strstr(controls_file_line_8, "_x") != NULL) {
strcpy(input_mapping_right, "_x");
}

if (strstr(controls_file_line_8, "_y") != NULL) {
strcpy(input_mapping_right, "_y");
}

if (strstr(controls_file_line_8, "_z") != NULL) {
strcpy(input_mapping_right, "_z");
}

//Numbers.
if (strstr(controls_file_line_8, "1") != NULL) {
strcpy(input_mapping_right, "1");
}

if (strstr(controls_file_line_8, "2") != NULL) {
strcpy(input_mapping_right, "2");
}

if (strstr(controls_file_line_8, "3") != NULL) {
strcpy(input_mapping_right, "3");
}

if (strstr(controls_file_line_8, "4") != NULL) {
strcpy(input_mapping_right, "4");
}

if (strstr(controls_file_line_8, "5") != NULL) {
strcpy(input_mapping_right, "5");
}

if (strstr(controls_file_line_8, "6") != NULL) {
strcpy(input_mapping_right, "6");
}

if (strstr(controls_file_line_8, "7") != NULL) {
strcpy(input_mapping_right, "7");
}

if (strstr(controls_file_line_8, "8") != NULL) {
strcpy(input_mapping_right, "8");
}

if (strstr(controls_file_line_8, "9") != NULL) {
strcpy(input_mapping_right, "9");
}

if (strstr(controls_file_line_8, "0") != NULL) {
strcpy(input_mapping_right, "0");
}

//Function keys.
if (strstr(controls_file_line_8, "f1") != NULL) {
strcpy(input_mapping_right, "f1");
}

if (strstr(controls_file_line_8, "f2") != NULL) {
strcpy(input_mapping_right, "f2");
}

if (strstr(controls_file_line_8, "f3") != NULL) {
strcpy(input_mapping_right, "f3");
}

if (strstr(controls_file_line_8, "f4") != NULL) {
strcpy(input_mapping_right, "f4");
}

if (strstr(controls_file_line_8, "f5") != NULL) {
strcpy(input_mapping_right, "f5");
}

if (strstr(controls_file_line_8, "f6") != NULL) {
strcpy(input_mapping_right, "f6");
}

if (strstr(controls_file_line_8, "f7") != NULL) {
strcpy(input_mapping_right, "f7");
}

if (strstr(controls_file_line_8, "f8") != NULL) {
strcpy(input_mapping_right, "f8");
}

if (strstr(controls_file_line_8, "f9") != NULL) {
strcpy(input_mapping_right, "f9");
}

if (strstr(controls_file_line_8, "f10") != NULL) {
strcpy(input_mapping_right, "f10");
}

if (strstr(controls_file_line_8, "f11") != NULL) {
strcpy(input_mapping_right, "f11");
}

if (strstr(controls_file_line_8, "f12") != NULL) {
strcpy(input_mapping_right, "f12");
}

//Arrow keys.
if (strstr(controls_file_line_8, "_up") != NULL) {
strcpy(input_mapping_right, "_up");
}

if (strstr(controls_file_line_8, "_down") != NULL) {
strcpy(input_mapping_right, "_down");
}

if (strstr(controls_file_line_8, "_left") != NULL) {
strcpy(input_mapping_right, "_left");
}

if (strstr(controls_file_line_8, "_right") != NULL) {
strcpy(input_mapping_right, "_right");
}

//Special keys.
if (strstr(controls_file_line_8, "escape") != NULL) {
strcpy(input_mapping_right, "escape");
}

if (strstr(controls_file_line_8, "tab") != NULL) {
strcpy(input_mapping_right, "tab");
}

if (strstr(controls_file_line_8, "capslock") != NULL) {
strcpy(input_mapping_right, "capslock");
}

if (strstr(controls_file_line_8, "lshift") != NULL) {
strcpy(input_mapping_right, "lshift");
}

if (strstr(controls_file_line_8, "lcontrol") != NULL) {
strcpy(input_mapping_right, "lcontrol");
}

if (strstr(controls_file_line_8, "alt") != NULL) {
strcpy(input_mapping_right, "alt");
}

if (strstr(controls_file_line_8, "space") != NULL) {
strcpy(input_mapping_right, "space");
}

if (strstr(controls_file_line_8, "rcontrol") != NULL) {
strcpy(input_mapping_right, "rcontrol");
}

if (strstr(controls_file_line_8, "rshift") != NULL) {
strcpy(input_mapping_right, "rshift");
}

if (strstr(controls_file_line_8, "altgr") != NULL) {
strcpy(input_mapping_right, "altgr");
}

if (strstr(controls_file_line_8, "enter") != NULL) {
strcpy(input_mapping_right, "enter");
}

if (strstr(controls_file_line_8, "delete") != NULL) {
strcpy(input_mapping_right, "delete");
}

if (strstr(controls_file_line_8, "home") != NULL) {
strcpy(input_mapping_right, "home");
}

if (strstr(controls_file_line_8, "pageup") != NULL) {
strcpy(input_mapping_right, "pageup");
}

if (strstr(controls_file_line_8, "pagedown") != NULL) {
strcpy(input_mapping_right, "pagedown");
}

if (strstr(controls_file_line_8, "backspace") != NULL) {
strcpy(input_mapping_right, "backspace");
}

if (strstr(controls_file_line_8, "minus") != NULL) {
strcpy(input_mapping_right, "minus");
}

if (strstr(controls_file_line_8, "equals") != NULL) {
strcpy(input_mapping_right, "equals");
}

if (strstr(controls_file_line_8, "slash") != NULL) {
strcpy(input_mapping_right, "slash");
}

if (strstr(controls_file_line_8, "comma") != NULL) {
strcpy(input_mapping_right, "comma");
}

if (strstr(controls_file_line_8, "semicolon") != NULL) {
strcpy(input_mapping_right, "semicolon");
}

if (strstr(controls_file_line_8, "period") != NULL) {
strcpy(input_mapping_right, "period");
}

if (strstr(controls_file_line_8, "tilde") != NULL) {
strcpy(input_mapping_right, "tilde");
}

//Numpad.
if (strstr(controls_file_line_8, "num_1") != NULL) {
strcpy(input_mapping_right, "num_1");
}

if (strstr(controls_file_line_8, "num_2") != NULL) {
strcpy(input_mapping_right, "num_2");
}

if (strstr(controls_file_line_8, "num_3") != NULL) {
strcpy(input_mapping_right, "num_3");
}

if (strstr(controls_file_line_8, "num_4") != NULL) {
strcpy(input_mapping_right, "num_4");
}

if (strstr(controls_file_line_8, "num_5") != NULL) {
strcpy(input_mapping_right, "num_5");
}

if (strstr(controls_file_line_8, "num_6") != NULL) {
strcpy(input_mapping_right, "num_6");
}

if (strstr(controls_file_line_8, "num_7") != NULL) {
strcpy(input_mapping_right, "num_7");
}

if (strstr(controls_file_line_8, "num_8") != NULL) {
strcpy(input_mapping_right, "num_8");
}

if (strstr(controls_file_line_8, "num_9") != NULL) {
strcpy(input_mapping_right, "num_9");
}

if (strstr(controls_file_line_8, "num_0") != NULL) {
strcpy(input_mapping_right, "num_0");
}

if (strstr(controls_file_line_8, "num_slash") != NULL) {
strcpy(input_mapping_right, "num_slash");
}

if (strstr(controls_file_line_8, "num_asterisk") != NULL) {
strcpy(input_mapping_right, "num_asterisk");
}

if (strstr(controls_file_line_8, "num_minus") != NULL) {
strcpy(input_mapping_right, "num_minus");
}

if (strstr(controls_file_line_8, "num_plus") != NULL) {
strcpy(input_mapping_right, "num_plus");
}

if (strstr(controls_file_line_8, "num_delete") != NULL) {
strcpy(input_mapping_right, "num_delete");
}

if (strstr(controls_file_line_8, "num_enter") != NULL) {
strcpy(input_mapping_right, "num_enter");
}

//Closing controls file.
fclose(file_controls);
