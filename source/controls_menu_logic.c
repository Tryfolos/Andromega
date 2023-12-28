if (title_fade_back == 1) {

//Counting down the timer if the trigger is on.
if (controls_menu_move_trigger == 1) {
timer_controls_menu_move -= delta_time;
}

//When you press the pause button the timer will start.
if (input_pause() == 1) {
if (controls_menu_record_input == 0) {
controls_menu_move_trigger = 1;
timer_controls_menu_move = sec*1;
}}

//Moving menu options to the left depending on how far along the timer is.
if (chosen_option == 2) {
if (timer_controls_menu_move <= sec*0.875) {
controls_menu_option_0_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*1))) {
controls_menu_option_1_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*2))) {
controls_menu_option_2_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*3))) {
controls_menu_option_3_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*4))) {
controls_menu_option_4_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*5))) {
controls_menu_option_5_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*6))) {
controls_menu_option_6_x -= 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*7))) {
controls_menu_option_7_x -= 0.2 * delta_time;
}
}

//Moving menu options to the right depending on how far along the timer is.
if (chosen_option == -1) {
if (timer_controls_menu_move <= sec*0.875) {
controls_menu_option_0_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*1))) {
controls_menu_option_1_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*2))) {
controls_menu_option_2_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*3))) {
controls_menu_option_3_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*4))) {
controls_menu_option_4_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*5))) {
controls_menu_option_5_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*6))) {
controls_menu_option_6_x += 0.2 * delta_time;
}
if (timer_controls_menu_move <= sec*(0.875-(0.075*7))) {
controls_menu_option_7_x += 0.2 * delta_time;
}
}


//Limiting horizontal movement of menu options.
if (controls_menu_option_0_x > 480.0) {
controls_menu_option_0_x = 480.0;
}
if (controls_menu_option_1_x > 480.0) {
controls_menu_option_1_x = 480.0;
}
if (controls_menu_option_2_x > 480.0) {
controls_menu_option_2_x = 480.0;
}
if (controls_menu_option_3_x > 480.0) {
controls_menu_option_3_x = 480.0;
}
if (controls_menu_option_4_x > 480.0) {
controls_menu_option_4_x = 480.0;
}
if (controls_menu_option_5_x > 480.0) {
controls_menu_option_5_x = 480.0;
}
if (controls_menu_option_6_x > 480.0) {
controls_menu_option_6_x = 480.0;
}
if (controls_menu_option_7_x > 480.0) {
controls_menu_option_7_x = 480.0;
}
/////////////////////////////
if (controls_menu_option_0_x < 122) {
controls_menu_option_0_x = 122;
}
if (controls_menu_option_1_x < 122) {
controls_menu_option_1_x = 122;
}
if (controls_menu_option_2_x < 122) {
controls_menu_option_2_x = 122;
}
if (controls_menu_option_3_x < 122) {
controls_menu_option_3_x = 122;
}
if (controls_menu_option_4_x < 122) {
controls_menu_option_4_x = 122;
}
if (controls_menu_option_5_x < 122) {
controls_menu_option_5_x = 122;
}
if (controls_menu_option_6_x < 122) {
controls_menu_option_6_x = 122;
}
if (controls_menu_option_7_x < 122) {
controls_menu_option_7_x = 122;
}
///// End of limiting horizontal movement. /////


//Iterating through menu with up and down arrow keys.
if (controls_menu_record_input == 0) {
if (chosen_option == 2) {
if (press_up == 1) {
if (controls_menu_selected_option != 0) {
controls_menu_selected_option -= 1;
play_sound_change_option //Macro.
}
}
if (press_down == 1) {
if (controls_menu_selected_option != 7) {
controls_menu_selected_option += 1;
play_sound_change_option //Macro.
}
}
}
}

//Changing the alpha level of the blue bitmaps depending on if they are selected or not.
switch (controls_menu_selected_option) {

case 0:
controls_menu_option_0_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 1:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 2:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 3:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 4:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 5:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 6:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha += main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 7:
controls_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_6_alpha -= main_menu_option_fade_rate*delta_time;
controls_menu_option_7_alpha += main_menu_option_fade_rate*delta_time;
break;

};

