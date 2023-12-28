//Only run this code if we are in menu and not in gameplay mode.
if (current_cutscene_part != -1) {


//Counting down move trigger. 
if (timer_audio_menu_move > 0) {
timer_audio_menu_move -= 1;
}

//Moving option into view as timer counts down.
if (timer_audio_menu_move == 0) {
if (chosen_option == 4) {
audio_menu_option_0_x -= 36;
if (audio_menu_option_0_x < 122) { //Clamping horizontal position of option.
audio_menu_option_0_x = 122;
}
}
}

//Moving option out of view.
if (chosen_option != 4) {
audio_menu_option_0_x += 36;
if (audio_menu_option_0_x > 480) { //Clamping position of option on screen.
audio_menu_option_0_x = 480;
}
}

//Changing option with left and right keys. 
if (chosen_option == 4) {
if (press_left == 1) {

i = 64;
while (i < 72) {

if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}

i += 1;
}



audio_menu_option_0_option -= 1;
}
if (press_right == 1) {

i = 64;
while (i < 72) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}

i += 1;
}

audio_menu_option_0_option += 1;
}
}

//The audio option selected will be clamped. 
if (audio_menu_option_0_option < 0) {
audio_menu_option_0_option = 0;
}
if (audio_menu_option_0_option > 10) {
audio_menu_option_0_option = 10;
}

//Saving new volume level in file.
if (chosen_option == 4) {
if (press_right | press_left) {
fstream = fopen("user_data/audio", "rb+");
putc(audio_menu_option_0_option, fstream);
fclose(fstream);
}}


//Creating string representation of the current audio level. This string will be drawn on screen.
sprintf(text_audio_menu_option_0_option, "MASTER VOLUME: %d", audio_menu_option_0_option); 


//Setting target bitmap to draw on.
al_set_target_bitmap(internal_display);

//Drawing first option in audio menu.
al_draw_bitmap(bitmap_controls_menu_option, audio_menu_option_0_x, 85-46, 0);

//Drawing text on top of it. 
if (audio_menu_option_0_x == 122) {
draw_text(text_audio_menu_option_0_option, audio_menu_option_0_x + 38, 85-41, 1, 1, 1, 1);
}

//Drawing menu arrows.
if (audio_menu_option_0_x == 122) {
al_draw_bitmap(bitmap_video_menu_arrow, 123, 85-44, 0);
al_draw_bitmap(bitmap_video_menu_arrow, 341, 85-44, ALLEGRO_FLIP_HORIZONTAL);
}

} //Are we in gameplay mode or in main menu?