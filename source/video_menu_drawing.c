//Setting drawing target.
al_set_target_bitmap(internal_display);

//If the main menu has faded away, draw video menu.
al_draw_bitmap(bitmap_controls_menu_option, video_menu_option_0_x, 85-46, 0);
al_draw_bitmap(bitmap_controls_menu_option, video_menu_option_1_x, 85-23, 0);
al_draw_bitmap(bitmap_controls_menu_option, video_menu_option_2_x, 85, 0);
al_draw_bitmap(bitmap_controls_menu_option, video_menu_option_3_x, 85+23, 0);
al_draw_bitmap(bitmap_controls_menu_option, video_menu_option_4_x, 85+46, 0);

//Draw selection overlays over options.
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba(video_menu_option_0_alpha, video_menu_option_0_alpha, video_menu_option_0_alpha, video_menu_option_0_alpha), video_menu_option_0_x, 85-46, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba(video_menu_option_1_alpha, video_menu_option_1_alpha, video_menu_option_1_alpha, video_menu_option_1_alpha), video_menu_option_1_x, 85-23, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba(video_menu_option_2_alpha, video_menu_option_2_alpha, video_menu_option_2_alpha, video_menu_option_2_alpha), video_menu_option_2_x, 85, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba(video_menu_option_3_alpha, video_menu_option_3_alpha, video_menu_option_3_alpha, video_menu_option_3_alpha), video_menu_option_3_x, 85+23, 0);
al_draw_tinted_bitmap(bitmap_controls_menu_option_selected, al_map_rgba(video_menu_option_4_alpha, video_menu_option_4_alpha, video_menu_option_4_alpha, video_menu_option_4_alpha), video_menu_option_4_x, 85+46, 0);

//Drawing text on option backgrounds.
draw_text(text_video_menu_resolution, video_menu_option_0_x + 6, 85-41, 1, 1, 1, 1);
draw_text(text_video_menu_window, video_menu_option_1_x + 6, 85-41+(23*1), 1, 1, 1, 1);
draw_text(text_video_menu_refresh, video_menu_option_2_x + 6, 85-41+(23*2), 1, 1, 1, 1);
draw_text(text_video_menu_x, video_menu_option_3_x + 70, 85-41+(23*3), 1, 1, 1, 1);
draw_text(text_video_menu_y, video_menu_option_4_x + 70, 85-41+(23*4), 1, 1, 1, 1);

//Drawing arrows on the last two options.
al_draw_bitmap(bitmap_video_menu_arrow, video_menu_option_3_x + 1, 85-44+(23*3), 0);
al_draw_bitmap(bitmap_video_menu_arrow, video_menu_option_3_x + 219, 85-44+(23*3), ALLEGRO_FLIP_HORIZONTAL);
al_draw_rotated_bitmap(bitmap_video_menu_arrow, 0, 0, video_menu_option_4_x + 18, 85-44+(23*4), ALLEGRO_PI / 2, 0);
al_draw_rotated_bitmap(bitmap_video_menu_arrow, 0, 0, video_menu_option_4_x + 234, 86-44+(23*4), ALLEGRO_PI / 2, ALLEGRO_FLIP_HORIZONTAL);



//Drawing resolution text based on what resolution is currently selected.
if (video_menu_option_0_option == 0) {
draw_text(text_video_menu_270, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 1) {
draw_text(text_video_menu_540, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 2) {
draw_text(text_video_menu_810, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 3) {
draw_text(text_video_menu_1080, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 4) {
draw_text(text_video_menu_1350, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 5) {
draw_text(text_video_menu_1620, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 6) {
draw_text(text_video_menu_1890, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 7) {
draw_text(text_video_menu_2160, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 8) {
draw_text(text_video_menu_2700, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 9) {
draw_text(text_video_menu_3240, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 10) {
draw_text(text_video_menu_3780, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}
if (video_menu_option_0_option == 11) {
draw_text(text_video_menu_4320, video_menu_option_0_x + 41, 85-41, 1, 1, 1, 1);
}

//Drawing window mode text based on variable.
if (video_menu_option_1_option == 0) {
draw_text(text_video_menu_windowed, video_menu_option_1_x + 40, 85-41+(23*1), 1, 1, 1, 1);
}

if (video_menu_option_1_option == 1) {
draw_text(text_video_menu_borderless, video_menu_option_1_x + 40, 85-41+(23*1), 1, 1, 1, 1);
}

if (video_menu_option_1_option == 2) {
draw_text(text_video_menu_fullscreen, video_menu_option_1_x + 40, 85-41+(23*1), 1, 1, 1, 1);
}

//Drawing refresh rate option.
if (video_menu_option_2_option == 0) {
draw_text(text_video_menu_30, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 1) {
draw_text(text_video_menu_40, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 2) {
draw_text(text_video_menu_50, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 3) {
draw_text(text_video_menu_60, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
al_draw_bitmap(bitmap_lock, video_menu_option_2_x + 85, 85-44+(23*2), 0);
}
if (video_menu_option_2_option == 4) {
draw_text(text_video_menu_75, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 5) {
draw_text(text_video_menu_100, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 6) {
draw_text(text_video_menu_120, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 7) {
draw_text(text_video_menu_144, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 8) {
draw_text(text_video_menu_165, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 9) {
draw_text(text_video_menu_200, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}
if (video_menu_option_2_option == 10) {
draw_text(text_video_menu_240, video_menu_option_2_x + 41, 85-41+(23*2), 1, 1, 1, 1);
}


//If the selected option is 3 or 4, draw a square around the screen to show where it's borders are.
if (chosen_option == 3) {
if (video_menu_selected_option == 3) {
al_draw_line(0, 0, 480, 0, al_map_rgb(70, 235, 70), 0);
al_draw_line(480, 0, 480, 269, al_map_rgb(70, 235, 70), 0);
al_draw_line(480, 269, 0, 269, al_map_rgb(70, 235, 70), 0);
al_draw_line(1, 269, 1, 0, al_map_rgb(70, 235, 70), 0);
}
if (video_menu_selected_option == 4) {
al_draw_line(0, 0, 480, 0, al_map_rgb(70, 235, 70), 0);
al_draw_line(480, 0, 480, 269, al_map_rgb(70, 235, 70), 0);
al_draw_line(480, 269, 0, 269, al_map_rgb(70, 235, 70), 0);
al_draw_line(1, 269, 1, 0, al_map_rgb(70, 235, 70), 0);
}
}