//Limiting how far alpha of selected menu options can go up.
if (controls_menu_option_0_alpha > 255) {
controls_menu_option_0_alpha = 255;
}
if (controls_menu_option_1_alpha > 255) {
controls_menu_option_1_alpha = 255;
}
if (controls_menu_option_2_alpha > 255) {
controls_menu_option_2_alpha = 255;
}
if (controls_menu_option_3_alpha > 255) {
controls_menu_option_3_alpha = 255;
}
if (controls_menu_option_4_alpha > 255) {
controls_menu_option_4_alpha = 255;
}
if (controls_menu_option_5_alpha > 255) {
controls_menu_option_5_alpha = 255;
}
if (controls_menu_option_6_alpha > 255) {
controls_menu_option_6_alpha = 255;
}
if (controls_menu_option_7_alpha > 255) {
controls_menu_option_7_alpha = 255;
}

//Limiting how far alpha of selected menu options can go down.
if (controls_menu_option_0_alpha < 0) {
controls_menu_option_0_alpha = 0;
}
if (controls_menu_option_1_alpha < 0) {
controls_menu_option_1_alpha = 0;
}
if (controls_menu_option_2_alpha < 0) {
controls_menu_option_2_alpha = 0;
}
if (controls_menu_option_3_alpha < 0) {
controls_menu_option_3_alpha = 0;
}
if (controls_menu_option_4_alpha < 0) {
controls_menu_option_4_alpha = 0;
}
if (controls_menu_option_5_alpha < 0) {
controls_menu_option_5_alpha = 0;
}
if (controls_menu_option_6_alpha < 0) {
controls_menu_option_6_alpha = 0;
}
if (controls_menu_option_7_alpha < 0) {
controls_menu_option_7_alpha = 0;
}

//Only if controls menu has faded in a certain amount will this code run.
if (controls_menu_option_3_x == 122) {


//If in recording mode and keys are pressed. Set them as bindings.
if (controls_menu_record_input == 1) {


////////////////////
////////////////////
// Shoot ///////////
////////////////////
////////////////////
if (controls_menu_selected_option == 0) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_shoot, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_shoot, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_shoot, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_shoot, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_shoot, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_shoot, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_shoot, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_shoot, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_shoot, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_shoot, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_shoot, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_shoot, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_shoot, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_shoot, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_shoot, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_shoot, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_shoot, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_shoot, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_shoot, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_shoot, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_shoot, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_shoot, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_shoot, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_shoot, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_shoot, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_shoot, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_shoot, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_shoot, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_shoot, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_shoot, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_shoot, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_shoot, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_shoot, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_shoot, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_shoot, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_shoot, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_shoot, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_shoot, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_shoot, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_shoot, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_shoot, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_shoot, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_shoot, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_shoot, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_shoot, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_shoot, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_shoot, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_shoot, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_shoot, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_shoot, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_shoot, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_shoot, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_shoot, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_shoot, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_shoot, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_shoot, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_shoot, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_shoot, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_shoot, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_shoot, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_shoot, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_shoot, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_shoot, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_shoot, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_shoot, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_shoot, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_shoot, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_shoot, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_shoot, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_shoot, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_shoot, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_shoot, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_shoot, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_shoot, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_shoot, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_shoot, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_shoot, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_shoot, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_shoot, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_shoot, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_shoot, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_shoot, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_shoot, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_shoot, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_shoot, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_shoot, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_shoot, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_shoot, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_shoot, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_shoot, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_shoot, "num_enter");
}

}//End of shoot mapping.



