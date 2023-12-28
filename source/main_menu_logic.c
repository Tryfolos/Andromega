//If the title screen is done fading away, run this file.
if (title_fade_back == 1) {


//Navigating the menu up and down with the arrow keyes.
if (chosen_option == -1) {
if (press_up == 1) {
selected_option -= 1;

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
selected_option += 1;

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

//Limiting selected option so it doesn't go below -1 or above 5.
if (selected_option < -1.0) {
selected_option = -1.0;
}

if (selected_option > 5.0) {
selected_option = 5.0;
}

//Increasing or decreasing the alpha of the option that is selected or not selected.
switch (selected_option) {

case -1:
main_menu_option_n1_alpha += main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 0:
main_menu_option_n1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha += main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 1:
main_menu_option_n1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha += main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 2:
main_menu_option_n1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha += main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 3:
main_menu_option_n1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha += main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 4:
main_menu_option_n1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha += main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha -= main_menu_option_fade_rate*delta_time;
break;

case 5:
main_menu_option_n1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_0_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_1_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_2_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_3_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_4_alpha -= main_menu_option_fade_rate*delta_time;
main_menu_option_5_alpha += main_menu_option_fade_rate*delta_time;
break;

};

//Limiting main_menu_option_x_alpha.
if (main_menu_option_n1_alpha > 255.0) {
main_menu_option_n1_alpha = 255.0;
}
if (main_menu_option_n1_alpha < 0.0) {
main_menu_option_n1_alpha = 0.0;
}

if (main_menu_option_0_alpha > 255.0) {
main_menu_option_0_alpha = 255.0;
}
if (main_menu_option_0_alpha < 0.0) {
main_menu_option_0_alpha = 0.0;
}

if (main_menu_option_1_alpha > 255.0) {
main_menu_option_1_alpha = 255.0;
}
if (main_menu_option_1_alpha < 0.0) {
main_menu_option_1_alpha = 0.0;
}

if (main_menu_option_2_alpha > 255.0) {
main_menu_option_2_alpha = 255.0;
}
if (main_menu_option_2_alpha < 0.0) {
main_menu_option_2_alpha = 0.0;
}

if (main_menu_option_3_alpha > 255.0) {
main_menu_option_3_alpha = 255.0;
}
if (main_menu_option_3_alpha < 0.0) {
main_menu_option_3_alpha = 0.0;
}

if (main_menu_option_4_alpha > 255.0) {
main_menu_option_4_alpha = 255.0;
}
if (main_menu_option_4_alpha < 0.0) {
main_menu_option_4_alpha = 0.0;
}

if (main_menu_option_5_alpha > 255.0) {
main_menu_option_5_alpha = 255.0;
}
if (main_menu_option_5_alpha < 0.0) {
main_menu_option_5_alpha = 0.0;
}

//////////////////////////////
///// This next part is about navigating the menu.
/////Position in menu based on the input you give at any given time.
//////////////////////////////


//Choosing the title/story option.
if (selected_option == -1) { 
if (input_select() == 1) {


chosen_option = -2; //chosen option must be -2 instead of -1 to avoid incompatability/problems with older code.
main_menu_timer_trigger = 1;
timer_main_menu_move_to_side = sec*1;
play_sound_choose_option //Macro.
}
}

//Choosing controls option.
if (selected_option == 2) {
if (input_select() == 1) {
chosen_option = 2;
main_menu_timer_trigger = 1;
controls_menu_move_trigger = 1;
timer_main_menu_move_to_side = sec*1;
timer_controls_menu_move = sec*1;
play_sound_choose_option //Macro.
}
}

//Choosing progress menu option.
if (selected_option == 1) {
if (input_select() == 1) {
chosen_option = 1;
main_menu_timer_trigger = 1;
timer_main_menu_move_to_side = sec*1;
play_sound_choose_option //Macro.
}
}

//Choosing video menu option.
if (selected_option == 3) {
if (input_select() == 1) {
chosen_option = 3;
main_menu_timer_trigger = 1;
video_menu_move_trigger = 1;
timer_main_menu_move_to_side = sec*1;
timer_video_menu_move = sec*1;
play_sound_choose_option //Macro.
}
}

//Choosing audio menu option.
if (selected_option == 4) {
if (input_select() == 1) {
chosen_option = 4;
main_menu_timer_trigger = 1;
timer_main_menu_move_to_side = sec*1;
audio_menu_move_trigger = 1;
timer_audio_menu_move = 10;
play_sound_choose_option //Macro.
}}


//When you select the quit option the game will shut down.
if (chosen_option == -1) {
if (selected_option == 5) {
if (input_select() == 1) {
running = 0;
}
}
}

//If timer trigger is 1, the main menu timer will start counting.
if (main_menu_timer_trigger == 1) {
timer_main_menu_move_to_side -= delta_time;
}

//Making sure timer_main_menu_move_to_side doesn't go below 0;
if (timer_main_menu_move_to_side <= 0.0) {
timer_main_menu_move_to_side = 0;
main_menu_timer_trigger = 0;
}

//Moving menu options to the left depending on how far along the timer is.
if (chosen_option != -1) {
if (timer_main_menu_move_to_side <= sec*0.875) {
main_menu_option_0_x -= 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*1))) {
main_menu_option_1_x -= 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*2))) {
main_menu_option_2_x -= 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*3))) {
main_menu_option_3_x -= 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*4))) {
main_menu_option_4_x -= 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*5))) {
main_menu_option_5_x -= 0.2 * delta_time;
}
}

