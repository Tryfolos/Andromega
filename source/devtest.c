//This file is used during development to test things out.

/*
if (hold_lshift == 1) {
delta_time = delta_time*8;
}

if (hold_lcontrol == 1) {
delta_time = delta_time/6;
}
*/
/*
if (hold_alt == 1) {
target_framerate = 500;
game_speed = 4;
} else {
target_framerate = 120;
game_speed = 1;
}
*/
/*
if (press_u == 1) {
player_durability = 0;
}
if (press_e == 1) {
player_energy += 1;
}
*/
/*
if (press_y == 1) {
if (al_get_sample_instance_playing(instance_player_fire) == 1) {
p = al_get_sample_instance_position(instance_player_fire);
al_set_sample_instance_playing(instance_player_fire, 0);
} else {
al_set_sample_instance_playing(instance_player_fire, 1);
al_set_sample_instance_position(instance_player_fire, p);
}
}
*/

/*
if (press_4 == 1) {
target_framerate = 15;
}
if (press_5 == 1) {
target_framerate = 30;
}
if (press_6 == 1) {
target_framerate = 60;
}
if (press_7 == 1) {
target_framerate = 120;
}
*/






/*
// Time tracking.
if (current_cutscene_part == -1) {
if (game_paused == 0) {
if (player_durability > 0) {
timer_gametime += 1;
}}}*/
//printf("%d\n", timer_gametime);




//printf("%d\n", randint(500, 1200));
//printf("%d\n", player_shield_offset);
//printf("%d\n", window_mode);
/*
if (input_shoot() == 1) {
printf("SHOOT\n");
}
*/
//printf("%d     %d\n", progression/60, difficulty);
/*
if (input_up() == 1) {
printf("Up!\n");
}

if (input_down() == 1) {
printf("down!\n");
}

if (input_left() == 1) {
printf("Left!\n");
}

if (input_right() == 1) {
printf("Right!\n");
}
*/
//count += 1;
/*
printf("%d\n", timer_level_1_enemy_1_1_x);
printf("%d\n", timer_level_1_enemy_1_1_y);
*/

//printf("%d %d\n", input_up(), current_cutscene_part);
//printf("%s\n", input_mapping_up);


//printf("%d\n", score);
//printf("%d\n", internal_display_x_offset);
/*
printf("%s\n", text_path_to_save_gametime);
printf("%s\n", text_path_to_save_high_scores);
printf("%s\n", text_path_to_save_achievements);
*/


//printf("%d\n", timer_hailstorm_start);

//Laser powerup always on. 
//timer_laser_powerup = 100;



/*
f = 0;
i = 0;
while (f < 100) {

if (array_plasma_hail[f].enabled == 1) {
i += 1;
}

f += 1;
}
printf("%d\n", i);
*/


/*
timer_achievement_8_popup = 190;
achievement_8_popup_y = 250;
*/
/*
if (current_cutscene_part == -1) {
if (timer_test > 0) {
timer_test -= 1;
} else {
timer_test = 20;
player_energy += 1;
}
}
*/

/*
f = 0;
i = 0;
while (f < 100) {

if (array_enemy_shielder[f].enabled == 1) {
i += 1;
}

f += 1;
}
p.rintf("%d\n", i);
*/

//printf("%d\n", progression);

/*
if (press_u == 1) {
player_durability = 0;
}
if (hold_e == 1) {
player_energy += 1;
}*/


//p.rintf("%d\n", audio_menu_option_0_option);




/*
//Reading integers from file every frame and inserting them into variables each frame. 
FILE * file_integers = fopen("integers.txt", "r+");

//Resetting char arrays that was read from last frame.
memset(text_integer_0, 32, 0);
memset(text_integer_1, 32, 0);
memset(text_integer_2, 32, 0);
memset(text_integer_3, 32, 0);
memset(text_integer_4, 32, 0);
memset(text_integer_5, 32, 0);
memset(text_integer_6, 32, 0);
memset(text_integer_7, 32, 0);

//Resetting integers that was read from last frame.
integer_0 = 0;
integer_1 = 0;
integer_2 = 0;
integer_3 = 0;
integer_4 = 0;
integer_5 = 0;
integer_6 = 0;
integer_7 = 0;

//Reading integers from file and putting them into char arrays.
fgets(text_integer_0, 32, file_integers);
fgets(text_integer_1, 32, file_integers);
fgets(text_integer_2, 32, file_integers);
fgets(text_integer_3, 32, file_integers);
fgets(text_integer_4, 32, file_integers);
fgets(text_integer_5, 32, file_integers);
fgets(text_integer_6, 32, file_integers);
fgets(text_integer_7, 32, file_integers);

//Converting char arrays into integer data type.
sscanf(text_integer_0, "%d", &integer_0);
sscanf(text_integer_1, "%d", &integer_1);
sscanf(text_integer_2, "%d", &integer_2);
sscanf(text_integer_3, "%d", &integer_3);
sscanf(text_integer_4, "%d", &integer_4);
sscanf(text_integer_5, "%d", &integer_5);
sscanf(text_integer_6, "%d", &integer_6);
sscanf(text_integer_7, "%d", &integer_7);


//Closing integer file.
fclose(file_integers);
*/