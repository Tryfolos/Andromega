//

if (current_cutscene_part == -1) {
if (game_paused == 1) {


//Playing sound when in meny and changing options.
if (press_up == 1 || press_down == 1) {
play_sound_change_option
}

//Changing selected stat/vertical option with keys.
if (press_up == 1) {
if (pause_menu_record_input == 0) {
pause_menu_selected_stat -= 1;
}}


if (press_down == 1) {
if (pause_menu_record_input == 0) {
if (pause_menu_selected_tab_top == 0) { //Only if we are on energy allocation tab can we change this value.
pause_menu_selected_stat += 1;
}}}

if (press_down == 1) {
if (pause_menu_record_input == 0) {
if (pause_menu_selected_tab_top == 1) { //If we are on upgrades tap and try to change the stat value it can only change is we have gone past the last available upgrade.
if (pause_menu_selected_upgrade == 6) { 
pause_menu_selected_stat += 1;
}}}}

//Making sure selected stat is within range, the range is dependant on what tab the bottom menu is on.
if (pause_menu_selected_tab == 0) { //Video menu.
if (pause_menu_selected_stat > 5) {
pause_menu_selected_stat = 5;
}
if (pause_menu_selected_stat < -1) {
pause_menu_selected_stat = -1;
}
}

if (pause_menu_selected_tab == 1) { //Controls menu.
if (pause_menu_selected_stat > 11) {
pause_menu_selected_stat = 11;
}
if (pause_menu_selected_stat < -1) {
pause_menu_selected_stat = -1;
}
}

if (pause_menu_selected_tab == 2) { //Audio menu.
if (pause_menu_selected_stat > 4) {
pause_menu_selected_stat = 4;
}
if (pause_menu_selected_stat < -1) {
pause_menu_selected_stat = -1;
}
}

//If selected stat is -1 (energy allocation/top of menu) and you use arrow keys you will change tabs between energy allocation and upgrades.
if (pause_menu_selected_stat == -1) {
if (pause_menu_selected_upgrade == 0) {
if (press_left == 1 || press_right == 1) {
switch (pause_menu_selected_tab_top) {

case 0:
pause_menu_selected_tab_top = 1;
break;

case 1:
pause_menu_selected_tab_top = 0;
break;

};
}}
}

//Choosing what upgrade is currently selected. Selected upgrade. Upgrade menu. 
if (pause_menu_selected_tab_top == 1) {

if (press_down == 1) {
pause_menu_selected_upgrade += 1;
}
if (pause_menu_selected_stat < 3) {
if (press_up == 1) {
pause_menu_selected_upgrade -= 1;
}
}
}


//Devtest.
//printf("%d\n", pause_menu_selected_stat);

//Limiting selected_upgrade value.
if (pause_menu_selected_upgrade > 6) {
pause_menu_selected_upgrade = 6;
}
if (pause_menu_selected_upgrade < 0) {
pause_menu_selected_upgrade = 0;
}

//If player tries to go beyond the last upgrade in the upgrade list, they will be moved to the tab selection on the bottom half of the screen.
if (pause_menu_selected_upgrade == 6) {
if (pause_menu_selected_tab_top == 1) {
if (pause_menu_selected_stat == -1) {
if (press_down == 1) {
pause_menu_selected_stat = 3;
//pause_menu_selected_tab_top = 0;
//pause_menu_selected_upgrade = 0;
} //Are we pressing down key.
}}}

//If selected_upgrade is less than max amount, selected stat is always 0.
if (pause_menu_selected_upgrade < 6) {
if (pause_menu_selected_tab_top == 1) {
pause_menu_selected_stat = -1;
}}


//Setting target y position of blue background that is drawn behind selected stat in menu.
if (pause_menu_selected_stat == 0) {
selected_stat_background_y_target = (35*64);
}
if (pause_menu_selected_stat == 1) {
selected_stat_background_y_target = (35*64)+(34*64);
}
if (pause_menu_selected_stat == 2) {
selected_stat_background_y_target = (35*64)+(35*64)+(33*64);
}

//Moving blue stat background up or down based on target values.
if (selected_stat_background_y_target >= selected_stat_background_y) {
if ((selected_stat_background_y_target - selected_stat_background_y) >= 512) {
selected_stat_background_y += 512;
}
if ((selected_stat_background_y_target - selected_stat_background_y) < 512) {
selected_stat_background_y += 64;
}}

if (selected_stat_background_y_target < selected_stat_background_y) {
if ((selected_stat_background_y - selected_stat_background_y_target) >= 512) {
selected_stat_background_y -= 512;
}
if ((selected_stat_background_y - selected_stat_background_y_target) < 512) {
selected_stat_background_y -= 64;
}}

//Increasing stats if you press the select key on a certain button.
if (input_select() == 1) {
if (pause_menu_selected_stat == 0) {
if (player_shield < 10) {
if (player_energy > 0) {
player_energy -= 1;
player_shield += 1;
player_shield_offset = -1; 
timer_player_shield_offset = 6;
player_shield_flash_count = 11;
play_sound_charge_energy
}
}
}

if (pause_menu_selected_stat == 1) {
if (player_laser < 10) {
if (player_energy > 0) {
player_energy -= 1;
player_laser += 1;
player_laser_offset = -1; 
timer_player_laser_offset = 6;
player_laser_flash_count = 11;
play_sound_charge_energy
}
}
}

if (pause_menu_selected_stat == 2) {
if (player_plasma < 10) {
if (player_energy > 0) {
player_energy -= 1;
player_plasma += 1;
player_ammo = 200;
player_plasma_offset = -1; 
timer_player_plasma_offset = 6;
player_plasma_flash_count = 11;
if (player_plasma == 10) { //An additional 50 ammo will be added if we max out the bar.
player_ammo += 200;
}
play_sound_charge_energy
}
}
}

}//Input check.


/*
case 1:
sprintf(text_cost_of_upgrade, "COST: %d", 40);
break;

case 2:
sprintf(text_cost_of_upgrade, "COST: %d", 20);
break;

case 3:
sprintf(text_cost_of_upgrade, "COST: %d", 100);
break;

case 4:
sprintf(text_cost_of_upgrade, "COST: %d", 50);
break;

case 5:
sprintf(text_cost_of_upgrade, "COST: %d", 80);
break;
*/


//Buying upgrades with energy.
if (upgrade_0 == 0) { //First upgrade.
if (pause_menu_selected_upgrade == 1) { //If first upgrade is selected. 0 is the top bar where you choose between energy allocaiton and upgrades.
if (input_select() == 1) {
if (player_energy > 39) {
upgrade_0 = 1;
player_energy -= 40;
if (al_get_sample_instance_playing(array_sample_instance[128]) == 0) {
al_play_sample_instance(array_sample_instance[128]);
} else if (al_get_sample_instance_playing(array_sample_instance[129]) == 0) {
al_play_sample_instance(array_sample_instance[129]);
}
}}
}
}

if (upgrade_1 == 0) { //Second upgrade.
if (pause_menu_selected_upgrade == 2) { //If second upgrade is selected. 0 is the top bar where you choose between energy allocaiton and upgrades.
if (input_select() == 1) {
if (player_energy > 4) {
upgrade_1 = 1;
player_energy -= 5;
player_durability = 10;
if (al_get_sample_instance_playing(array_sample_instance[128]) == 0) {
al_play_sample_instance(array_sample_instance[128]);
} else if (al_get_sample_instance_playing(array_sample_instance[129]) == 0) {
al_play_sample_instance(array_sample_instance[129]);
}
}}
}
}

if (upgrade_2 == 0) { //Third upgrade.
if (pause_menu_selected_upgrade == 3) { //If third upgrade is selected. 0 is the top bar where you choose between energy allocaiton and upgrades.
if (input_select() == 1) {
if (player_energy > 79) {
upgrade_2 = 1;
player_energy -= 80;
if (al_get_sample_instance_playing(array_sample_instance[128]) == 0) {
al_play_sample_instance(array_sample_instance[128]);
} else if (al_get_sample_instance_playing(array_sample_instance[129]) == 0) {
al_play_sample_instance(array_sample_instance[129]);
}
}}
}
}

if (upgrade_3 == 0) { //Fourth upgrade.
if (pause_menu_selected_upgrade == 4) { //If fourth upgrade is selected. 0 is the top bar where you choose between energy allocaiton and upgrades.
if (input_select() == 1) {
if (player_energy > 49) {
upgrade_3 = 1;
player_energy -= 50;
if (al_get_sample_instance_playing(array_sample_instance[128]) == 0) {
al_play_sample_instance(array_sample_instance[128]);
} else if (al_get_sample_instance_playing(array_sample_instance[129]) == 0) {
al_play_sample_instance(array_sample_instance[129]);
}
}}
}
}


if (upgrade_4 == 0) { //Fourth upgrade.
if (pause_menu_selected_upgrade == 5) { //If fifth upgrade is selected. 0 is the top bar where you choose between energy allocaiton and upgrades.
if (input_select() == 1) {
if (player_energy > 59) {
upgrade_4 = 1;
player_energy -= 60;
if (al_get_sample_instance_playing(array_sample_instance[128]) == 0) {
al_play_sample_instance(array_sample_instance[128]);
} else if (al_get_sample_instance_playing(array_sample_instance[129]) == 0) {
al_play_sample_instance(array_sample_instance[129]);
}
}}
}
}

//Update text/char array that will be draw to upgrades menu. Cost.

switch (pause_menu_selected_upgrade) {

case 1:
sprintf(text_cost_of_upgrade, "COST: %d", 40);
break;

case 2:
sprintf(text_cost_of_upgrade, "COST: %d", 5);
break;

case 3:
sprintf(text_cost_of_upgrade, "COST: %d", 80);
break;

case 4:
sprintf(text_cost_of_upgrade, "COST: %d", 50);
break;

case 5:
sprintf(text_cost_of_upgrade, "COST: %d", 60);
break;

};



} //Is game paused check.

//When gun is overheated the outline color will alternate between red and black. gun_heat.
if (game_paused == 0) {
if (timer_gun_heat > 0) {

if (timer_gun_heat_blinking > 0) {
timer_gun_heat_blinking -= 1;
} else {
timer_gun_heat_blinking = 10;
switch (gun_heat_background_color) {

case 0:
gun_heat_background_color = 255;
break;

case 255:
gun_heat_background_color = 0;
break;
}; //Switch statement.
} //Resetting alarm.
} //If gun is overheated.
}

//Making string/char representation of triplefire timer integer.
sprintf(text_timer_triplefire, "%d", (timer_triplefire_enabled/60)+1);

//Creating text/string representation of the time left of the death powerup.
sprintf(text_timer_death_powerup, "%d", (timer_death_powerup/60)+1);

//Creating text/string representation of the time left of the laser powerup.
sprintf(text_timer_laser_powerup, "%d", (timer_laser_powerup/60)+1);

//Flashing stat bars that has recently changed. 
//When the timer runs out it resets and it sets how many bars the stats should show.
//Once the bar has flashed ten times it will stop.
if (timer_player_shield_offset > 0) {
timer_player_shield_offset -= 1;
} 
if (timer_player_shield_offset == 0) {
if (player_shield_flash_count > 0) {
player_shield_flash_count -= 1;
timer_player_shield_offset = 6;

if (player_shield_offset == -1) { 
player_shield_offset = 0;
goto _375;
}
if (player_shield_offset == 0) {
player_shield_offset = -1; 
}

} //Checking how many times/if we should flash again.
} 
_375:


if (timer_player_laser_offset > 0) {
timer_player_laser_offset -= 1;
} 
if (timer_player_laser_offset == 0) {
if (player_laser_flash_count > 0) {
player_laser_flash_count -= 1;
timer_player_laser_offset = 6;

if (player_laser_offset == -1) { 
player_laser_offset = 0;
goto _376;
}
if (player_laser_offset == 0) {
player_laser_offset = -1; 
}

} //Checking how many times/if we should flash again.
} 
_376:


if (timer_player_plasma_offset > 0) {
timer_player_plasma_offset -= 1;
} 
if (timer_player_plasma_offset == 0) {
if (player_plasma_flash_count > 0) {
player_plasma_flash_count -= 1;
timer_player_plasma_offset = 6;

if (player_plasma_offset == -1) { 
player_plasma_offset = 0;
goto _377;
}
if (player_plasma_offset == 0) {
player_plasma_offset = -1; 
}

} //Checking how many times/if we should flash again.
} 
_377:


//Changing what settings tab we are on.
if (game_paused == 1) {
if (pause_menu_selected_stat == 3) { 
if (press_left == 1) {
pause_menu_selected_tab -= 1;
}
if (press_right == 1) {
pause_menu_selected_tab += 1;
}

}
}

//Limiting pause_menu_selected_tab value to within a range.
if (pause_menu_selected_tab > 2) {
pause_menu_selected_tab = 2;
}
if (pause_menu_selected_tab < 0) {
pause_menu_selected_tab = 0;
}


//Increasing and decreasing volume level. Master volume.
if (game_paused == 1) {
if (pause_menu_selected_tab == 2) {
if (pause_menu_selected_stat == 4) {
if (press_right == 1) {
audio_menu_option_0_option += 1;
audio_menu_option_0_option = limit_master_volume(audio_menu_option_0_option);
fstream = fopen("user_data/audio", "rb+"); //Saving new volume level after changing it 
putc(audio_menu_option_0_option, fstream);
fclose(fstream);

i = 64;
while (i < 72) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
}

}

if (press_left == 1) {
audio_menu_option_0_option -= 1;
audio_menu_option_0_option = limit_master_volume(audio_menu_option_0_option);
fstream = fopen("user_data/audio", "rb+"); //Saving new volume level after changing it 
putc(audio_menu_option_0_option, fstream);
fclose(fstream);
i = 64;

while (i < 72) {
if (al_get_sample_instance_playing(array_sample_instance[i]) == 0) {
al_play_sample_instance(array_sample_instance[i]);
break;
}
}

}

}}}


