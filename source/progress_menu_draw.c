//Setting draw target.
if (internal_display) {
al_set_target_bitmap(internal_display);
}

//Drawing background.
al_draw_bitmap(bitmap_progress_menu_background, progress_menu_background_x/64, 0, 0);


//Drawing hours, minutes and seconds played.
if (chosen_option == 1) {
draw_text_small(text_gametime, progress_menu_background_x + 34+102 - 59, 20, 1, 1, 1, 1);
draw_text_small(text_gametime_hours, progress_menu_background_x + 126 + 80 - 59, 20, 1, 1, 1, 1);
draw_text_small(text_gametime_minutes, progress_menu_background_x + 210 + 80 - 59, 20, 1, 1, 1, 1);
draw_text_small(text_gametime_seconds, progress_menu_background_x + 298 + 80 - 59, 20, 1, 1, 1, 1);
}



//Drawing scores. 
draw_text(text_high_scores, progress_menu_background_x + 77, 40, 1, 1, 1, 1);
draw_text_small(text_first_place, progress_menu_background_x + 92, 40 + 25, 1, 1, 1, 1);
draw_text_small(text_second_place, progress_menu_background_x + 92, 50 + 25, 1, 1, 1, 1);
draw_text_small(text_third_place, progress_menu_background_x + 92, 60 + 25, 1, 1, 1, 1);
draw_text_small(text_fourth_place, progress_menu_background_x + 92, 70 + 25, 1, 1, 1, 1);
draw_text_small(text_fifth_place, progress_menu_background_x + 92, 80 + 25, 1, 1, 1, 1);
draw_text_small(text_sixth_place, progress_menu_background_x + 92, 90 + 25, 1, 1, 1, 1);
draw_text_small(text_seventh_place, progress_menu_background_x + 92, 100 + 25, 1, 1, 1, 1);
draw_text_small(text_eigth_place, progress_menu_background_x + 92, 110 + 25, 1, 1, 1, 1);
draw_text_small(text_ninth_place, progress_menu_background_x + 92, 120 + 25, 1, 1, 1, 1);
draw_text_small(text_tenth_place, progress_menu_background_x + 92, 130 + 25, 1, 1, 1, 1);
draw_text_small(text_eleventh_place, progress_menu_background_x + 92, 140 + 25, 1, 1, 1, 1);
draw_text_small(text_twelfth_place, progress_menu_background_x + 92, 150 + 25, 1, 1, 1, 1);
draw_text_small(text_thirteenth_place, progress_menu_background_x + 92, 160 + 25, 1, 1, 1, 1);
draw_text_small(text_fourteenth_place, progress_menu_background_x + 92, 170 + 25, 1, 1, 1, 1);
draw_text_small(text_fifteenth_place, progress_menu_background_x + 92, 180 + 25, 1, 1, 1, 1);


//Drawing achievements title.
draw_text(text_achievements, progress_menu_background_x + 280, 40, 1, 1, 1, 1);


//Drawing achievements as locked or unlocked depending on achievement_byte.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
if ((achievements_byte & (1 << 7))) { //Achievement #1.
draw_text_small(text_achievement_1, 245, 65, 1, 1, 1, 1);
draw_text_small(text_achievement_1_text, 245, 65 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_1, 245, 65, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_1_text, 245, 65 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & (1 << 6))) { //Achievement #2.
draw_text_small(text_achievement_2, 245, 65 + 20, 1, 1, 1, 1);
draw_text_small(text_achievement_2_text, 245, 65 + 20 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_2, 245, 65 + 20, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_2_text, 245, 65 + 20 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & (1 << 5))) { //Achievement #3.
draw_text_small(text_achievement_3, 245, 65 + 40, 1, 1, 1, 1);
draw_text_small(text_achievement_3_text, 245, 65 + 40 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_3, 245, 65 + 40, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_3_text, 245, 65 + 40 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & (1 << 4))) { //Achievement #4.
draw_text_small(text_achievement_4, 245, 65 + 60, 1, 1, 1, 1);
draw_text_small(text_achievement_4_text, 245, 65 + 60 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_4, 245, 65 + 60, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_4_text, 245, 65 + 60 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & (1 << 3))) { //Achievement #5.
draw_text_small(text_achievement_5, 245, 65 + 80, 1, 1, 1, 1);
draw_text_small(text_achievement_5_text, 245, 65 + 80 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_5, 245, 65 + 80, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_5_text, 245, 65 + 80 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & (1 << 2))) { //Achievement #6.
draw_text_small(text_achievement_6, 245, 65 + 100, 1, 1, 1, 1);
draw_text_small(text_achievement_6_text, 245, 65 + 100 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_6, 245, 65 + 100, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_6_text, 245, 65 + 100 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & (1 << 1))) { //Achievement #7.
draw_text_small(text_achievement_7, 245, 65 + 120, 1, 1, 1, 1);
draw_text_small(text_achievement_7_text, 245, 65 + 120 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_7, 245, 65 + 120, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_7_text, 245, 65 + 120 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}

if ((achievements_byte & 1)) { //Achievement #8.
draw_text_small(text_achievement_8, 245, 65 + 140, 1, 1, 1, 1);
draw_text_small(text_achievement_8_text, 245, 65 + 140 + 8, 1, 1, 1, 1);
} else {
draw_text_small(text_achievement_8, 245, 65 + 140, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
draw_text_small(text_achievement_8_text, 245, 65 + 140 + 8, locked_achievement_text_alpha, locked_achievement_text_alpha, locked_achievement_text_alpha, 1);
}
}}