////////////////////
////////////////////
// Laser ///////////
////////////////////
////////////////////
if (controls_menu_selected_option == 1) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_laser, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_laser, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_laser, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_laser, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_laser, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_laser, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_laser, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_laser, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_laser, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_laser, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_laser, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_laser, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_laser, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_laser, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_laser, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_laser, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_laser, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_laser, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_laser, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_laser, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_laser, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_laser, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_laser, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_laser, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_laser, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_laser, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_laser, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_laser, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_laser, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_laser, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_laser, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_laser, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_laser, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_laser, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_laser, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_laser, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_laser, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_laser, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_laser, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_laser, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_laser, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_laser, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_laser, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_laser, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_laser, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_laser, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_laser, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_laser, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_laser, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_laser, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_laser, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_laser, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_laser, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_laser, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_laser, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_laser, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_laser, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_laser, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_laser, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_laser, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_laser, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_laser, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_laser, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_laser, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_laser, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_laser, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_laser, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_laser, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_laser, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_laser, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_laser, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_laser, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_laser, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_laser, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_laser, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_laser, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_laser, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_laser, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_laser, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_laser, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_laser, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_laser, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_laser, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_laser, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_laser, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_laser, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_laser, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_laser, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_laser, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_laser, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_laser, "num_enter");
}

}//End of laser mapping.

////////////////////
////////////////////
// Select //////////
////////////////////
////////////////////
if (controls_menu_selected_option == 2) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_select, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_select, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_select, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_select, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_select, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_select, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_select, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_select, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_select, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_select, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_select, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_select, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_select, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_select, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_select, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_select, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_select, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_select, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_select, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_select, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_select, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_select, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_select, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_select, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_select, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_select, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_select, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_select, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_select, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_select, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_select, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_select, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_select, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_select, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_select, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_select, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_select, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_select, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_select, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_select, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_select, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_select, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_select, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_select, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_select, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_select, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_select, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_select, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_select, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_select, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_select, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_select, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_select, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_select, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_select, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_select, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_select, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_select, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_select, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_select, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_select, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_select, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_select, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_select, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_select, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_select, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_select, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_select, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_select, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_select, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_select, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_select, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_select, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_select, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_select, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_select, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_select, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_select, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_select, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_select, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_select, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_select, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_select, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_select, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_select, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_select, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_select, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_select, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_select, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_select, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_select, "num_enter");
}

}//End of select mapping.

////////////////////
////////////////////
// Pause ///////////
////////////////////
////////////////////
if (controls_menu_selected_option == 3) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_pause, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_pause, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_pause, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_pause, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_pause, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_pause, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_pause, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_pause, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_pause, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_pause, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_pause, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_pause, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_pause, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_pause, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_pause, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_pause, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_pause, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_pause, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_pause, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_pause, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_pause, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_pause, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_pause, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_pause, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_pause, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_pause, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_pause, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_pause, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_pause, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_pause, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_pause, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_pause, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_pause, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_pause, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_pause, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_pause, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_pause, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_pause, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_pause, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_pause, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_pause, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_pause, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_pause, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_pause, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_pause, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_pause, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_pause, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_pause, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_pause, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_pause, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_pause, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_pause, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_pause, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_pause, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_pause, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_pause, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_pause, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_pause, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_pause, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_pause, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_pause, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_pause, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_pause, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_pause, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_pause, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_pause, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_pause, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_pause, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_pause, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_pause, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_pause, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_pause, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_pause, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_pause, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_pause, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_pause, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_pause, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_pause, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_pause, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_pause, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_pause, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_pause, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_pause, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_pause, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_pause, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_pause, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_pause, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_pause, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_pause, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_pause, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_pause, "num_enter");
}

}//End of pause mapping.

////////////////////
////////////////////
// Up //////////////
////////////////////
////////////////////
if (controls_menu_selected_option == 4) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_up, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_up, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_up, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_up, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_up, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_up, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_up, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_up, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_up, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_up, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_up, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_up, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_up, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_up, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_up, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_up, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_up, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_up, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_up, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_up, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_up, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_up, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_up, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_up, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_up, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_up, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_up, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_up, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_up, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_up, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_up, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_up, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_up, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_up, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_up, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_up, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_up, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_up, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_up, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_up, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_up, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_up, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_up, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_up, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_up, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_up, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_up, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_up, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_up, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_up, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_up, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_up, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_up, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_up, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_up, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_up, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_up, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_up, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_up, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_up, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_up, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_up, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_up, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_up, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_up, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_up, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_up, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_up, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_up, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_up, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_up, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_up, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_up, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_up, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_up, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_up, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_up, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_up, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_up, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_up, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_up, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_up, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_up, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_up, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_up, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_up, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_up, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_up, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_up, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_up, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_up, "num_enter");
}

}//End of up mapping.