//Loading audio level from save file.
//Opening filestream to load current volume level.
fstream = fopen("user_data/audio", "rb+");
fseek(fstream, 0, SEEK_SET);
audio_menu_option_0_option = fgetc(fstream);
fclose(fstream); //Closing filestream;

//Turning volume level into text that will be displayed on screen.
sprintf(text_audio_menu_option_0_option, "MASTER VOLUME: %d", audio_menu_option_0_option); 

//Changing window mode in pause menu (right key).
if (press_right == 1) {
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 4) {

//Deciding what window mode should be selected based on current window mode.
switch (pause_menu_selected_window_mode) {
case 0:
pause_menu_selected_window_mode = 1;
break;

case 1:
pause_menu_selected_window_mode = 2;
break;
}

//Changing text representation of what window mode is selected based on integer value.
if (pause_menu_selected_window_mode == 0) {
strcpy(text_window_mode_variable, "WINDOWED");
}
if (pause_menu_selected_window_mode == 1) {
strcpy(text_window_mode_variable, "BORDERLESS");
}
if (pause_menu_selected_window_mode == 2) {
strcpy(text_window_mode_variable, "FULLSCREEN");
}

}}}


//Changing window mode in pause menu (left key).
if (press_left == 1) {
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 4) {

//Deciding what window mode should be selected based on current window mode.
switch (pause_menu_selected_window_mode) {
case 2:
pause_menu_selected_window_mode = 1;
break;

case 1:
pause_menu_selected_window_mode = 0;
break;
}

//Changing text representation of what window mode is selected based on integer value.
if (pause_menu_selected_window_mode == 0) {
strcpy(text_window_mode_variable, "WINDOWED");
}
if (pause_menu_selected_window_mode == 1) {
strcpy(text_window_mode_variable, "BORDERLESS");
}
if (pause_menu_selected_window_mode == 2) {
strcpy(text_window_mode_variable, "FULLSCREEN");
}

}}}



