if (title_fade_back == 1) {

//Setting the target bitmap.
al_set_target_bitmap(internal_display);

//If the main menu has faded away, draw controls menu.
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_0_x, 85-46, 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_1_x, 85-23, 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_2_x, 85, 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_3_x, 85+(23*1), 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_4_x, 85+(23*2), 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_5_x, 85+(23*3), 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_6_x, 85+(23*4), 0);
al_draw_bitmap(bitmap_controls_menu_option, controls_menu_option_7_x, 85+(23*5), 0);


//If the main menu has faded away, draw controls menu "selected version".
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_0_alpha, (int)controls_menu_option_0_alpha, (int)controls_menu_option_0_alpha, (int)controls_menu_option_0_alpha), controls_menu_option_0_x, 85-46, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_1_alpha, (int)controls_menu_option_1_alpha, (int)controls_menu_option_1_alpha, (int)controls_menu_option_1_alpha), controls_menu_option_1_x, 85-23, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_2_alpha, (int)controls_menu_option_2_alpha, (int)controls_menu_option_2_alpha, (int)controls_menu_option_2_alpha), controls_menu_option_2_x, 85, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_3_alpha, (int)controls_menu_option_3_alpha, (int)controls_menu_option_3_alpha, (int)controls_menu_option_3_alpha), controls_menu_option_3_x, 85+(23*1), 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_4_alpha, (int)controls_menu_option_4_alpha, (int)controls_menu_option_4_alpha, (int)controls_menu_option_4_alpha), controls_menu_option_4_x, 85+(23*2), 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_5_alpha, (int)controls_menu_option_5_alpha, (int)controls_menu_option_5_alpha, (int)controls_menu_option_5_alpha), controls_menu_option_5_x, 85+(23*3), 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_6_alpha, (int)controls_menu_option_6_alpha, (int)controls_menu_option_6_alpha, (int)controls_menu_option_6_alpha), controls_menu_option_6_x, 85+(23*4), 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba((int)controls_menu_option_7_alpha, (int)controls_menu_option_7_alpha, (int)controls_menu_option_7_alpha, (int)controls_menu_option_7_alpha), controls_menu_option_7_x, 85+(23*5), 0);

//Drawing the "action" part of the text like "shoot" and "pause". 
draw_text(text_controls_menu_shoot, controls_menu_option_0_x+6, 85-46+5, 1, 1, 1, 1);
draw_text(text_controls_menu_laser, controls_menu_option_1_x+6, 85-46+5+(23*1), 1, 1, 1, 1);
draw_text(text_controls_menu_select, controls_menu_option_2_x+6, 85-46+5+(23*2), 1, 1, 1, 1);
draw_text(text_controls_menu_pause, controls_menu_option_3_x+6, 85-46+5+(23*3), 1, 1, 1, 1);
draw_text(text_controls_menu_mup, controls_menu_option_4_x+6, 85-46+5+(23*4), 1, 1, 1, 1);
draw_text(text_controls_menu_mdown, controls_menu_option_5_x+6, 85-46+5+(23*5), 1, 1, 1, 1);
draw_text(text_controls_menu_mleft, controls_menu_option_6_x+6, 85-46+5+(23*6), 1, 1, 1, 1);
draw_text(text_controls_menu_mright, controls_menu_option_7_x+6, 85-46+5+(23*7), 1, 1, 1, 1);

//Showing current mapping for actions.
////////////////////
////////////////////
////////////////////
// Shoot ///////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 0) {
goto aftershoot;
}}