//If chosen option is -1, move main menu options to the right until they are centered on the screen.
if (chosen_option == -1) {
if (timer_main_menu_move_to_side <= sec*0.875) {
main_menu_option_0_x += 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*1))) {
main_menu_option_1_x += 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*2))) {
main_menu_option_2_x += 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*3))) {
main_menu_option_3_x += 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*4))) {
main_menu_option_4_x += 0.2 * delta_time;
}
if (timer_main_menu_move_to_side <= sec*(0.875-(0.075*5))) {
main_menu_option_5_x += 0.2 * delta_time;
}
}


//Limiting how far left the main menu options can move.
if (main_menu_option_0_x < -120) {
main_menu_option_0_x = -120;
}
if (main_menu_option_1_x < -120) {
main_menu_option_1_x = -120;
} 
if (main_menu_option_2_x < -120) {
main_menu_option_2_x = -120;
} 
if (main_menu_option_3_x < -120) {
main_menu_option_3_x = -120;
} 
if (main_menu_option_4_x < -120) {
main_menu_option_4_x = -120;
} 
if (main_menu_option_5_x < -120) {
main_menu_option_5_x = -120;
} 

//Limiting how far right the main menu options can move.
if (main_menu_option_0_x > 180) {
main_menu_option_0_x = 180;
}
if (main_menu_option_1_x > 180) {
main_menu_option_1_x = 180;
} 
if (main_menu_option_2_x > 180) {
main_menu_option_2_x = 180;
} 
if (main_menu_option_3_x > 180) {
main_menu_option_3_x = 180;
} 
if (main_menu_option_4_x > 180) {
main_menu_option_4_x = 180;
} 
if (main_menu_option_5_x > 180) {
main_menu_option_5_x = 180;
}


//If chosen_option is -2 and you press the pause button, you will go back to the main menu.
if (chosen_option == -2) {
if (input_pause() == 1) {
timer_main_menu_move_to_side = sec*1.4;
chosen_option = -1;
main_menu_timer_trigger = 1;
}
}


//If chosen_option is 2 and you press the menu button, you will go back to the main menu.
if (chosen_option == 2) {
if (input_pause() == 1) {
if (controls_menu_record_input == 0) {
if (controls_menu_option_7_x == 122) {
timer_main_menu_move_to_side = sec*1.4;
chosen_option = -1;
main_menu_timer_trigger = 1;
}
}
}
}


//If chosen_option is 1 and you press the menu button, you will go back to the main menu.
if (chosen_option == 1) {
if (input_pause() == 1) {
timer_main_menu_move_to_side = sec*1.4;
chosen_option = -1;
main_menu_timer_trigger = 1;
}
}


//Counting timer that determines how long the player has been in the main menu.
if (chosen_option == -1) {
timer_main_menu_up_time += delta_time;
}

//If not in the main menu. reset up time timer.
if (chosen_option != -1) {
timer_main_menu_up_time = 0;
}

//If chosen_option is 3 and you press the menu button, you will go back to the main menu.
if (chosen_option == 3) {
if (input_pause() == 1) {
if (video_menu_option_4_x == 122) {
timer_main_menu_move_to_side = sec*1.4;
timer_video_menu_move = sec*1;
video_menu_move_trigger = 1;
chosen_option = -1;
main_menu_timer_trigger = 1;
}
}
}


//If chosen_option is 4 and you press the menu button, you will go back to the main menu.
if (chosen_option == 4) {
if (input_pause() == 1) {
if (audio_menu_option_0_x == 122) {
timer_main_menu_move_to_side = sec*1.4;
timer_audio_menu_move = 10;
audio_menu_move_trigger = 1;
chosen_option = -1;
main_menu_timer_trigger = 1;
}
}
}

//What happens if you press play button.
if (chosen_option == -1) {
if (selected_option == 0) {
if (input_select() == 1) {
if (timer_main_menu_up_time > 11000) {
chosen_option = 0;
timer_main_menu_move_to_side = sec*1;
main_menu_timer_trigger = 1;
play_sound_choose_option //Macro.
//printf("%f\n", framerate);
}
}
}
}


}
