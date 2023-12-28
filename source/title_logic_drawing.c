if (chosen_option != 0) { //If you have not yet pressed the play button the title will be shown.



//None of the logic (almost) in this file will run if this value changes to 1.
if (ignore_title_screen_logic == 0) {


//Setting the target bitmap.
al_set_target_bitmap(internal_display);

//Drawing planet background.
if (title_fade_back == 0) {
al_draw_bitmap(bitmap_title_planet, 0, 0, 0);
}

//If this variable turns to 1, the title screen will no longer be drawn on screen.
if (title_fade_back == 0) {

//Drawing "press any button" text.
draw_text(press_any_key_text, 171, (260/2)-3,  (255.0/255.0)*press_any_key_alpha, (255.0/255.0)*press_any_key_alpha, (255.0/255.0)*press_any_key_alpha, press_any_key_alpha);
}


//Pressing a key will change "pressed_any_key" variable to "1". This will initiate transition to main menu.
if (press_anykey == 1) {
pressed_any_key = 1;
timer_press_any_key_alpha = sec*0.17;
al_play_sample_instance(array_sample_instance[130]);
} 


//If the user has not pressed any key the text should still fade in and out but slowly instead.
if (pressed_any_key == 0) {


timer_press_any_key_alpha -= delta_time;
if (timer_press_any_key_alpha < 0) {
press_any_key_alpha_mode = !press_any_key_alpha_mode;
timer_press_any_key_alpha = sec*1.2;
}

if (press_any_key_alpha_mode == 0) { //Decreasing alpha level based on variable.
press_any_key_alpha -= 0.000058*delta_time;
}
if (press_any_key_alpha_mode == 1) { //Decreasing alpha level based on variable.
press_any_key_alpha += 0.000058*delta_time;
}

if (press_any_key_alpha > 1.0) { //Limiting alpha value of number representing the transparency of the press any key prompt on the main menu.
press_any_key_alpha = 1.0;
}

if (press_any_key_alpha < 0.2) { //Limiting alpha value of number representing the transparency of the press any key prompt on the main menu.
press_any_key_alpha = 0.2;
}

}

//If the user has pressed a key, run this giant if statement. This includes the entire transition to the main menu.
if (pressed_any_key == 1) {

timer_press_any_key_alpha -= delta_time;
if (timer_press_any_key_alpha < 0) {
press_any_key_alpha_mode = !press_any_key_alpha_mode;
timer_press_any_key_alpha = sec*0.17;
}

if (press_any_key_alpha_mode == 0) { //Decreasing alpha level based on variable.
press_any_key_alpha -= 0.00065*delta_time;
}
if (press_any_key_alpha_mode == 1) { //Decreasing alpha level based on variable.
press_any_key_alpha += 0.00065*delta_time;
}

if (press_any_key_alpha > 1.0) { //Limiting alpha value of number representing the transparency of the press any key prompt on the main menu.
press_any_key_alpha = 1.0;
}

if (press_any_key_alpha < 0.0) {//Limiting alpha value of number representing the transparency of the press any key prompt on the main menu.
press_any_key_alpha = 0.0;
}

//Counting down the fade away timer. Once this one hits zero, the screen will start to turn black.
timer_title_fade_away -= delta_time;
if (timer_title_fade_away < 0) {
if (title_fade_back == 0) {
title_black_screen_alpha += 0.05 * delta_time;
}
if (title_black_screen_alpha > 255.0) { //Limiting the alpha level of black screen.
title_black_screen_alpha = 255.0;
title_fade_back = 1; //This means the black screen will start to fade away again.
}

//If title is supposed to fade back, start delay timer.
if (title_fade_back == 1) {
timer_title_fade_back -= delta_time;
}

//If "title_fade_back" is 1, and timer_title_fade_back is less than 0, Start fading the black screen back again.
if (title_fade_back == 1) {
if (timer_title_fade_back < 0) {
title_black_screen_alpha -= 0.05 * delta_time;
}}

if (title_black_screen_alpha < 0.0) { //Making sure alpha value doesn't go lelow 0.
title_black_screen_alpha = 0.0;
}
al_draw_tinted_bitmap(bitmap_black_screen, al_map_rgba(255, 255, 255, (int)title_black_screen_alpha), 0, 0, 0); //Drawing the black screen on the title screen.
}

//If the black screen has faded away again completely, the title screen logic will stop running forever.
if (title_black_screen_alpha == 0.0) {
if (title_fade_back == 1) {
ignore_title_screen_logic = 1;
}}

//If the black screen has started fading IN, start moving and scaling the title to it's new position.
if (timer_title_fade_away < 0) {
if (title_position < 44) { 
title_position = 44;
}
title_position -= 0.005*delta_time;
}


//Shrinking title line until it disappears. This will start to happen when the screen fades away.
if (timer_title_fade_away < 0) {
title_line_x += 0.035*delta_time;
}

//Line disappears once it's short enough.
if (title_line_x > 95.0) {
title_line_no_draw = 1;
}


}
}

//Moving title up when in any menu that isn't the main menu.
if (chosen_option != -1) {
title_position -= 0.05*delta_time;
}

//Limiting how far up title can go in any non main menu except progress and story, those menus has different limits.
if (chosen_option != -1) {
if (chosen_option != -2) {
if (chosen_option != 1) {
if (title_position < 4) { 
title_position = 4;
}}}}

//Limiting how far up title can move up in progress menu / Story menu.
if (chosen_option == 1) {
if (title_position < -30) { 
title_position = -30;
}}

//Story menu limit. How far can title move up.
if (chosen_option == -2) {
if (title_position < -30) { 
title_position = -30;
}}

//If chosen option is -1, count timer down. else, cap it to max value.
if (chosen_option == -1) {
timer_position_limit -= delta_time;
} else {
timer_position_limit = sec*0.75;
}


//Moving title down when in main menu.
if (chosen_option == -1) {
if (timer_position_limit < sec*0.45) {
if (timer_title_fade_back <= 0) {
title_position += 0.05*delta_time;
}}}

//Limiting how far down the title will go in main menu.
if (chosen_option == -1) {
if (timer_title_fade_back <= 0) {
if (title_position > 44.0) {
title_position = 44.0;
}}
}


//Devtest.
if (chosen_option == -1) {
if (timer_position_limit <= 0) {
if (title_position < 44.0) {
title_position = 44.0;
}
}
}

//If title has startet moving in preperation of the main menu start changing it to white. 
if (title_position != 90.0) {
title_2_alpha += 5; //Increasing alpha level of white logo.

if (title_2_alpha > 255) { //Clamping title_2_alpha.
title_2_alpha = 255;
}
}

//Drawing title screen.
al_draw_bitmap(bitmap_title, (480*0.5)-97, title_position, 0);

//Drawing the line under title.
if (title_line_no_draw == 0) {
al_draw_bitmap_region(bitmap_title_line, title_line_x, 0, 189-(title_line_x*2), 4, (480*0.5)-94+title_line_x, 121, 0);
}

//Drawing white title on top of regular title.
al_draw_tinted_bitmap(bitmap_title_white, al_map_rgba((int)title_2_alpha, (int)title_2_alpha, (int)title_2_alpha, (int)title_2_alpha), (480*0.5)-97, title_position, 0);



}//Everything up until this point will be skipped if the player has pressed the play button.