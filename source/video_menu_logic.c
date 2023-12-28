//Counting down the timer if the trigger is on.
if (video_menu_move_trigger == 1) {
timer_video_menu_move -= delta_time;
}

//Limiting how low or high timer_video.... can get.
if (timer_video_menu_move < 0) {
timer_video_menu_move = 0;
video_menu_move_trigger = 0;
}

//Moving selection up and down with arrow keys.
if (chosen_option == 3) {
if (press_up == 1) {
video_menu_selected_option -= 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
if (press_down == 1) {
video_menu_selected_option += 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
}

//Limiting selection value so it doesn't go too high or low.
if (video_menu_selected_option < 0) {
video_menu_selected_option = 0;
}
if (video_menu_selected_option > 4) {
video_menu_selected_option = 4;
}

//Moving video menu options to the left when the timer is running.
if (chosen_option == 3) {
if (timer_video_menu_move <= sec*0.875) {
video_menu_option_0_x -= 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*1))) {
video_menu_option_1_x -= 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*2))) {
video_menu_option_2_x -= 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*3))) {
video_menu_option_3_x -= 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*4))) {
video_menu_option_4_x -= 0.2*delta_time;
}
}

//Moving options back to the right when in the main menu.
if (chosen_option == -1) {
if (timer_video_menu_move <= sec*0.875) {
video_menu_option_0_x += 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*1))) {
video_menu_option_1_x += 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*2))) {
video_menu_option_2_x += 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*3))) {
video_menu_option_3_x += 0.2*delta_time;
}
if (timer_video_menu_move <= sec*(0.875-(0.075*4))) {
video_menu_option_4_x += 0.2*delta_time;
}
}



//Limiting video menu options so they cant move too far right or left.
if (video_menu_option_0_x > 480.0) {
video_menu_option_0_x = 480.0;
}
if (video_menu_option_1_x > 480.0) {
video_menu_option_1_x = 480.0;
}
if (video_menu_option_2_x > 480.0) {
video_menu_option_2_x = 480.0;
}
if (video_menu_option_3_x > 480.0) {
video_menu_option_3_x = 480.0;
}
if (video_menu_option_4_x > 480.0) {
video_menu_option_4_x = 480.0;
}

if (video_menu_option_0_x < 122.0) {
video_menu_option_0_x = 122.0;
}
if (video_menu_option_1_x < 122.0) {
video_menu_option_1_x = 122.0;
}
if (video_menu_option_2_x < 122.0) {
video_menu_option_2_x = 122.0;
}
if (video_menu_option_3_x < 122.0) {
video_menu_option_3_x = 122.0;
}
if (video_menu_option_4_x < 122.0) {
video_menu_option_4_x = 122.0;
}
 

//Changing alpha value of selection overlay depending on what option is selected.
if (video_menu_selected_option == 0) {
video_menu_option_0_alpha += main_menu_option_fade_rate*delta_time;
} else {
video_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
}

if (video_menu_selected_option == 1) {
video_menu_option_1_alpha += main_menu_option_fade_rate*delta_time;
} else {
video_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
}

if (video_menu_selected_option == 2) {
video_menu_option_2_alpha += main_menu_option_fade_rate*delta_time;
} else {
video_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
}

if (video_menu_selected_option == 3) {
video_menu_option_3_alpha += main_menu_option_fade_rate*delta_time;
} else {
video_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
}

if (video_menu_selected_option == 4) {
video_menu_option_4_alpha += main_menu_option_fade_rate*delta_time;
} else {
video_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
}

//Limiting selection overlay alpha values.
if (video_menu_option_0_alpha > 255) {
video_menu_option_0_alpha = 255;
}
if (video_menu_option_0_alpha < 0) {
video_menu_option_0_alpha = 0;
}

if (video_menu_option_1_alpha > 255) {
video_menu_option_1_alpha = 255;
}
if (video_menu_option_1_alpha < 0) {
video_menu_option_1_alpha = 0;
}

if (video_menu_option_2_alpha > 255) {
video_menu_option_2_alpha = 255;
}
if (video_menu_option_2_alpha < 0) {
video_menu_option_2_alpha = 0;
}

if (video_menu_option_3_alpha > 255) {
video_menu_option_3_alpha = 255;
}
if (video_menu_option_3_alpha < 0) {
video_menu_option_3_alpha = 0;
}