//Applying selected window mode. 
//If you have a window mode selected and press the select key the window mode will change and get saved to the video file.
if (input_select() == 1) {
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 4) {

if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
strcpy(text_video_menu_option_1_option, "windowed\0");
save_video();
al_destroy_display(external_display);
al_set_new_display_flags(ALLEGRO_WINDOWED);
external_display = al_create_display(external_display_width, external_display_height);
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
strcpy(text_video_menu_option_1_option, "borderless\0");
save_video();
al_destroy_display(external_display);
al_set_new_display_flags(ALLEGRO_NOFRAME);
external_display = al_create_display(external_display_width, external_display_height);
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
strcpy(text_video_menu_option_1_option, "fullscreen\0");
save_video();
al_destroy_display(external_display);
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
external_display = al_create_display(external_display_width, external_display_height);
}

}}}





//Changing resolution in pause menu (right key).
if (press_right == 1) {
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 5) {



switch (pause_menu_selected_resolution) {


case 270:
pause_menu_selected_resolution = 540;
break;

case 540:
pause_menu_selected_resolution = 810;
break;

case 810:
pause_menu_selected_resolution = 1080;
break;

case 1080:
pause_menu_selected_resolution = 1350;
break;

case 1350:
pause_menu_selected_resolution = 1620;
break;

case 1620:
pause_menu_selected_resolution = 1890;
break;

case 1890:
pause_menu_selected_resolution = 2160;
break;

case 2160:
pause_menu_selected_resolution = 2700;
break;

case 2700:
pause_menu_selected_resolution = 3240;
break;

case 3240:
pause_menu_selected_resolution = 3780;
break;

case 3780:
pause_menu_selected_resolution = 4320;
break;


}

}
}
}



