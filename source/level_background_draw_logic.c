//Drawing backgrounds based on a few variables.
if (current_cutscene_part == -1) {



//Setting drawing target.
al_set_target_bitmap(bitmap_gameplay_display);

if (current_level == 1) {
al_draw_bitmap(bitmap_level1_background, 0, 0, 0);
}

//Reducing alpha level of black screen 
level_black_screen_alpha -= 0.01*delta_time;

//Limiting transparency so it doesn't go below 0.
if (level_black_screen_alpha < 0) {
level_black_screen_alpha = 0;
}

}