////////////////////
////////////////////
// Down ////////////
////////////////////
////////////////////
if (controls_menu_selected_option == 5) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_down, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_down, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_down, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_down, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_down, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_down, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_down, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_down, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_down, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_down, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_down, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_down, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_down, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_down, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_down, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_down, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_down, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_down, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_down, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_down, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_down, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_down, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_down, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_down, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_down, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_down, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_down, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_down, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_down, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_down, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_down, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_down, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_down, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_down, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_down, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_down, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_down, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_down, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_down, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_down, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_down, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_down, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_down, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_down, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_down, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_down, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_down, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_down, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_down, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_down, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_down, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_down, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_down, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_down, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_down, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_down, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_down, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_down, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_down, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_down, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_down, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_down, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_down, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_down, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_down, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_down, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_down, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_down, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_down, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_down, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_down, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_down, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_down, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_down, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_down, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_down, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_down, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_down, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_down, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_down, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_down, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_down, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_down, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_down, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_down, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_down, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_down, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_down, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_down, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_down, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_down, "num_enter");
}

}//End of down mapping.

////////////////////
////////////////////
// Left ////////////
////////////////////
////////////////////
if (controls_menu_selected_option == 6) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_left, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_left, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_left, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_left, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_left, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_left, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_left, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_left, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_left, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_left, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_left, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_left, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_left, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_left, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_left, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_left, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_left, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_left, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_left, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_left, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_left, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_left, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_left, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_left, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_left, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_left, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_left, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_left, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_left, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_left, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_left, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_left, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_left, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_left, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_left, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_left, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_left, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_left, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_left, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_left, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_left, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_left, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_left, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_left, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_left, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_left, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_left, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_left, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_left, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_left, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_left, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_left, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_left, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_left, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_left, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_left, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_left, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_left, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_left, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_left, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_left, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_left, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_left, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_left, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_left, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_left, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_left, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_left, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_left, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_left, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_left, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_left, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_left, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_left, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_left, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_left, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_left, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_left, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_left, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_left, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_left, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_left, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_left, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_left, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_left, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_left, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_left, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_left, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_left, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_left, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_left, "num_enter");
}

}//End of left mapping.