//Resetting text_resolution_variable text each frame to clean it.
strcpy(text_resolution_variable, "         ");

//Setting resolution text (variable part) according to resolution variables.
if (pause_menu_selected_resolution == 270) {
strcpy(text_resolution_variable, "480X270");
}
if (pause_menu_selected_resolution == 540) {
strcpy(text_resolution_variable, "960X540");
}
if (pause_menu_selected_resolution == 810) {
strcpy(text_resolution_variable, "1440X810");
}
if (pause_menu_selected_resolution == 1080) {
strcpy(text_resolution_variable, "1920X1080");
}
if (pause_menu_selected_resolution == 1350) {
strcpy(text_resolution_variable, "2400X1350");
}
if (pause_menu_selected_resolution == 1620) {
strcpy(text_resolution_variable, "2880X1620");
}
if (pause_menu_selected_resolution == 1890) {
strcpy(text_resolution_variable, "3360X1890");
}
if (pause_menu_selected_resolution == 2160) {
strcpy(text_resolution_variable, "3840X2160");
}
if (pause_menu_selected_resolution == 2700) {
strcpy(text_resolution_variable, "4800X2700");
}
if (pause_menu_selected_resolution == 3240) {
strcpy(text_resolution_variable, "5760X3240");
}
if (pause_menu_selected_resolution == 3780) {
strcpy(text_resolution_variable, "6720X3780");
}
if (pause_menu_selected_resolution == 4320) {
strcpy(text_resolution_variable, "7680X4320");
}



