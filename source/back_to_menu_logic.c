
//General.
game_paused = 0; //Is the game paused or not.
black_screen_alpha = 255; //Transparency level of black box being drawn on screen.

//levels general.
current_level = 1; //You are on the first level.
level_black_screen_alpha = 255; //The transparency of the black screent drawn on the screen.


//Player stats and positioning and stuff.
player_durability = 10; //Players hit pos.
player_shield = 5; //How much shield strength does the player have left.
player_laser = 5; //Laser/bomb.
player_plasma = 5; //Rate of fire.
player_energy = 0; //How many energy cells the player has picked up but not yet spent.
player_ammo = 200; //The amount of ammo left until the plasma decreases by 1.
player_x = ((270*64)/2)-((16*64)/2); //Initial X position of player.
player_y = 270*64; //Initial Y position of player.
player_movespeed = 256; //How fast the player moves each frame.
timer_plasma_cooldown = 45-(player_plasma*4); //Timer cooldown for shooting the next bullet.
player_bullet_damage = 1; //How many health points is removed from enemies when they get hit. Only higher than 1 in testing when you want to complete levels fast.
timer_blinking = 0; // timer that turns the players visibility on and off quickly to create a blinking animation (This happens when hurt).
blink_count = 0; //How many blinks should happen before the player should be fully visible again.
visible = 1; //Is the player visible or not.
timer_shield_hurt = 0; //When this timer is above 0, draw the hurt version of the player shield.
timer_shield_visibility = 0;  //When shield is gone timer will count down and every time it resets a little less of the shield can be seen.
shield_visibility = 5; //How much of the shield is visible (Lower value means a smaller portion of the full sprite is drawn). 
timer_score = 45; //Every time this timer runs out the player gets score.
score = 0; //How much score do you have.
choose_death_quote = 0; //0 or 1. if 1, death quote will be chosen.
chosen_death_quote = 0; //What death quote will show up on the death screen.
timer_entering = 60; //The player can't move until this timer has run out. 
gun_heat = 0; //How hot is the player plasma cannon/running.
timer_gun_heat = 5; //Each time this timer runs out, the gun will cool by one point.
timer_no_shooting = 0; //If the gun overheats, you won't be able to shoot during this timer. 
triplefire_enabled = 0; //Is triplefire powerup enabled?
timer_triplefire_enabled = 0; //When this timer runs out, the triplefire powerup will no longer be active.
timer_death_powerup = 0; //How many frames are there left of the death powerup timer. 
timer_laser_powerup = 0; //How many frames are there left of the laser powerup timer.
bin_laser = false; //Alternates between two values constantly each frame.
player_shot = 0; //Determines if the player has shot a bullet yet or not. 
hailstorms_survived = 0; //How many hailstorms have we survived? Used for tracking and unlocking achievement.



//Player laser. Laser attack. Laser ability.
timer_laser = 0; //The amount of time the laser will be active for.
laser_y; //The y position of the top of the laser.
laser_y_2; //The y position of the top of the laser.
laser_y_3; //The y position of the top of the laser.

//In game ui/panel.
gun_heat_background_color = 0; //When this value increases the redness in the background of the gun heat bar.
timer_gun_heat_blinking = 0; //Every time this timer runs out the color of the gun heat bars outline will change.


//Pause menu in game (upgrades part).
upgrade_0 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
upgrade_1 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
upgrade_2 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
upgrade_3 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
upgrade_4 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
upgrade_5 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.

//Difficulty and progression.
progression = 0; //How far have we progressed in the game. How many frames in other words. 
difficulty = 0; //0 is the lowest difficulty.

//Game over screen. Quotes stated on death screen.
game_over_y = 270*64;
death_quote_y = 270*64;
timer_game_over_delay = 50; //How many frames should it take for the game over screen to appear after you have died.
timer_death_quote_delay = 65; //How many frames should it take foe the death quote to appear.
game_over_selected_option = 0; //Will the player choose to replay or go back to the main menu?
game_over_chosen_option = 0; //What option has the player selected, replay or menu?


//Enemy spawner.
random_enemy_0_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
random_enemy_1_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
random_enemy_2_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
random_enemy_3_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
random_enemy_4_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
timer_spawn_delay = 60*6; //During this timer. Enemies don't spawn.

//UI ship.
timer_ui_ship_damage_flash; //During this timer the part of the ui where you can monitor your ships condition will flash red instead of the regular blue color.
durability_last_frame; //This is the durability the player had last frame. It is used for determining when to start the timer above.


//Hailstorm.
timer_hailstorm_duration = 0; //This is how frames/seconds the hailstorm will last for.
timer_hailstorm_start = 60*105; //This is how long until the next hailstorm starts.
hailstorm_background_tint = 0.0; //The alpha level of the background.
hailstorm_background_x = (-50*64); //Where should we draw the hailstorm background?
hailstorm_background_x_movement = 0; //How much should the hailstorm move this frame?
hailstorm_movement_direction = 1; //Move to the right if it is 1. To the left if it is 0.
timer_hailstorm_movement_direction = 35; //When this movement timer runs out the direction that the animation is moving in will start to change.