if (video_menu_option_4_alpha > 255) {
video_menu_option_4_alpha = 255;
}
if (video_menu_option_4_alpha < 0) {
video_menu_option_4_alpha = 0;
}


//Navigating resolution options with left and right keys.
if (chosen_option == 3) {
if (video_menu_selected_option == 0) {
if (press_left == 1) {
video_menu_option_0_option -= 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
if (press_right == 1) {
video_menu_option_0_option += 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
}}

//Navigating window mode options with left and right keys.
if (chosen_option == 3) {
if (video_menu_selected_option == 1) {
if (press_left == 1) {
video_menu_option_1_option -= 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
if (press_right == 1) {
video_menu_option_1_option += 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
}}


//Navigating refresh rate options with left and right keys.
if (chosen_option == 3) {
if (video_menu_selected_option == 2) {
if (press_left == 1) {
video_menu_option_2_option -= 0;
}
if (press_right == 1) {
video_menu_option_2_option += 0;
}
}}

//Limiting so you can't select a resolution higher or lower than the limit of what exists.
if (video_menu_option_0_option > 11) {
video_menu_option_0_option = 11;
}
if (video_menu_option_0_option < 0) {
video_menu_option_0_option = 0;
}


//Limiting so you can't select a window mode higher or lower than the limit of what exists.
if (video_menu_option_1_option > 2) {
video_menu_option_1_option = 2;
}
if (video_menu_option_1_option < 0) {
video_menu_option_1_option = 0;
}

//Limiting so you can't select a refresh rate higher or lower than the limit of what exists.
if (video_menu_option_2_option > 10) {
video_menu_option_2_option = 10;
}
if (video_menu_option_2_option < 0) {
video_menu_option_2_option = 0;
}

//Changing resolution if user chooses a selected option.
if (input_select() == 1) {
if (chosen_option == 3) {
if (timer_video_menu_move < sec*0.5) {
if (video_menu_selected_option == 0) {

internal_display_x_offset = 0; //Resetting offset when changing resolution. 
internal_display_y_offset = 0; //Resetting offset when changing resolution. 

if (video_menu_option_0_option == 0) {
external_display_width = 480;
external_display_height = 270;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 1) {
external_display_width = 960;
external_display_height = 540;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 2) {
external_display_width = 1440;
external_display_height = 810;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 3) {
external_display_width = 1920;
external_display_height = 1080;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 4) {
external_display_width = 2400;
external_display_height = 1350;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 5) {
external_display_width = 2880;
external_display_height = 1620;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 6) {
external_display_width = 3360;
external_display_height = 1890;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 7) {
external_display_width = 3840;
external_display_height = 2160;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 8) {
external_display_width = 4800;
external_display_height = 2700;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 9) {
external_display_width = 5760;
external_display_height = 3240;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 10) {
external_display_width = 6720;
external_display_height = 3780;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
if (video_menu_option_0_option == 11) {
external_display_width = 7680;
external_display_height = 4320;
al_resize_display(external_display, external_display_width, external_display_height);
save_video();
}
}
}}}


if (input_select() == 1) {
if (chosen_option == 3) {
if (timer_video_menu_move < sec*0.5) {
if (video_menu_selected_option == 2) {

if (video_menu_option_2_option == 0) {
target_framerate = 30;
save_video();
} 
if (video_menu_option_2_option == 1) {
target_framerate = 40;
save_video();
} 
if (video_menu_option_2_option == 2) {
target_framerate = 50;
save_video();
} 
if (video_menu_option_2_option == 3) {
target_framerate = 60;
save_video();
} 
if (video_menu_option_2_option == 4) {
target_framerate = 75;
save_video();
} 
if (video_menu_option_2_option == 5) {
target_framerate = 100;
save_video();
} 
if (video_menu_option_2_option == 6) {
target_framerate = 120;
save_video();
} 
if (video_menu_option_2_option == 7) {
target_framerate = 144;
save_video();
} 
if (video_menu_option_2_option == 8) {
target_framerate = 165;
save_video();
} 
if (video_menu_option_2_option == 9) {
target_framerate = 200;
save_video();
} 
if (video_menu_option_2_option == 10) {
target_framerate = 240;
save_video();
}

}}}}

//If on x-offset option, change x offset with right and left arrow keys.
if (chosen_option == 3) {
if (timer_video_menu_move < sec*0.5) {
if (video_menu_selected_option == 3) {

if (press_right == 1) {
internal_display_x_offset += 50;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
if (press_left == 1) {
internal_display_x_offset -= 50;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}

}
}
}

//If on y-offset option, change t offset with right and left arrow keys.
if (chosen_option == 3) {
if (timer_video_menu_move < sec*0.5) {
if (video_menu_selected_option == 4) {

if (press_right == 1) {
internal_display_y_offset += 50;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}
if (press_left == 1) {
internal_display_y_offset -= 50;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}

}
}
}


//Setting string representation of video settings based on video_menu_option_x_option variables.
if (video_menu_option_0_option == 0) {
strcpy(text_video_menu_option_0_option, "480x270\0");
}
if (video_menu_option_0_option == 1) {
strcpy(text_video_menu_option_0_option, "960x540\0");
}
if (video_menu_option_0_option == 2) {
strcpy(text_video_menu_option_0_option, "1440x810\0");
}
if (video_menu_option_0_option == 3) {
strcpy(text_video_menu_option_0_option, "1920x1080\0");
}
if (video_menu_option_0_option == 4) {
strcpy(text_video_menu_option_0_option, "2400x1350\0");
}
if (video_menu_option_0_option == 5) {
strcpy(text_video_menu_option_0_option, "2880x1620\0");
}
if (video_menu_option_0_option == 6) {
strcpy(text_video_menu_option_0_option, "3360x1890\0");
}
if (video_menu_option_0_option == 7) {
strcpy(text_video_menu_option_0_option, "3840x2160\0");
}
if (video_menu_option_0_option == 8) {
strcpy(text_video_menu_option_0_option, "4800x2700\0");
}
if (video_menu_option_0_option == 9) {
strcpy(text_video_menu_option_0_option, "5760x3240\0");
}
if (video_menu_option_0_option == 10) {
strcpy(text_video_menu_option_0_option, "6720x3780\0");
}
if (video_menu_option_0_option == 11) {
strcpy(text_video_menu_option_0_option, "7680x4320\0");
}

if (video_menu_option_1_option == 0) {
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (video_menu_option_1_option == 1) {
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (video_menu_option_1_option == 2) {
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}

if (video_menu_option_2_option == 0) {
strcpy(text_video_menu_option_2_option, "30hz\0");
}
if (video_menu_option_2_option == 1) {
strcpy(text_video_menu_option_2_option, "40hz\0");
}
if (video_menu_option_2_option == 2) {
strcpy(text_video_menu_option_2_option, "50hz\0");
}
if (video_menu_option_2_option == 3) {
strcpy(text_video_menu_option_2_option, "60hz\0");
}
if (video_menu_option_2_option == 4) {
strcpy(text_video_menu_option_2_option, "75hz\0");
}
if (video_menu_option_2_option == 5) {
strcpy(text_video_menu_option_2_option, "100hz\0");
}
if (video_menu_option_2_option == 6) {
strcpy(text_video_menu_option_2_option, "120hz\0");
}
if (video_menu_option_2_option == 7) {
strcpy(text_video_menu_option_2_option, "144hz\0");
}
if (video_menu_option_2_option == 8) {
strcpy(text_video_menu_option_2_option, "165hz\0");
}
if (video_menu_option_2_option == 9) {
strcpy(text_video_menu_option_2_option, "200hz\0");
}
if (video_menu_option_2_option == 10) {
strcpy(text_video_menu_option_2_option, "240hz\0");
}

//Changing window mode if user chooses a selected windowing option.
if (input_select() == 1) {
if (chosen_option == 3) {
if (timer_video_menu_move < sec*0.5) {
if (video_menu_selected_option == 1) {

if (video_menu_option_1_option == 0) {
al_destroy_display(external_display);
al_set_new_display_flags(ALLEGRO_WINDOWED);
external_display = al_create_display(external_display_width, external_display_height);
save_video();
window_mode = 0;
}
if (video_menu_option_1_option == 1) {
al_destroy_display(external_display);
al_set_new_display_flags(ALLEGRO_NOFRAME);
external_display = al_create_display(external_display_width, external_display_height); 
save_video();
window_mode = 1;
}
if (video_menu_option_1_option == 2) {
al_destroy_display(external_display);
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
external_display = al_create_display(external_display_width, external_display_height);  
save_video();
window_mode = 2;
}


}
}}}