//Changing resolution in pause menu (Left key).
if (press_left == 1) {
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 5) {



switch (pause_menu_selected_resolution) {


case 540:
pause_menu_selected_resolution = 270;
break;

case 810:
pause_menu_selected_resolution = 540;
break;

case 1080:
pause_menu_selected_resolution = 810;
break;

case 1350:
pause_menu_selected_resolution = 1080;
break;

case 1620:
pause_menu_selected_resolution = 1350;
break;

case 1890:
pause_menu_selected_resolution = 1620;
break;

case 2160:
pause_menu_selected_resolution = 1890;
break;

case 2700:
pause_menu_selected_resolution = 2160;
break;

case 3240:
pause_menu_selected_resolution = 2700;
break;

case 3780:
pause_menu_selected_resolution = 3240;
break;

case 4320:
pause_menu_selected_resolution = 3780;
break;


}

}
}
}



//Resetting text_resolution_variable text each frame to clean it.
strcpy(text_resolution_variable, "         ");

//Setting resolution text (variable part) according to resolution variables.
if (pause_menu_selected_resolution == 270) {
strcpy(text_resolution_variable, "480X270");
}
if (pause_menu_selected_resolution == 540) {
strcpy(text_resolution_variable, "960X540");
}
if (pause_menu_selected_resolution == 810) {
strcpy(text_resolution_variable, "1440X810");
}
if (pause_menu_selected_resolution == 1080) {
strcpy(text_resolution_variable, "1920X1080");
}
if (pause_menu_selected_resolution == 1350) {
strcpy(text_resolution_variable, "2400X1350");
}
if (pause_menu_selected_resolution == 1620) {
strcpy(text_resolution_variable, "2880X1620");
}
if (pause_menu_selected_resolution == 1890) {
strcpy(text_resolution_variable, "3360X1890");
}
if (pause_menu_selected_resolution == 2160) {
strcpy(text_resolution_variable, "3840X2160");
}
if (pause_menu_selected_resolution == 2700) {
strcpy(text_resolution_variable, "4800X2700");
}
if (pause_menu_selected_resolution == 3240) {
strcpy(text_resolution_variable, "5760X3240");
}
if (pause_menu_selected_resolution == 3780) {
strcpy(text_resolution_variable, "6720X3780");
}
if (pause_menu_selected_resolution == 4320) {
strcpy(text_resolution_variable, "7680X4320");
}