//Achievement popup.
timer_achievement_1_popup = 2; //During this timer the animation will move into the screen and then out again.
timer_achievement_2_popup = 2;
timer_achievement_3_popup = 2;
timer_achievement_4_popup = 2;
timer_achievement_5_popup = 2;
timer_achievement_6_popup = 2;
timer_achievement_7_popup = 2;
timer_achievement_8_popup = 2;
achievement_1_popup_y = 40*64; //The position to draw the popup at. 
achievement_2_popup_y = 40*64;
achievement_3_popup_y = 40*64;
achievement_4_popup_y = 40*64;
achievement_5_popup_y = 40*64;
achievement_6_popup_y = 40*64;
achievement_7_popup_y = 40*64;
achievement_8_popup_y = 40*64;
popup_movement_speed = 0; //How fast does the popup move up the screen.
popup_1_shown = 0; //This ensures the popup will only happen once and not repeat over and over.
popup_2_shown = 0;
popup_3_shown = 0;
popup_4_shown = 0;
popup_5_shown = 0;
popup_6_shown = 0;
popup_7_shown = 0;
popup_8_shown = 0;

//Small enemy, these are the enemies that spawn in groups and move in patterns.
timer_enemy_small_spawner; //How long left until the next one will spawn?
enemy_small_spawn_x; //Where on the x axis will the enemies spawn?
enemy_small_spawn_amount; //How many more small enemies will we spawn?
enemy_small_central_ship_x; //The position of the central ship in pattern 0 formation.
timer_enemy_small_spawn_delay = 0; //While this timer is running we can not spawn more of these enemies.


gameplay_frames_passed = 0; //How many frames have passed while in gameplay mode.
gameplay_seconds_passed = 0; //How many seconds have passed while in gameplay mode.
gameplay_minutes_passed = 0; //How many minutes have passed while in gameplay mode.
gameplay_hours_passed = 0; //How many hours have passed while in gameplay mode.

/*
//Pause menu in game (stats part).
pause_menu_selected_stat = 0; //What stat is being selected for energy allocation.
selected_stat_background_y = 35*64; //Position of blue background behind currently selected stat.
selected_stat_background_y_target = 35*64; //Where should the stat background move to.
player_shield_offset = 0; //Should the game show one more or one less energy than the player actually has. Used for blinking effect.
timer_player_shield_offset = 0; //How many frames does it take for shield to flash and for the timer to refresh.
player_shield_flash_count = 0; //How many times does the stat bar flash change.
player_laser_offset = 0; //Should the game show one more or one less energy than the player actually has. Used for blinking effect.
timer_player_laser_offset = 0; //How many frames does it take for laser stat to flash and for the timer to refresh.
player_laser_flash_count = 0; //How many times does the stat bar flash change.
player_plasma_offset = 0; //Should the game show one more or one less energy than the player actually has. Used for blinking effect.
timer_player_plasma_offset = 0; //How many frames does it take for plasma to flash and for the timer to refresh.
player_plasma_flash_count = 0; //How many times does the stat bar flash one changed.


//Pause menu in game (Settings part).
skip_closing_menu = 0; //If this value is above 0 the menu can not be closed with pause input. 
skip_input_recording = 0; //If this is above 0, input recording can not happen.
pause_menu_selected_tab = 0; //What settings tab are we currently on. 
pause_menu_selected_resolution = 1080; //What resolution is selected in the video menu (pause menu).
pause_menu_selected_window_mode = 0; //What window mode is currently selected in pause menu.
pause_menu_record_input = 0; //If this changes to a 1. You are now in controls edit mode.
*/


//Resetting all enemies,  bullets, particles and more.
f = 0;
while (f < 1000) { //Resetting all enemies.

if (array_enemy[f].enabled == 1) {
array_enemy[f].enabled = 0;
}

f += 1;
}

f = 0;
while (f < 1000) { //Resetting all enemy bullets.

if (array_enemy_bullet[f].enabled == 1) {
array_enemy_bullet[f].enabled = 0;
}

f += 1;
}



f = 0;
while (f < 1000) { //Resetting all shielder enemies.

if (array_enemy_shielder[f].enabled == 1) {
array_enemy_shielder[f].enabled = 0;
}

f += 1;
}


f = 0;
while (f < 5) { //Resetting all invaders.

if (array_invader[f].enabled == 1) {
array_invader[f].enabled = 0;
}

f += 1;
}

//Resetting all small enemies.
f = 0;
while (f < 100) { //Resetting all small enemies.

if (array_small_enemy[f].enabled == 1) {
array_small_enemy[f].enabled = 0;
}

f += 1;
}



//Resetting all plasma balls.
f = 0;
while (f < 100) { //Resetting all plasma balls.

if (array_plasma_hail[f].enabled == 1) {
array_plasma_hail[f].enabled = 0;
}

f += 1;
}


//Resetting plasma trail.
f = 0;
while (f < 500) { //Resetting all plasma balls.

if (array_plasma_trail[f].enabled == 1) {
array_plasma_trail[f].enabled = 0;
}

f += 1;
}