//Alphabet.
if (strcmp(input_mapping_shoot, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_shoot, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_shoot, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_shoot, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_shoot, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_shoot, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_shoot, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_0_x+controls_menu_option_0_offset, 85-46+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
aftershoot:
////////////////////
////////////////////
////////////////////
// Laser ///////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 1) {
goto afterlaser;
}}
//Alphabet.
if (strcmp(input_mapping_laser, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_laser, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_laser, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_laser, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_laser, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_laser, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_laser, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_1_x+controls_menu_option_1_offset, 85-23+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterlaser:
////////////////////
////////////////////
////////////////////
// Select //////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 2) {
goto afterselect;
}}
//Alphabet.
if (strcmp(input_mapping_select, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_select, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_select, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_select, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_select, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_select, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_select, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_2_x+controls_menu_option_2_offset, 85+5, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterselect:
////////////////////
////////////////////
////////////////////
// Pause ///////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 3) {
goto afterpause;
}}
//Alphabet.
if (strcmp(input_mapping_pause, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_pause, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_pause, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_pause, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_pause, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_pause, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_pause, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_3_x+controls_menu_option_3_offset, 85+5+23, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterpause:
////////////////////
////////////////////
////////////////////
// Up //////////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 4) {
goto afterup;
}}
//Alphabet.
if (strcmp(input_mapping_up, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_up, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_up, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_up, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_up, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_up, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_up, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_4_x+controls_menu_option_4_offset, 85+5+46, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterup:
////////////////////
////////////////////
////////////////////
// Down ////////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 5) {
goto afterdown;
}}
//Alphabet.
if (strcmp(input_mapping_down, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_down, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_down, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_down, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_down, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_down, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_down, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_5_x+controls_menu_option_5_offset, 85+5+69, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterdown:
////////////////////
////////////////////
////////////////////
// Left ////////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 6) {
goto afterleft;
}}
//Alphabet.
if (strcmp(input_mapping_left, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_left, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_left, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_left, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_left, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_left, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_left, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_6_x+controls_menu_option_6_offset, 85+5+92, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterleft:
////////////////////
////////////////////
////////////////////
// Right ///////////
////////////////////
////////////////////
////////////////////
if (controls_menu_record_input == 1) {
if (controls_menu_recording_option == 7) {
goto afterright;
}}
//Alphabet.
if (strcmp(input_mapping_right, "_a") == 0) {
draw_text(text_controls_menu_a, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_b") == 0) {
draw_text(text_controls_menu_b, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_c") == 0) {
draw_text(text_controls_menu_c, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_d") == 0) {
draw_text(text_controls_menu_d, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_e") == 0) {
draw_text(text_controls_menu_e, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_f") == 0) {
draw_text(text_controls_menu_f, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_g") == 0) {
draw_text(text_controls_menu_g, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_h") == 0) {
draw_text(text_controls_menu_h, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_i") == 0) {
draw_text(text_controls_menu_i, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_j") == 0) {
draw_text(text_controls_menu_j, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_k") == 0) {
draw_text(text_controls_menu_k, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_l") == 0) {
draw_text(text_controls_menu_l, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_m") == 0) {
draw_text(text_controls_menu_m, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_n") == 0) {
draw_text(text_controls_menu_n, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_o") == 0) {
draw_text(text_controls_menu_o, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_p") == 0) {
draw_text(text_controls_menu_p, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_q") == 0) {
draw_text(text_controls_menu_q, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_r") == 0) {
draw_text(text_controls_menu_r, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_s") == 0) {
draw_text(text_controls_menu_s, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_t") == 0) {
draw_text(text_controls_menu_t_, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_u") == 0) {
draw_text(text_controls_menu_u, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_v") == 0) {
draw_text(text_controls_menu_v, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_w") == 0) {
draw_text(text_controls_menu_w, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_x") == 0) {
draw_text(text_controls_menu_x, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_y") == 0) {
draw_text(text_controls_menu_y, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_z") == 0) {
draw_text(text_controls_menu_z, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numbers.
if (strcmp(input_mapping_right, "1") == 0) {
draw_text(text_controls_menu_1, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "2") == 0) {
draw_text(text_controls_menu_2, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "3") == 0) {
draw_text(text_controls_menu_3, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "4") == 0) {
draw_text(text_controls_menu_4, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "5") == 0) {
draw_text(text_controls_menu_5, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "6") == 0) {
draw_text(text_controls_menu_6, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "7") == 0) {
draw_text(text_controls_menu_7, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "8") == 0) {
draw_text(text_controls_menu_8, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "9") == 0) {
draw_text(text_controls_menu_9, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "0") == 0) {
draw_text(text_controls_menu_0, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Function keys.
if (strcmp(input_mapping_right, "f1") == 0) {
draw_text(text_controls_menu_f1, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f2") == 0) {
draw_text(text_controls_menu_f2, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f3") == 0) {
draw_text(text_controls_menu_f3, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f4") == 0) {
draw_text(text_controls_menu_f4, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f5") == 0) {
draw_text(text_controls_menu_f5, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f6") == 0) {
draw_text(text_controls_menu_f6, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f7") == 0) {
draw_text(text_controls_menu_f7, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f8") == 0) {
draw_text(text_controls_menu_f8, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f9") == 0) {
draw_text(text_controls_menu_f9, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f10") == 0) {
draw_text(text_controls_menu_f10, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f11") == 0) {
draw_text(text_controls_menu_f11, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "f12") == 0) {
draw_text(text_controls_menu_f12, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Arrow keys.
if (strcmp(input_mapping_right, "_up") == 0) {
draw_text(text_controls_menu_up, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_down") == 0) {
draw_text(text_controls_menu_down, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_left") == 0) {
draw_text(text_controls_menu_left, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "_right") == 0) {
draw_text(text_controls_menu_right, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Special.
if (strcmp(input_mapping_right, "escape") == 0) {
draw_text(text_controls_menu_escape, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "tab") == 0) {
draw_text(text_controls_menu_tab, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "capslock") == 0) {
draw_text(text_controls_menu_capslock, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "lshift") == 0) {
draw_text(text_controls_menu_lshift, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "lcontrol") == 0) {
draw_text(text_controls_menu_lcontrol, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "alt") == 0) {
draw_text(text_controls_menu_alt, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "space") == 0) {
draw_text(text_controls_menu_space, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "rcontrol") == 0) {
draw_text(text_controls_menu_rcontrol, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "rshift") == 0) {
draw_text(text_controls_menu_rshift, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "altgr") == 0) {
draw_text(text_controls_menu_altgr, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "enter") == 0) {
draw_text(text_controls_menu_enter, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "delete") == 0) {
draw_text(text_controls_menu_delete, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "home") == 0) {
draw_text(text_controls_menu_home, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "pageup") == 0) {
draw_text(text_controls_menu_pageup, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "pagedown") == 0) {
draw_text(text_controls_menu_pagedown, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "backspace") == 0) {
draw_text(text_controls_menu_backspace, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "minus") == 0) {
draw_text(text_controls_menu_minus, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "equals") == 0) {
draw_text(text_controls_menu_equals, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "slash") == 0) {
draw_text(text_controls_menu_slash, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "comma") == 0) {
draw_text(text_controls_menu_comma, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "semicolon") == 0) {
draw_text(text_controls_menu_semicolon, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "period") == 0) {
draw_text(text_controls_menu_period, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "tilde") == 0) {
draw_text(text_controls_menu_tilde, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
//Numpad.
if (strcmp(input_mapping_right, "num_1") == 0) {
draw_text(text_controls_menu_num_1, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_2") == 0) {
draw_text(text_controls_menu_num_2, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_3") == 0) {
draw_text(text_controls_menu_num_3, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_4") == 0) {
draw_text(text_controls_menu_num_4, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_5") == 0) {
draw_text(text_controls_menu_num_5, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_6") == 0) {
draw_text(text_controls_menu_num_6, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_7") == 0) {
draw_text(text_controls_menu_num_7, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_8") == 0) {
draw_text(text_controls_menu_num_8, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_9") == 0) {
draw_text(text_controls_menu_num_9, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_0") == 0) {
draw_text(text_controls_menu_num_0, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_slash") == 0) {
draw_text(text_controls_menu_num_slash, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_asterisk") == 0) {
draw_text(text_controls_menu_num_asterisk, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_minus") == 0) {
draw_text(text_controls_menu_num_minus, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_plus") == 0) {
draw_text(text_controls_menu_num_plus, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_delete") == 0) {
draw_text(text_controls_menu_num_delete, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
if (strcmp(input_mapping_right, "num_enter") == 0) {
draw_text(text_controls_menu_num_enter, controls_menu_option_7_x+controls_menu_option_7_offset, 85+5+115, (float)70/255, (float)235/255, (float)70/255, (float)255/255);
}
afterright:
}