//Drawing locked/unlocked text depending on if the achievement is locked or not.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
if (player_selected == 1) {
if (!(achievements_byte & (1 << 7))) { //Achievement #1. Checking if first achievement is unlocked.
draw_text_small(text_locked, 305, 65, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 305, 65, 0, 0.8, 0, 1);
}

if (!(achievements_byte & (1 << 6))) { //Achievement #2. Checking if first achievement is unlocked.
draw_text_small(text_locked, 329, 65 + 20, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 329, 65 + 20, 0, 0.8, 0, 1);
}

if (!(achievements_byte & (1 << 5))) { //Achievement #3. Checking if first achievement is unlocked.
draw_text_small(text_locked, 345, 65 + 40, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 345, 65 + 40, 0, 0.8, 0, 1);
}

if (!(achievements_byte & (1 << 4))) { //Achievement #4. Checking if first achievement is unlocked.
draw_text_small(text_locked, 337, 65 + 60, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 337, 65 + 60, 0, 0.8, 0, 1);
}

if (!(achievements_byte & (1 << 3))) { //Achievement #5. Checking if first achievement is unlocked.
draw_text_small(text_locked, 340, 65 + 80, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 340, 65 + 80, 0, 0.8, 0, 1);
}

if (!(achievements_byte & (1 << 2))) { //Achievement #6. Checking if first achievement is unlocked.
draw_text_small(text_locked, 316, 65 + 100, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 316, 65 + 100, 0, 0.8, 0, 1);
}

if (!(achievements_byte & (1 << 1))) { //Achievement #7. Checking if first achievement is unlocked.
draw_text_small(text_locked, 346, 65 + 120, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 346, 65 + 120, 0, 0.8, 0, 1);
}

if (!(achievements_byte & 1)) { //Achievement #8. Checking if first achievement is unlocked.
draw_text_small(text_locked, 329, 65 + 140, 0.8, 0, 0, 1);
} else {
draw_text_small(text_unlocked, 329, 65 + 140, 0, 0.8, 0, 1);
}

} //Is a player selected in the menu?
}
}


//Drawing lines between the achievements to show what is what.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
al_draw_line(243, 62, 448, 62, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 82, 448, 82, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 102, 448, 102, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 122, 448, 122, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 142, 448, 142, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 162, 448, 162, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 182, 448, 182, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 202, 448, 202, al_map_rgb(136, 136, 144), 0);
al_draw_line(243, 222, 448, 222, al_map_rgb(136, 136, 144), 0);
}}

//Devtest.
/*
f = 7;
while (f > -1) {
if (!(achievements_byte & (1 << f))) {
printf("0");
}
if (achievements_byte & (1 << f)) {
printf("1");
}
f -= 1;
}
printf("\n");
*/
//Drawing currently selected players name on top of screen.
//If there is no player, NO DATA will be drawn instead and in the color red.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
if (strstr(text_name_temp, "NO DATA") == NULL) {
draw_text(text_name_temp, 240-(name_x_position*5), 1, 1, 1, 1, 1);
}
if (strstr(text_name_temp, "NO DATA") != NULL) {
draw_text(text_name_temp, 205, 1, 1, 0, 0, 1);
}

}}


//Drawing arrows to the left and right of the currently selected players name.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
al_draw_bitmap(bitmap_video_menu_arrow, 130, 1, 0);
al_draw_bitmap(bitmap_video_menu_arrow, 335, 1, ALLEGRO_FLIP_HORIZONTAL);
}}


//Drawing what player is currently selected. There can be at most 16 players.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
draw_text(text_selected_slot, 162-132, 255, 1, 1, 1, 1);
}}


/////Only run the below code if a player is actually selected.
if (player_selected != 0) {

//Drawing line below text that shows how long you have held the delete key for.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
al_draw_filled_rectangle(184, 256, 184 + (60.0*4.75), 256 + 9, al_map_rgb(136, 136, 144));
}}

//Drawing line below text that shows how long you have held the delete key for.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
al_draw_filled_rectangle(184, 256, 184 + delete_hold*4.75, 256 + 9, al_map_rgb(255*0.8, 0, 0));
}}

//Drawing text that tells the player how to delete a save file.
if (chosen_option == 1) {
if (progress_menu_background_x < 10) {
draw_text_small(text_hold_delete_to_permanently_delete_user, 185, 255+2, 0.8, 0, 0, 1);
}}
}