//Updating/changing actual resolution if you press select key on resolution. The selected window mode is taken into account but not saved to video file.
if (pause_menu_selected_tab == 0) {
if (pause_menu_selected_stat == 5) {
if (input_select() == 1) {

internal_display_x_offset = 0; //Resetting offset when changing resolution. 
internal_display_y_offset = 0; //Resetting offset when changing resolution. 

switch (pause_menu_selected_resolution) {

case 270:
external_display_width = 480;
external_display_height = 270;
strcpy(text_video_menu_option_0_option, "480x270\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 540:
external_display_width = 960;
external_display_height = 540;
strcpy(text_video_menu_option_0_option, "960x540\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 810:
external_display_width = 1440;
external_display_height = 810;
strcpy(text_video_menu_option_0_option, "1440x810\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 1080:
external_display_width = 1920;
external_display_height = 1080;
strcpy(text_video_menu_option_0_option, "1920x1080\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 1350:
external_display_width = 2400;
external_display_height = 1350;
strcpy(text_video_menu_option_0_option, "2400x1350\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 1620:
external_display_width = 2880;
external_display_height = 1620;
strcpy(text_video_menu_option_0_option, "2880x1620\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 1890:
external_display_width = 3360;
external_display_height = 1890;
strcpy(text_video_menu_option_0_option, "3360x1890\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 2160:
external_display_width = 3840;
external_display_height = 2160;
strcpy(text_video_menu_option_0_option, "3840x2160\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 2700:
external_display_width = 4800;
external_display_height = 2700;
strcpy(text_video_menu_option_0_option, "4800x2700\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 3240:
external_display_width = 5760;
external_display_height = 3240;
strcpy(text_video_menu_option_0_option, "5760x3240\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 3780:
external_display_width = 6720;
external_display_height = 3780;
strcpy(text_video_menu_option_0_option, "6720x3780\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

case 4320:
external_display_width = 7680;
external_display_height = 4320;
strcpy(text_video_menu_option_0_option, "7680x4320\0");
al_destroy_display(external_display);
if (pause_menu_selected_window_mode == 0) {
window_mode = 0;
al_set_new_display_flags(ALLEGRO_WINDOWED);
strcpy(text_video_menu_option_1_option, "windowed\0");
}
if (pause_menu_selected_window_mode == 1) {
window_mode = 1;
al_set_new_display_flags(ALLEGRO_NOFRAME);
strcpy(text_video_menu_option_1_option, "borderless\0");
}
if (pause_menu_selected_window_mode == 2) {
window_mode = 2;
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
strcpy(text_video_menu_option_1_option, "fullscreen\0");
}
save_video();
external_display = al_create_display(external_display_width, external_display_height);
break;

}

}
}}

//Calculating session time based on how many frames have passed.
//This will calculate total minutes played as well as how many seconds have passed towards the next minute.
gameplay_seconds_passed = gameplay_frames_passed/60; //Total seconds.
gameplay_minutes_passed = gameplay_seconds_passed/60; //Total minutes passed.
gameplay_seconds_passed = gameplay_seconds_passed%60; //Seconds towards next minute.
gameplay_minutes_passed = gameplay_minutes_passed%60; //Minutes progressed towards the next hour.
gameplay_hours_passed = (((gameplay_frames_passed/60)/60)/60); //Hours passed

//Generating string that will show the amount of time elapsed since the start of the gameplay mode/session.
memset(text_temp, ' ', 128); //Setting array to a bunch of spaces.
text_temp[0] = '0';
text_temp[1] = '0';
text_temp[2] = ':';
text_temp[3] = '0';
text_temp[4] = '0';
text_temp[5] = ':';
text_temp[6] = '0';
text_temp[7] = '0';


memset(text_temp_2, ' ', 128); //Setting array to a bunch of spaces.
sprintf(text_temp_2, "%d", gameplay_minutes_passed); 

if (gameplay_minutes_passed < 10) {

text_temp[4] = text_temp_2[0];

}

if (gameplay_minutes_passed > 9) {

text_temp[3] = text_temp_2[0];
text_temp[4] = text_temp_2[1];

}


memset(text_temp_2, ' ', 128); //Setting array to a bunch of spaces.
sprintf(text_temp_2, "%d", gameplay_hours_passed);

if (gameplay_hours_passed < 10) {

text_temp[1] = text_temp_2[0];

}

if (gameplay_hours_passed > 9) {

text_temp[0] = text_temp_2[0];
text_temp[1] = text_temp_2[1];

}


memset(text_temp_2, ' ', 128); //Setting array to a bunch of spaces.
sprintf(text_temp_2, "%d", gameplay_seconds_passed);

if (gameplay_seconds_passed < 10) {

text_temp[7] = text_temp_2[0];

}

if (gameplay_seconds_passed > 9) {

text_temp[6] = text_temp_2[0];
text_temp[7] = text_temp_2[1];

}




/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////// Input Settings /////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

//When pressing select on a control setting we are going to get into key recording mode where the next get is associated with the action.
if (pause_menu_selected_tab == 1) {



//If you press select on any input option, the 
if (game_paused == 1) {
if (pause_menu_selected_stat > 3) {
if (pause_menu_record_input == 0) {
if (input_select() == 1) {
pause_menu_record_input = 1;
skip_input_recording = 2;
goto skip_record;
}
}
}
}



//Checking what keys are being pressed. Recording them.
if (game_paused == 1) {
if (pause_menu_selected_stat > 3) {
if (pause_menu_record_input == 1) {
if (skip_input_recording == 0) {

////////////////////
////////////////////
// Shoot ///////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 4) {

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

} //End of recording shoot input.



////////////////////
////////////////////
// Laser ///////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 5) {

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

} //End of recording laser input.



////////////////////
////////////////////
// Select ///////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 6) {

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

} //End of recording select input.



////////////////////
////////////////////
// Pause ///////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 7) {

skip_closing_menu = 2;

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

} //End of recording pause input.



////////////////////
////////////////////
// Up //////////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 8) {

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

} //End of recording up input.



////////////////////
////////////////////
// Down ////////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 9) {

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

} //End of recording down input.



////////////////////
////////////////////
// Left ////////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 10) {

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

} //End of recording left input.



////////////////////
////////////////////
// Right ///////////
////////////////////
////////////////////
if (pause_menu_selected_stat == 11) {

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

} //End of recording right input.




//If we press any key the recording mode will be turned off.
if (press_anykey == 1) {
pause_menu_record_input = 0;
FILE * file_controls = fopen("user_data/controls.txt", "w"); //Saving key bindings to file.
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

}//Checking if skip recording value is more than 0.
}
}
}
skip_record:


//Skip input recording variable handling.
skip_input_recording -= 1;
if (skip_input_recording < 0) {
skip_input_recording = 0;
}

//Skip closing menu variable handling.
if (pause_menu_record_input == 0) {
skip_closing_menu -= 1;
if (skip_closing_menu < 0) {
skip_closing_menu = 0;
}
}


} //Checking what tab the player is on.


//Updating text representations of score. Only if player is alive.
if (player_durability > 0) {
memset(&text_score, 0, 64);
sprintf(text_score, "SCORE:%d", score);
}


} //Is cutscene over check.