////////////////////
////////////////////
// Right ///////////
////////////////////
////////////////////
if (controls_menu_selected_option == 7) {
//Alphabet.
if (press_a == 1) {
strcpy(input_mapping_right, "_a");
}
if (press_b == 1) {
strcpy(input_mapping_right, "_b");
}
if (press_c == 1) {
strcpy(input_mapping_right, "_c");
}
if (press_d == 1) {
strcpy(input_mapping_right, "_d");
}
if (press_e == 1) {
strcpy(input_mapping_right, "_e");
}
if (press_f == 1) {
strcpy(input_mapping_right, "_f");
}
if (press_g == 1) {
strcpy(input_mapping_right, "_g");
}
if (press_h == 1) {
strcpy(input_mapping_right, "_h");
}
if (press_i == 1) {
strcpy(input_mapping_right, "_i");
}
if (press_j == 1) {
strcpy(input_mapping_right, "_j");
}
if (press_k == 1) {
strcpy(input_mapping_right, "_k");
}
if (press_l == 1) {
strcpy(input_mapping_right, "_l");
}
if (press_m == 1) {
strcpy(input_mapping_right, "_m");
}
if (press_n == 1) {
strcpy(input_mapping_right, "_n");
}
if (press_o == 1) {
strcpy(input_mapping_right, "_o");
}
if (press_p == 1) {
strcpy(input_mapping_right, "_p");
}
if (press_q == 1) {
strcpy(input_mapping_right, "_q");
}
if (press_r == 1) {
strcpy(input_mapping_right, "_r");
}
if (press_s == 1) {
strcpy(input_mapping_right, "_s");
}
if (press_t_ == 1) {
strcpy(input_mapping_right, "_t");
}
if (press_u == 1) {
strcpy(input_mapping_right, "_u");
}
if (press_v == 1) {
strcpy(input_mapping_right, "_v");
}
if (press_w == 1) {
strcpy(input_mapping_right, "_w");
}
if (press_x == 1) {
strcpy(input_mapping_right, "_x");
}
if (press_y == 1) {
strcpy(input_mapping_right, "_y");
}
if (press_z == 1) {
strcpy(input_mapping_right, "_z");
}
//Numbers.
if (press_1 == 1) {
strcpy(input_mapping_right, "1");
}
if (press_2 == 1) {
strcpy(input_mapping_right, "2");
}
if (press_3 == 1) {
strcpy(input_mapping_right, "3");
}
if (press_4 == 1) {
strcpy(input_mapping_right, "4");
}
if (press_5 == 1) {
strcpy(input_mapping_right, "5");
}
if (press_6 == 1) {
strcpy(input_mapping_right, "6");
}
if (press_7 == 1) {
strcpy(input_mapping_right, "7");
}
if (press_8 == 1) {
strcpy(input_mapping_right, "8");
}
if (press_9 == 1) {
strcpy(input_mapping_right, "9");
}
if (press_0 == 1) {
strcpy(input_mapping_right, "0");
}
//Function keys.
if (press_f1 == 1) {
strcpy(input_mapping_right, "f1");
}
if (press_f2 == 1) {
strcpy(input_mapping_right, "f2");
}
if (press_f3 == 1) {
strcpy(input_mapping_right, "f3");
}
if (press_f4 == 1) {
strcpy(input_mapping_right, "f4");
}
if (press_f5 == 1) {
strcpy(input_mapping_right, "f5");
}
if (press_f6 == 1) {
strcpy(input_mapping_right, "f6");
}
if (press_f7 == 1) {
strcpy(input_mapping_right, "f7");
}
if (press_f8 == 1) {
strcpy(input_mapping_right, "f8");
}
if (press_f9 == 1) {
strcpy(input_mapping_right, "f9");
}
if (press_f10 == 1) {
strcpy(input_mapping_right, "f10");
}
if (press_f11 == 1) {
strcpy(input_mapping_right, "f11");
}
if (press_f12 == 1) {
strcpy(input_mapping_right, "f12");
}
//Arrow keys.
if (press_up == 1) {
strcpy(input_mapping_right, "_up");
}
if (press_down == 1) {
strcpy(input_mapping_right, "_down");
}
if (press_left == 1) {
strcpy(input_mapping_right, "_left");
}
if (press_right == 1) {
strcpy(input_mapping_right, "_right");
}
//Special.
if (press_escape == 1) {
strcpy(input_mapping_right, "escape");
}
if (press_tab == 1) {
strcpy(input_mapping_right, "tab");
}
if (press_capslock == 1) {
strcpy(input_mapping_right, "capslock");
}
if (press_lshift == 1) {
strcpy(input_mapping_right, "lshift");
}
if (press_lcontrol == 1) {
strcpy(input_mapping_right, "lcontrol");
}
if (press_alt == 1) {
strcpy(input_mapping_right, "alt");
}
if (press_space == 1) {
strcpy(input_mapping_right, "space");
}
if (press_rcontrol == 1) {
strcpy(input_mapping_right, "rcontrol");
}
if (press_rshift == 1) {
strcpy(input_mapping_right, "rshift");
}
if (press_altgr == 1) {
strcpy(input_mapping_right, "altgr");
}
if (press_enter == 1) {
strcpy(input_mapping_right, "enter");
}
if (press_delete == 1) {
strcpy(input_mapping_right, "delete");
}
if (press_home == 1) {
strcpy(input_mapping_right, "home");
}
if (press_pageup == 1) {
strcpy(input_mapping_right, "pageup");
}
if (press_pagedown == 1) {
strcpy(input_mapping_right, "pagedown");
}
if (press_backspace == 1) {
strcpy(input_mapping_right, "backspace");
}
if (press_minus == 1) {
strcpy(input_mapping_right, "minus");
}
if (press_equals == 1) {
strcpy(input_mapping_right, "equals");
}
if (press_slash == 1) {
strcpy(input_mapping_right, "slash");
}
if (press_comma == 1) {
strcpy(input_mapping_right, "comma");
}
if (press_semicolon == 1) {
strcpy(input_mapping_right, "semicolon");
}
if (press_period == 1) {
strcpy(input_mapping_right, "period");
}
if (press_tilde == 1) {
strcpy(input_mapping_right, "tilde");
}
//Numpad.
if (press_num_1 == 1) {
strcpy(input_mapping_right, "num_1");
}
if (press_num_2 == 1) {
strcpy(input_mapping_right, "num_2");
}
if (press_num_3 == 1) {
strcpy(input_mapping_right, "num_3");
}
if (press_num_4 == 1) {
strcpy(input_mapping_right, "num_4");
}
if (press_num_5 == 1) {
strcpy(input_mapping_right, "num_5");
}
if (press_num_6 == 1) {
strcpy(input_mapping_right, "num_6");
}
if (press_num_7 == 1) {
strcpy(input_mapping_right, "num_7");
}
if (press_num_8 == 1) {
strcpy(input_mapping_right, "num_8");
}
if (press_num_9 == 1) {
strcpy(input_mapping_right, "num_9");
}
if (press_num_0 == 1) {
strcpy(input_mapping_right, "num_0");
}
if (press_num_slash == 1) {
strcpy(input_mapping_right, "num_slash");
}
if (press_num_asterisk == 1) {
strcpy(input_mapping_right, "num_asterisk");
}
if (press_num_minus == 1) {
strcpy(input_mapping_right, "num_minus");
}
if (press_num_plus == 1) {
strcpy(input_mapping_right, "num_plus");
}
if (press_num_delete == 1) {
strcpy(input_mapping_right, "num_delete");
}
if (press_num_enter == 1) {
strcpy(input_mapping_right, "num_enter");
}

}//End of right mapping.


} //End of recording inputs.