//Resetting all energy cell pickups.
f = 0;
while (f < 100) { //Resetting all pickups.

if (array_energy_cell_pickup[f].enabled == 1) {
array_energy_cell_pickup[f].enabled = 0;
}

f += 1;
}

//Resetting all death upgrade pickups.
f = 0;
while (f < 100) { //Resetting all pickups.

if (array_death_pickup[f].enabled == 1) {
array_death_pickup[f].enabled = 0;
}

f += 1;
}

//Resetting all triplefire pickups.
f = 0;
while (f < 100) { //Resetting all pickups.

if (array_triplefire_pickup[f].enabled == 1) {
array_triplefire_pickup[f].enabled = 0;
}

f += 1;
}
//Resetting all laser pickups.
f = 0;
while (f < 100) { //Resetting all pickups.

if (array_laser_pickup[f].enabled == 1) {
array_laser_pickup[f].enabled = 0;
}

f += 1;
}


//Main menu.
selected_option = 0; //There are 6 options. Represents what option is currently selected. 0 Is play, 5 is quit.
chosen_option = -1; //If you actually press the "select" key on a selected option it will also become the chosen option. -1 means we are in the main menu.
main_menu_option_0_alpha = 0.0; //Transparency level of the select option bitmap.
main_menu_option_1_alpha = 0.0; //Transparency level of the select option bitmap.
main_menu_option_2_alpha = 0.0; //Transparency level of the select option bitmap.
main_menu_option_3_alpha = 0.0; //Transparency level of the select option bitmap.
main_menu_option_4_alpha = 0.0; //Transparency level of the select option bitmap.
main_menu_option_5_alpha = 0.0; //Transparency level of the select option bitmap.
main_menu_option_fade_rate = 0.075; //How fast is the option changing color when selected.
main_menu_option_0_x = 180.0;
main_menu_option_1_x = 180.0;
main_menu_option_2_x = 180.0;
main_menu_option_3_x = 180.0;
main_menu_option_4_x = 180.0;
main_menu_option_5_x = 180.0;
timer_main_menu_move_to_side = sec*1;// A one second timer that runs when the main menu is supposed to move away.
main_menu_timer_trigger = 0; //If this becomes 1, the timer that moves the menu horizontally will start. 
timer_main_menu_up_time = 0; //How long has the main menu been chosen for.

//Title screen.
timer_move_down_delay = sec*0.25; //When the play button has been pressed the title will move to the center of the screen but only after this timer has run out.
title_alpha = 255; //Transparency of title when fading out.
timer_title_alpha = sec*0.35; //Once this timer runs out. Start fading title away.


//Cutscene part1.
timer_cutscene_part1 = sec*6; //Over the course of this timer. More and more of the date will be revealed.
cutscene_part1_draw_x = 165; //X position of where the text should be drawn.
cutscene_part1_draw_y = 105; //Y position of where the text should be drawn.

//Cutscene part2.
timer_cutscene_part2 = sec*12; //Over the course of this timer, text will show up.
cutscene_part2_draw_x = 30; //X position of where the text should be drawn.
cutscene_part2_draw_y = 105; //Y position of where the text should be drawn.

//Cutscene part3.
timer_cutscene_part3 = sec*15; //Over the course of this timer, text will show up.
cutscene_part3_draw_x = 5; //X position of where the text should be drawn.
cutscene_part3_draw_y = 105; //Y position of where the text should be drawn.
cutscene_part3_skull_alpha = 255; //The transparency level of the skull shown in the opening cutscene.

//Cutscene part4.
timer_cutscene_part4 = sec*15; //Over the course of this timer, text will show up.
cutscene_part4_draw_x = 60; //X position of where the text should be drawn.
cutscene_part4_draw_y = 105; //Y position of where the text should be drawn.

//Cutscene general.
current_cutscene_part = 0; //What part of the cutscene is currently in action.

//Part1.
memset(text_cutscene_part1, 0, 15);

//Part2.
memset(text_cutscene_part2, ' ', 70);
text_cutscene_part2[71] = '\0';
memset(text_cutscene_part2_2, ' ', 70);
text_cutscene_part2_2[71] = '\0';

//Part3.
memset(text_cutscene_part3, ' ', 53);

//Part4.
memset(text_cutscene_part4, ' ', 40);
memset(text_cutscene_part4_2, ' ', 40);

timer_invincible = 5;


//Resetting gametime and achievements when going back to main menu.
//This is ficing a bug where the user data would carry over from one user to another.
gametime = 0;
gametime_seconds = 0;
gametime_minutes = 0;
gametime_hours = 0;

//Achievement tracker logic.
shielders_killed = 0;
achievements_byte = 0;

//Stop playing in game music and setting speed of in game music.
if (al_get_sample_instance_playing(array_sample_instance[131]) == 1) {
al_set_sample_instance_playing(array_sample_instance[131], 0);
music_speed_change = 0;
music_speed = 1.0;
}


//GOTO start if game loop.
goto start_of_game;

