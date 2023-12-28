//If the title screen is done fading away, run this file.
if (title_fade_back == 1) {

//Setting drawing target.
al_set_target_bitmap(internal_display);


//Tinting blue background bitmap based on if the option is selected or not.
al_set_target_bitmap(bitmap_story_option_background);
al_clear_to_color(al_map_rgb(117, 150, 221));
al_set_target_bitmap(internal_display);

//Drawing title background.
//al_draw_bitmap(bitmap_title_background, (480*0.5)-103, title_position-6, 0);

//Drawing the option backgrounds.
al_draw_bitmap(bitmap_main_menu_option, main_menu_option_0_x, 85, 0);
al_draw_bitmap(bitmap_main_menu_option, main_menu_option_1_x, 85+(23*1), 0);
al_draw_bitmap(bitmap_main_menu_option, main_menu_option_2_x, 85+(23*2), 0);
al_draw_bitmap(bitmap_main_menu_option, main_menu_option_3_x, 85+(23*3), 0);
al_draw_bitmap(bitmap_main_menu_option, main_menu_option_4_x, 85+(23*4), 0);
al_draw_bitmap(bitmap_main_menu_option, main_menu_option_5_x, 85+(23*5), 0);

//Drawing the selected option backgrounds depending on.
if (chosen_option != -2) { //The blue box should not be drawn if we have selected the story option.
if (title_position > 43) {
al_draw_tinted_bitmap(bitmap_story_option_background, al_map_rgba((int)main_menu_option_n1_alpha, (int)main_menu_option_n1_alpha, (int)main_menu_option_n1_alpha, (int)main_menu_option_n1_alpha), 139, 40, 0);
}}
al_draw_tinted_bitmap(bitmap_main_menu_option_selected, al_map_rgba((int)main_menu_option_0_alpha, (int)main_menu_option_0_alpha, (int)main_menu_option_0_alpha, (int)main_menu_option_0_alpha), main_menu_option_0_x, 85, 0);
al_draw_tinted_bitmap(bitmap_main_menu_option_selected, al_map_rgba((int)main_menu_option_1_alpha, (int)main_menu_option_1_alpha, (int)main_menu_option_1_alpha, (int)main_menu_option_1_alpha), main_menu_option_1_x, 85+(23*1), 0);
al_draw_tinted_bitmap(bitmap_main_menu_option_selected, al_map_rgba((int)main_menu_option_2_alpha, (int)main_menu_option_2_alpha, (int)main_menu_option_2_alpha, (int)main_menu_option_2_alpha), main_menu_option_2_x, 85+(23*2), 0);
al_draw_tinted_bitmap(bitmap_main_menu_option_selected, al_map_rgba((int)main_menu_option_3_alpha, (int)main_menu_option_3_alpha, (int)main_menu_option_3_alpha, (int)main_menu_option_3_alpha), main_menu_option_3_x, 85+(23*3), 0);
al_draw_tinted_bitmap(bitmap_main_menu_option_selected, al_map_rgba((int)main_menu_option_4_alpha, (int)main_menu_option_4_alpha, (int)main_menu_option_4_alpha, (int)main_menu_option_4_alpha), main_menu_option_4_x, 85+(23*4), 0);
al_draw_tinted_bitmap(bitmap_main_menu_option_selected, al_map_rgba((int)main_menu_option_5_alpha, (int)main_menu_option_5_alpha, (int)main_menu_option_5_alpha, (int)main_menu_option_5_alpha), main_menu_option_5_x, 85+(23*5), 0);

//Drawing options text.
draw_text(text_play, main_menu_option_0_x+40, 90, 1, 1, 1, 1);
draw_text(text_scoreboard, main_menu_option_1_x+18, 90+(23*1), 1, 1, 1, 1);
draw_text(text_controls, main_menu_option_2_x+18, 90+(23*2), 1, 1, 1, 1);
draw_text(text_video, main_menu_option_3_x+35, 90+(23*3), 1, 1, 1, 1);
draw_text(text_audio, main_menu_option_4_x+35, 90+(23*4), 1, 1, 1, 1);
draw_text(text_quit, main_menu_option_5_x+40, 90+(23*5), 1, 1, 1, 1);


}