//If input recording is on. Any further input will turn it off.
if (controls_menu_record_input == 1) {
if (press_anykey == 1) {
controls_menu_record_input = 0;
controls_menu_recording_option = -1;
controls_menu_skip_recording_mode = 1;

//Saving key bindings to file.
FILE * file_controls = fopen("user_data/controls.txt", "w");

fprintf(file_controls, "shoot: %s\n", input_mapping_shoot);
fprintf(file_controls, "laser: %s\n", input_mapping_laser);
fprintf(file_controls, "select: %s\n", input_mapping_select);
fprintf(file_controls, "pause: %s\n", input_mapping_pause);
fprintf(file_controls, "moveup: %s\n", input_mapping_up);
fprintf(file_controls, "movedown: %s\n", input_mapping_down);
fprintf(file_controls, "moveleft: %s\n", input_mapping_left);
fprintf(file_controls, "moveright: %s", input_mapping_right);

/*
shoot: num_asterisk
laser: _b
select: enter
pause: escape
moveup: _up
movedown: _down
moveleft: left
moveright: right
*/
fclose(file_controls);
}
}
/*
//If you are not in record mode, navigation skip will be 0 but only after a delay of 2 frames.
if (controls_menu_record_input == 0) {
controls_menu_navigation_delay -= 1;
} else {
controls_menu_navigation_delay += 1;
}
if (controls_menu_navigation_delay <= 0) {
controls_menu_skip_navigation = 0;
}

//Limiting max and min value of navigation_delay.
if (controls_menu_navigation_delay > 2) {
controls_menu_navigation_delay = 2;
}
if (controls_menu_navigation_delay < 0) {
controls_menu_navigation_delay = 0;
}
*/

//If the user presses space or enter the menu will go into "record" mode where the next input will be mapped to the action.
if (controls_menu_skip_recording_mode == 0) {
if (controls_menu_selected_option == 0) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 0;
}
}

if (controls_menu_selected_option == 1) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 1;
}
}

if (controls_menu_selected_option == 2) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 2;
}
}

if (controls_menu_selected_option == 3) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 3;
}
}

if (controls_menu_selected_option == 4) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 4;
}
}

if (controls_menu_selected_option == 5) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 5;
}
}

if (controls_menu_selected_option == 6) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 6;
}
}

if (controls_menu_selected_option == 7) {
if (input_select() == 1) {
controls_menu_record_input = 1;
controls_menu_recording_option = 7;
}
}
} else {
controls_menu_skip_recording_mode = 0;
}

}
}