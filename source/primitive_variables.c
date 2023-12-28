//General.
char text_copyr[] = "DEVELOPED BY FILIP HEDMAN IN 2023"; //This game was developed by Filip Hedman. 
bool running = true; //Is the main loop running or not.
int external_display_width = 1920; //Horizontal resolution.
int external_display_height = 1080; //Vertical resolution.
int f, i, p, h, e, d; //Loop iterators. Temporary integers.
float a, b, c; //Used as temporary values in for example loops.
long int frames_passed = 0; //How many frames have been rendered since the program started.
int game_paused = 0; //Is the game paused or not.
int internal_display_x_offset = 0; //Where in the game window should the game be drawn.
int internal_display_y_offset = 0; //Where in the game window should the game be drawn.
int window_mode = 0; //Can be 0, 1 or 2 depending on what the video config file says.
float black_screen_alpha = 255; //Transparency level of black box being drawn on screen.
int game_speed = 1; //Used in debugging to speed up the game.
char text_paused[] = "ENERGY ALLOCATION"; //When the game is paused, this text will be drawn to screen.
int draw_hitboxes = 0;
char text_temp[128]; //General purpose buffer that is 128 bits long that can be used to store any data.
char text_temp_2[128]; //General purpose buffer.
float music_speed = 1.0; //The speed of the gameplay music that plays.
int music_speed_change = 0; //If 0 the speed will decrease and if 1 the speed will increase.

//Time and framerate variables.
int delta_time; //How many milliseconds have passed since the last frame.
long int time_passed; //How many milliseconds have passed since the start of the program.
long int time_passed_2; //Used in loop to delay time until target framerate is achieved.
int sec = 10000; //The length of a second. 10th of a millisecond.
float target_framerate = 60.0; //What framerate are we trying to achieve.
float framerate = 0; //FRAMERATE.
int lagger = 0; //How much extra lag should there be to achieve the target framerate.
float framerate_gap = 0; //The gap between the framerate and the target framerate.

//Title screen.
int pressed_any_key = 0; //Has the user given any keyboard input yet.
char press_any_key_text[] = "PRESS ANY KEY"; //Used to draw text.
float title_position = 90.0; //Where is the title initially on the bootup screen (Y axis).
float press_any_key_alpha = 1.0; //The transparency level of the input prompt on the title screen.
int timer_press_any_key_alpha = sec*0.2; //Timer that is used when flashing input prompt on title screen.
int press_any_key_alpha_mode = 0; //Used to indicate if the transparency level of the prompt should increase or decrease.
int timer_title_fade_away = sec*1.75; //When this timer runs out, the title screen will start to fade away.
float title_black_screen_alpha = 0.0; //The transparency level of the black screen that will cover the title screen.
int title_fade_back = 0; //When this is equal to one. The transparency of the black screen will start to decrease.
int ignore_title_screen_logic = 0; //This value will become 1 once the main meny has faded in entirely, removing the need for the title screen logic to run at all.
int timer_title_fade_back = sec*1; //The amount of time the screen will be black for before it starts to fade back again.
float title_line_x = 0.0; //far left side of region that should be drawn.
int title_line_no_draw = 0; //If this becomes 1, the line in the title screen will not be drawn.
int timer_position_limit = sec*0.75; //The time it takes for the positional limit of the title to change when going back to the main menu from any other menu.
float title_2_alpha = 0; //Alpha level of white logo drawn on top of purple logo.

int timer_move_down_delay = sec*0.25; //When the play button has been pressed the title will move to the center of the screen but only after this timer has run out.
float title_alpha = 255; //Transparency of title when fading out.
int timer_title_alpha = sec*0.35; //Once this timer runs out. Start fading title away.


//Story menu.
int story_background_x = 480; //The x position of the story menu, where it is supposed to be drawn.
char text_story[] = "STORY"; //The title for the story screen.
char text_story_line_0[] = "IT WAS THE YEAR 2236, AND THE ANDROMEGA SPACE CRUISER"; 
char text_story_line_1[] = "HAD JUST ENTERED THE FINAL STAGE OF DEVELOPMENT."; 
char text_story_line_2[] = "FOR THE VERY FIRST TIME, HUMANITY WAS GOING TO";
char text_story_line_3[] = "EXPLORE ANOTHER GALAXY. AFTER DECADES OF WORK";
char text_story_line_4[] = "AND A FORTUNE SPENT, THE PROJECT WAS FINALLY COMPLETE.";
char text_story_line_5[] = "SHORTLY AFTER COMPLETION, ANDROMEGA DEPARTED FROM THE "; 
char text_story_line_6[] = "LAUNCH SITE ON PLUTO. THEY THEN TRAVELLED TOWARDS THE "; 
char text_story_line_7[] = "ANDROMEDA GALAXY. THE ANDROMEGA EXPEDITION WAS GOING";
char text_story_line_8[] = "TO REVOLUTIONIZE SPACE TRAVEL FOREVER.";
char text_story_line_9[] = "";
char text_story_line_10[] = "ANDROMEGA WAS NEVER SEEN AGAIN AND";
char text_story_line_11[] = "NEVER RETURNED TO PLUTO. THIS IS WHERE YOU COME IN.";
char text_story_line_12[] = "YOU ARE BEING SENT ON A MISSION TO SOLVE THE MYSTERY.";
char text_story_line_13[] = "WHAT HAPPENED TO THE LOST EXPEDITION?";
char text_story_line_14[] = "THE GAME TAKES PLACE UPON YOUR ARRIVAL TO ANDROMEDA.";

//Savefile. Player data savefile. progression file. Creating save. 
char text_path_to_save[] = "user_data/                 "; //The path that will be used to create save file after name has been chosen.
char text_path_to_save_gametime[] = "user_data/                              "; //Path to file that will track gametime.
char text_path_to_save_high_scores[] = "user_data/                                 "; //Path to file that will track high scores.
char text_path_to_save_achievements[] = "user_data/                                  "; //Path to file that will track the players achievements.

//Main menu.
char text_play[] = "PLAY";
char text_scoreboard[] = "PROGRESS";
char text_controls[] = "CONTROLS";
char text_video[] = "VIDEO";
char text_audio[] = "AUDIO";
char text_quit[] = "QUIT";
int selected_option = 0; //There are 6 options. Represents what option is currently selected. 0 Is play, 5 is quit.
int chosen_option = -1; //If you actually press the "select" key on a selected option it will also become the chosen option. -1 means we are in the main menu.
float main_menu_option_n1_alpha = 0.0; //Transparency level of the top/story option. 
float main_menu_option_0_alpha = 0.0; //Transparency level of the play option bitmap.
float main_menu_option_1_alpha = 0.0; //Transparency level of the progress option bitmap.
float main_menu_option_2_alpha = 0.0; //Transparency level of the controls option bitmap.
float main_menu_option_3_alpha = 0.0; //Transparency level of the video option bitmap.
float main_menu_option_4_alpha = 0.0; //Transparency level of the audio option bitmap.
float main_menu_option_5_alpha = 0.0; //Transparency level of the quit option bitmap.
float main_menu_option_fade_rate = 0.075; //How fast is the option changing color when selected.
float main_menu_option_0_x = 180.0;
float main_menu_option_1_x = 180.0;
float main_menu_option_2_x = 180.0;
float main_menu_option_3_x = 180.0;
float main_menu_option_4_x = 180.0;
float main_menu_option_5_x = 180.0;
int timer_main_menu_move_to_side = sec*1;// A one second timer that runs when the main menu is supposed to move away.
int main_menu_timer_trigger = 0; //If this becomes 1, the timer that moves the menu horizontally will start. 
int timer_main_menu_up_time = 0; //How long has the main menu been chosen for.
short timer_do_not_run = 0; //During this timer we don't run certain code that causes crashes.

//Main menu crawler animation. Main nenu animation.
int crawler_position_x = 0;
int crawler_position_y = 0;
int crawler_direction = 0; //Movement can happen in 4 directions. 0 = left. 1 = up. 2 = right. 3 = down.


int crawler_position_x_2 = 0;
int crawler_position_y_2 = 0;
int crawler_direction_2 = 0; //Movement can happen in 4 directions. 0 = left. 1 = up. 2 = right. 3 = down.


int crawler_position_x_3 = 0;
int crawler_position_y_3 = 0;
int crawler_direction_3 = 0; //Movement can happen in 4 directions. 0 = left. 1 = up. 2 = right. 3 = down.

int crawler_position_x_4 = 0;
int crawler_position_y_4 = 0;
int crawler_direction_4 = 0; //Movement can happen in 4 directions. 0 = left. 1 = up. 2 = right. 3 = down.


//Input mapping.
char input_mapping_shoot[14] = "space";
char input_mapping_laser[14] = "_b";
char input_mapping_select[14] = "enter";
char input_mapping_pause[14] = "escape";
char input_mapping_up[14] = "_up";
char input_mapping_down[14] = "_down";
char input_mapping_left[14] = "left";
char input_mapping_right[14] = "right";


//When loading controls from file, these arrays will contain the text from the file.
char controls_file_line_1[100];
char controls_file_line_2[100];
char controls_file_line_3[100];
char controls_file_line_4[100];
char controls_file_line_5[100];
char controls_file_line_6[100];
char controls_file_line_7[100];
char controls_file_line_8[100];

//Controls menu.
float controls_menu_option_0_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_1_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_2_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_3_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_4_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_5_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_6_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_7_x = 480.0; //The horizontal position of the first option in the controls menu.
float controls_menu_option_0_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_1_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_2_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_3_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_4_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_5_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_6_alpha = 0.0; //Alpha value of blue tint while option is selected.
float controls_menu_option_7_alpha = 0.0; //Alpha value of blue tint while option is selected.
int controls_menu_option_0_offset = 64; //How far to the right of the "shoot" text should the actual mapping be.
int controls_menu_option_1_offset = 62; //How far to the right of the "laser" text should the actual mapping be.
int controls_menu_option_2_offset = 72; //How far to the right of the "select" text should the actual mapping be.
int controls_menu_option_3_offset = 63; //How far to the right of the "pause" text should the actual mapping be.
int controls_menu_option_4_offset = 30; //How far to the right of the "up" text should the actual mapping be.
int controls_menu_option_5_offset = 53; //How far to the right of the "up" text should the actual mapping be.
int controls_menu_option_6_offset = 50; //How far to the right of the "up" text should the actual mapping be.
int controls_menu_option_7_offset = 62; //How far to the right of the "up" text should the actual mapping be.
int timer_controls_menu_move = sec*1; //While this timer is running, the menu will move horizontally.
int controls_menu_move_trigger = 0; //When this is 1, start the timer.
int controls_menu_selected_option = 0; //What option is currently selected in the controls menu.
int controls_menu_record_input = 0; //When this is 1. The program will wait until you have pressed a key to record it as the new mapping for the selected action.
int controls_menu_recording_option = -1; //This represents the option we are currently recording.
int controls_menu_skip_recording_mode = 0; //If this is 1, record mode will not be entered for this frame only.
//int controls_menu_skip_navigation = 0; //Menu navigation (going back to main menu) is turned off when setting select and pause inputs, this is to avoid bugs.
//int controls_menu_navigation_delay = 2; //The ability to vavigate back to the main menu will be delayed by 2 frames. 

//Video menu.
int video_menu_move_trigger = 0; //If 1, the menu will start moving into view based on timer variable.
int timer_video_menu_move = sec*1; //Timer that runs when the menu moves into or out of view. Different parts of the menu moves at different times.
float video_menu_option_0_x = 480.0; //The horizontal position of the first option in the video menu.
float video_menu_option_1_x = 480.0; //The horizontal position of the second option in the video menu.
float video_menu_option_2_x = 480.0; //The horizontal position of the third option in the video menu.
float video_menu_option_3_x = 480.0; //The horizontal position of the fourth option in the video menu.
float video_menu_option_4_x = 480.0; //The horizontal position of the fifth option in the video menu.
int video_menu_selected_option = 0; //What setting is currently selected.
float video_menu_option_0_alpha = 1.0; //The alpha value of "selected" bitmap.
float video_menu_option_1_alpha = 1.0; //The horizontal position of the second option in the video menu.
float video_menu_option_2_alpha = 1.0; //The horizontal position of the third option in the video menu.
float video_menu_option_3_alpha = 1.0; //The horizontal position of the fourth option in the video menu.
float video_menu_option_4_alpha = 1.0; //The horizontal position of the fifth option in the video menu.
int video_menu_option_0_option = 3; //What resolution is currently selected.
int video_menu_option_1_option = 0; //What window mode is currently selected.
int video_menu_option_2_option = 3; //What refresh rate is currently selected.
char text_video_menu_option_0_option[24]; //String representation of resolution options.
char text_video_menu_option_1_option[24]; //String representation of window options.
char text_video_menu_option_2_option[24]; //String representation of refresh rate options.

//Audio menu.
short audio_menu_move_trigger = 0; //If 1, the menu will start moving into view based on timer variable.
short timer_audio_menu_move = 60; //Timer that runs when the menu moves into or out of view. Different parts of the menu moves at different times.
int audio_menu_option_0_x = 480; //The horizontal position of the first option.
float audio_menu_option_0_alpha = 1.0;
char audio_menu_option_0_option = 5; //What option is selected in the audio menu?
char text_audio_menu_option_0_option[24]; //String representing audio option.
float master_volume = 1.0; //This is applied to every sample instance every frame.
short instance_count = 156; //How many instances are we using currently. How manuy structs in the instance array are occupied.

//Three strings read from video files. Used temporarily at startup to determine video settings from file.
char resolution[32];
char windowmode[32];
char refresh[32];

//Cutscene part1.
int timer_cutscene_part1 = sec*6; //Over the course of this timer. More and more of the date will be revealed.
int cutscene_part1_draw_x = 165; //X position of where the text should be drawn.
int cutscene_part1_draw_y = 105; //Y position of where the text should be drawn.

//Cutscene part2.
int timer_cutscene_part2 = sec*12; //Over the course of this timer, text will show up.
int cutscene_part2_draw_x = 30; //X position of where the text should be drawn.
int cutscene_part2_draw_y = 105; //Y position of where the text should be drawn.

//Cutscene part3.
int timer_cutscene_part3 = sec*15; //Over the course of this timer, text will show up.
int cutscene_part3_draw_x = 5; //X position of where the text should be drawn.
int cutscene_part3_draw_y = 105; //Y position of where the text should be drawn.
float cutscene_part3_skull_alpha = 255; //The transparency level of the skull shown in the opening cutscene.

//Cutscene part4.
int timer_cutscene_part4 = sec*15; //Over the course of this timer, text will show up.
int cutscene_part4_draw_x = 60; //X position of where the text should be drawn.
int cutscene_part4_draw_y = 105; //Y position of where the text should be drawn.

//Cutscene general.
int current_cutscene_part = 0; //What part of the cutscene is currently in action.

//Choose name screen. ON screen keyboard. After you press play button in the main menu.
int on_screen_keyboard_x = 0; //Where is the on screen keyboard located on the screen.
int on_screen_keyboard_y = 0; //Where is the on screen keyboard located on the screen.
int position_in_text = 0; //Where are we adding a character into the string that is drawn on the line on enter name screen.
int selected_key_horizontal = 0;
int selected_key_vertical = 0;
char text_what_is_your_name_pilot[] = "WHAT IS YOUR NAME, PILOT?"; //Question asked on the screen that pops up after you press the play button.
char text_playername[] = "                "; //The player can enter a name up to 13 characters. (It used to be 16 characters but anything beyond 13 characters caused segmentation fault in progress menu).
//text_playername[0] = 0;
int timer_blinking_text_cursor = 30; //This is a timer that every time it runs out changes if the text cursor is visible or not.
int text_cursor_visible = 1; //Is the text cursor in the name chouse menu visible or not.
int text_cursor_position = 131; //Starting position of the cursor on screen. This is the x coordniate. The Y coordinate is static (hard coded).
int save_count = 0; //How many save files are there in the user data folder. 
int duplicate_save = 0; //Used to store the result of checking if save file already exists.


//levels general.
int current_level = 1; //You are on the first level.
float level_black_screen_alpha = 255; //The transparency of the black screent drawn on the screen.


//Player stats and positioning and stuff.
int player_durability = 10; //Players hit points.
int player_shield = 5; //How much shield strength does the player have left.
int player_laser = 5; //Laser/bomb.
int player_plasma = 5; //Rate of fire.
int player_energy = 0; //How many energy cells the player has picked up but not yet spent.
int player_ammo = 200; //The amount of ammo left until the plasma decreases by 1.
char text_player_energy[16]; //How many energy cells do you have right now (string representation).
int player_x = ((270*64)/2)-((16*64)/2); //Initial X position of player.
int player_y = 270*64; //Initial Y position of player.
int player_movespeed = 128; //How fast the player moves each frame.
int timer_plasma_cooldown = 45-(player_plasma*4); //Timer cooldown for shooting the next bullet.
int player_bullet_damage = 1; //How many health points is removed from enemies when they get hit. Only higher than 1 in testing when you want to complete levels fast.
int timer_blinking = 0; //Short timer that turns the players visibility on and off quickly to create a blinking animation (This happens when hurt).
int blink_count = 0; //How many blinks should happen before the player should be fully visible again.
int visible = 1; //Is the player visible or not.
int timer_shield_hurt = 0; //When this timer is above 0, draw the hurt version of the player shield.
int timer_shield_visibility = 0;  //When shield is gone timer will count down and every time it resets a little less of the shield can be seen.
int shield_visibility = 5; //How much of the shield is visible (Lower value means a smaller portion of the full sprite is drawn). 
char text_score[64]; //The text representation of the player score.
int timer_score = 45; //Every time this timer runs out the player gets score.
int score = 0; //How much score do you have.
int choose_death_quote = 0; //0 or 1. if 1, death quote will be chosen.
int chosen_death_quote = 0; //What death quote will show up on the death screen.
int timer_entering = 60; //The player can't move until this timer has run out. 
int gun_heat = 0; //How hot is the player plasma cannon/running.
int timer_gun_heat = 5; //Each time this timer runs out, the gun will cool by one point.
char devtest_text[32];
int timer_no_shooting = 0; //If the gun overheats, you won't be able to shoot during this timer. 
int triplefire_enabled = 0; //Is triplefire powerup enabled?
int timer_triplefire_enabled = 0; //When this timer runs out, the triplefire powerup will no longer be active.
char text_timer_triplefire[12]; //Will contain the text representation of the variable above.
int timer_death_powerup = 0; //How many frames are there left of the death powerup timer. 
char text_timer_death_powerup[12]; //Text representation of the time left of the death powerup.
int timer_laser_powerup = 0; //How many frames are there left of the laser powerup timer.
char text_timer_laser_powerup[12]; //Text representation of the time left of the laser powerup.
bool bin_laser = false; //Alternates between two values constantly each frame.
char player_shot = 0; //Determines if the player has shot a bullet yet or not. 
short hailstorms_survived = 0; //How many hailstorms have we survived? Used for tracking and unlocking achievement.
char timer_invincible = 10; //During this timer the player can not be hurt. This runs in the start of the game for a few frames. It was used to avoid a bug from happening when you replay the game.

//Player laser. Laser attack. Laser ability.
struct hitbox hitbox_laser; //The hitbox that the enemies will interact with when getting hurt by laser.
struct hitbox hitbox_laser_2; //The hitbox that the enemies will interact with when getting hurt by laser.
struct hitbox hitbox_laser_3; //The hitbox that the enemies will interact with when getting hurt by laser.
int timer_laser = 0; //The amount of time the laser will be active for.
int laser_y; //The y position of the top of the laser.
int laser_y_2; //The y position of the top of the laser.
int laser_y_3; //The y position of the top of the laser.

//Gameplay text.
char text_durability_1[] = "DURABILITY"; //Draw this text at the top of the left side panel.
char text_shield[] = "SHIELD"; //Text above shield stat bar.
char text_laser[] = "LASER"; //Text above laser bar.
char text_plasma[] = "PLASMA"; //Text above plasma bar.

//In game ui/panel.
int gun_heat_background_color = 0; //When this value increases the redness in the background of the gun heat bar.
int timer_gun_heat_blinking = 0; //Every time this timer runs out the color of the gun heat bars outline will change.

//Level 1.
int timer_level_1 = 0; //Timer that rules all the events in level 1. Counts up not down.
int level_1_section = 0; //What section of level 1 are we on right now.
int gameplay_frames_passed = 0; //How many frames have passed while in gameplay mode.
int gameplay_seconds_passed = 0; //How many seconds have passed while in gameplay mode.
int gameplay_minutes_passed = 0; //How many minutes have passed while in gameplay mode.
int gameplay_hours_passed = 0; //How many hours have passed while in gameplay mode.
char text_gameplay_time_passed[64]; //Text representation of in game time.
struct hitbox hitbox_gameplay_screen; //A hitbox that coveres the whole screen.
char text_brace_yourself[] = "BRACE YOURSELF!"; //The splash screen text that shows up in the beginning of the game.

//Font.
int small_font_size = 7; //The width and height of small font.

//Devtest.
char texts[] = "ABC";
int number = 0;
char text_integer_0[32]; //Number that is read from file each frame.
char text_integer_1[32]; //Number that is read from file each frame.
char text_integer_2[32]; //Number that is read from file each frame.
char text_integer_3[32]; //Number that is read from file each frame.
char text_integer_4[32]; //Number that is read from file each frame.
char text_integer_5[32]; //Number that is read from file each frame.
char text_integer_6[32]; //Number that is read from file each frame.
char text_integer_7[32]; //Number that is read from file each frame.
int integer_0; //Integer that is read from file each frame.
int integer_1; //Integer that is read from file each frame.
int integer_2; //Integer that is read from file each frame.
int integer_3; //Integer that is read from file each frame.
int integer_4; //Integer that is read from file each frame.
int integer_5; //Integer that is read from file each frame.
int integer_6; //Integer that is read from file each frame.
int integer_7; //Integer that is read from file each frame.
int timer_test = 20;
char text_beta_version[] = "FINAL VERSION"; 

//Pause menu in game (stats part).
int pause_menu_selected_stat = 0; //What stat is being selected for energy allocation.
int pause_menu_selected_tab_top = 0; //What tap is selected on the top of the pause menu. Option one is energy allocation. 
int pause_menu_selected_upgrade = 0; //What upgrade is currently selected in the pause menu.
int selected_stat_background_y = 35*64; //Position of blue background behind currently selected stat.
int selected_stat_background_y_target = 35*64; //Where should the stat background move to.
char text_add_shield[] = "ALLOCATE ENERGY TO SHIP SHIELD"; //Text prompt seen next to the button that allocates energy to shield stat.
char text_add_laser[] = "ALLOCATE ENERGY TO SHIP LASER";
char text_add_plasma[] = "ALLOCATE ENERGY TO PLASMA CANNON";
char text_upgrades[] = "UPGRADES";
char text_hotkey_1[] = "HOTKEY: 1";
char text_hotkey_2[] = "HOTKEY: 2";
char text_hotkey_3[] = "HOTKEY: 3";
int player_shield_offset = 0; //Should the game show one more or one less energy than the player actually has. Used for blinking effect.
int timer_player_shield_offset = 0; //How many frames does it take for shield to flash and for the timer to refresh.
int player_shield_flash_count = 0; //How many times does the stat bar flash change.
int player_laser_offset = 0; //Should the game show one more or one less energy than the player actually has. Used for blinking effect.
int timer_player_laser_offset = 0; //How many frames does it take for laser stat to flash and for the timer to refresh.
int player_laser_flash_count = 0; //How many times does the stat bar flash change.
int player_plasma_offset = 0; //Should the game show one more or one less energy than the player actually has. Used for blinking effect.
int timer_player_plasma_offset = 0; //How many frames does it take for plasma to flash and for the timer to refresh.
int player_plasma_flash_count = 0; //How many times does the stat bar flash one changed.

//Pause menu in game (upgrades part).
char text_gun_cools_down_twice_as_fast[] = "GUN COOLS DOWN AT 2X SPEED"; //First upgrade.
char text_durability_is_fully_repaired[] = "SPACESHIP IS FULLY REPAIRED"; //The durability will be doubled from it's current amount.
char text_3x_energy_for_every_pickup[] = "3X ENERGY FOR EVERY PICKUP";
char text_laser_costs_half_as_much_energy[] = "LASER COSTS HALF AS MUCH ENERGY";
char text_plasma_never_depletes[] = "PLASMA DEPLETES 4 TIMES SLOWER";
char text_shield_regenerates[] = "SHIELD REGENERATES 3 PER MINUTE";
char text_cost_of_upgrade[] = "COST:    "; //This will change to whatever the actual cost of the currently selected upgrade is and drawn on the upgrade menu.
int upgrade_0 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
int upgrade_1 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
int upgrade_2 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
int upgrade_3 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
int upgrade_4 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.
int upgrade_5 = 0; //If upgrade is set to 0, it is locked. If 1, the upgrade is active and enabled.

//Pause menu in game (Settings part).
int skip_closing_menu = 0; //If this value is above 0 the menu can not be closed with pause input. 
int skip_input_recording = 0; //If this is above 0, input recording can not happen.
int pause_menu_selected_tab = 0; //What settings tab are we currently on. 
int pause_menu_selected_resolution = 1080; //What resolution is selected in the video menu (pause menu).
int pause_menu_selected_window_mode = 0; //What window mode is currently selected in pause menu.
int pause_menu_record_input = 0; //If this changes to a 1. You are now in controls edit mode.
char text_window_mode[] = "WINDOW MODE: "; //Video menu in pause menu window mode text.
char text_resolution[] = "RESOLUTION: "; //Video menu in pause menu resolution text.
char text_resolution_variable[12]; //This is the actual resolution shown after the semicolon in the video menu that is in the pause menu.
char text_window_mode_variable[14]; //This is the actual window mode shown after the semicolon.

char text_shoot2[] = "SHOOT: ";
char text_laser2[] = "LASER: ";
char text_select2[] = "SELECT: ";
char text_pause2[] = "PAUSE: ";
char text_up2[] = "UP: ";
char text_down2[] = "DOWN: ";
char text_left2[] = "LEFT: ";
char text_right2[] = "RIGHT: ";

char text_master_volume[] = "MASTER VOLUME:   ";


//Difficulty and progression.
unsigned long int progression = 0; //How far have we progressed in the game. How many frames in other words. 
int difficulty = 0; //0 is the lowest difficulty.

//Integers used to temporarily store randomly generated numbers.
int random_int_0, random_int_1, random_int_2, random_int_3; //Will be used to store randomly generated values.

//Cheat file.
char text_cheat[1000];

//Game over screen. Quotes stated on death screen.
int game_over_y = 270*64;
int death_quote_y = 270*64;
char text_game_over[] = "GAME OVER"; //Text representation of game over.
int timer_game_over_delay = 50; //How many frames should it take for the game over screen to appear after you have died.
int timer_death_quote_delay = 65; //How many frames should it take foe the death quote to appear.
char text_death_quote_0[] = "YOU HAVE BEEN SLAIN!";
char text_death_quote_1[] = "YOUR STARSHIP WAS DESTROYED";
char text_death_quote_2[] = "THE BATTLE HAS BEEN LOST";
char text_death_quote_3[] = "MISSION FAILED";
char text_replay[] = "REPLAY";
char text_main_menu[] = "MAIN MENU";
int game_over_selected_option = 0; //Will the player choose to replay or go back to the main menu?
int game_over_chosen_option = 0; //What option has the player selected, replay or menu?
short timer_reset = 0; //Don't touch save files when game has just been reset because it causes segfaults.


//Enemy spawner.
int random_enemy_0_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
int random_enemy_1_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
int random_enemy_2_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
int random_enemy_3_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
int random_enemy_4_spawn = 0; //Used for determining if we are going to spawn an enemy or not.
short timer_spawn_delay = 60*6; //During this timer. Enemies don't spawn.

//Progress menu.
int timer_progress_menu_move = 30; //While this timer is running, the menu will move horizontally.
int progress_menu_move_trigger = 0; //When this is 1, start the timer.
int progress_menu_background_x = 480*64; //X position of where the background should be drawn.
char * text_list_of_save_files = malloc(17*16+1);
memset(text_list_of_save_files, '-', 17*16);
text_list_of_save_files[17*16+1] = '\0';
char text_high_scores[64] = "HIGH SCORES"; //This string is drawn in progress menu.
char text_first_place[64+32];
char text_second_place[64+32];
char text_third_place[64+32];
char text_fourth_place[64+32];
char text_fifth_place[64+32];
char text_sixth_place[64+32];
char text_seventh_place[64+32];
char text_eigth_place[64+32];
char text_ninth_place[64+32];
char text_tenth_place[64+32];
char text_eleventh_place[64+32];
char text_twelfth_place[64+32];
char text_thirteenth_place[64+32];
char text_fourteenth_place[64+32];
char text_fifteenth_place[64+32];
char text_achievements[64] = "ACHIEVEMENTS"; //The title you see on the progress screen.
char text_name_temp[32]; //Temporary. Used for storing player name in progress menu for drawing.
int progress_menu_player = 0; //What player is currently selected in the progress menu. 
int name_x_position; //X position of the name of the currently selected player.
char text_enter_name[] = "ENTER A VALID NAME"; //The name you entered is invalid / has no characters.
char text_max_number_of_saves_reached[] = "MAX NUMBER OF SAVES REACHED"; //Used to show you have too many save files when trying to create a new one in the choose name menu.
int timer_enter_name_error = 0; //During this timer there will be an error message shown on screen.
int timer_too_many_saves_error = 0; //During this timer there will be an error message shown on screen.
char text_selected_slot[20]; //Text representation of what slot is currently selected.
char text_achievement_1[] = "PACIFIST:";
char text_achievement_1_text[] = "500 SCORE WITHOUT SHOOTING"; //Implemented.
char text_achievement_2[] = "STORM HIKER:";
char text_achievement_2_text[] = "SURVIVE 8 HAILSTORMS"; //Implemented.
char text_achievement_3[] = "SHIP MECHANIC:";
char text_achievement_3_text[] = "UNLOCK EVERY SHIP UPGRADE"; //Implemented.
char text_achievement_4[] = "SUPERCHARGER:";
char text_achievement_4_text[] = "MAX OUT EVERY ENERGY BAR"; //Implemented.
char text_achievement_5[] = "SHIELDBREAKER:";
char text_achievement_5_text[] = "KILL 20 SHIELD GENERATORS"; //Implemented.
char text_achievement_6[] = "A-STUDENT:";
char text_achievement_6_text[] = "GET 10.000 SCORE"; //Implemented.
char text_achievement_7[] = "SPACE VETERAN:";
char text_achievement_7_text[] = "SURVIVE FOR 30 MINUTES"; //Implemented.
char text_achievement_8[] = "SPEEDRUNNER:";
char text_achievement_8_text[] = "GET 1000 SCORE IN 3 MINUTES"; //In progress/Being tuned.                          "
char text_locked[] = "LOCKED";
char text_unlocked[] = "UNLOCKED";
float locked_achievement_text_alpha = 0.8;
unsigned char player_selected = 0; //Have you selected a player that exists or are you looking at a "NO DATA" screen. 
char delete_hold = 0; //How long have you held the delete key for?
char text_hold_delete_to_permanently_delete_user[] = "HOLD DELETE TO PERMANENTLY DELETE USER"; //Instruction for deleting a player character.


//progress_tracker
char text_progress_file[64]; //String that will contain text that is read from progress file.
char text_progress_temp[32]; //Temporary storage for handling numbers in progress file before converting them to integers.
FILE * file_progress; //This will be read every frame.
unsigned long int gametime; //Used for storing gametime that is read from progress file.
unsigned long int gametime_seconds; //How many seconds have you played.
unsigned long int gametime_minutes; //How many minutes have you played.
unsigned long int gametime_hours; //How many hours have you played.
char text_gametime[] = "GAMETIME:";//Title of section of progress screen that shows time played.
char text_gametime_seconds[32]; //Text representation of gametime_seconds.
char text_gametime_minutes[32]; //Text representation of gametime_seconds.
char text_gametime_hours[32]; //Text representation of gametime_seconds.


//Score tracker.
//char text_replacement_score[64]; //This is the new score that will replace an existing score in the high scores file.
char text_score_tracker[32]; //Text representation of current in game score after you died.
int score_ranking; //What rank does your current score get in the list of high scores. 
char text_score_0[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_1[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_2[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_3[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_4[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_5[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_6[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_7[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_8[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_9[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_10[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_11[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_12[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_13[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_14[64]; //Text that is drawn in the progress screen. This is loaded from file.
char text_score_0_int[64]; //This is the score read from file but only the number part. 
char text_score_1_int[64]; //This is the score read from file but only the number part. 
char text_score_2_int[64]; //This is the score read from file but only the number part. 
char text_score_3_int[64]; //This is the score read from file but only the number part. 
char text_score_4_int[64]; //This is the score read from file but only the number part. 
char text_score_5_int[64]; //This is the score read from file but only the number part. 
char text_score_6_int[64]; //This is the score read from file but only the number part. 
char text_score_7_int[64]; //This is the score read from file but only the number part. 
char text_score_8_int[64]; //This is the score read from file but only the number part. 
char text_score_9_int[64]; //This is the score read from file but only the number part. 
char text_score_10_int[64]; //This is the score read from file but only the number part. 
char text_score_11_int[64]; //This is the score read from file but only the number part. 
char text_score_12_int[64]; //This is the score read from file but only the number part. 
char text_score_13_int[64]; //This is the score read from file but only the number part. 
char text_score_14_int[64]; //This is the score read from file but only the number part. 
memset(text_score_0, 0, 63);
memset(text_score_1, 0, 63);
memset(text_score_2, 0, 63);
memset(text_score_3, 0, 63);
memset(text_score_4, 0, 63);
memset(text_score_5, 0, 63);
memset(text_score_6, 0, 63);
memset(text_score_7, 0, 63);
memset(text_score_8, 0, 63);
memset(text_score_9, 0, 63);
memset(text_score_10, 0, 63);
memset(text_score_11, 0, 63);
memset(text_score_12, 0, 63);
memset(text_score_13, 0, 63);
memset(text_score_14, 0, 63);
memset(text_score_0_int, 0, 64);
memset(text_score_1_int, 0, 64);
memset(text_score_2_int, 0, 64);
memset(text_score_3_int, 0, 64);
memset(text_score_4_int, 0, 64);
memset(text_score_5_int, 0, 64);
memset(text_score_6_int, 0, 64);
memset(text_score_7_int, 0, 64);
memset(text_score_8_int, 0, 64);
memset(text_score_9_int, 0, 64);
memset(text_score_10_int, 0, 64);
memset(text_score_11_int, 0, 64);
memset(text_score_12_int, 0, 64);
memset(text_score_13_int, 0, 64);
memset(text_score_14_int, 0, 64);
int score_0; //Integer representation of score read from file.
int score_1; //Integer representation of score read from file.
int score_2; //Integer representation of score read from file.
int score_3; //Integer representation of score read from file.
int score_4; //Integer representation of score read from file.
int score_5; //Integer representation of score read from file.
int score_6; //Integer representation of score read from file.
int score_7; //Integer representation of score read from file.
int score_8; //Integer representation of score read from file.
int score_9; //Integer representation of score read from file.
int score_10; //Integer representation of score read from file.
int score_11; //Integer representation of score read from file.
int score_12; //Integer representation of score read from file.
int score_13; //Integer representation of score read from file.
int score_14; //Integer representation of score read from file.


//Progress loader. (Depending on what user is selected in progress menu) load_progression_data_logic.c.
char path_to_gametime[64];
char text_gametime_progress_menu[32]; //Used to store raw data read from gametime file. 
long unsigned int gametime_progress_menu; //Numerical representation of gametime after conversion froms string.
char path_to_score[64];
char path_to_achievements[64];
int number_of_saves = 0;
short timer_deleted = 0; //Tracks if you just deleted a file or not.
char text_temp_44[64]; //Temporary array used for when you delete a player folder.

//UI ship logic. Ship that you see on the right side of the screen.


//UI ship.
short timer_ui_ship_damage_flash; //During this timer the part of the ui where you can monitor your ships condition will flash red instead of the regular blue color.
short durability_last_frame; //This is the durability the player had last frame. It is used for determining when to start the timer above.


//Hailstorm.
int timer_hailstorm_duration = 0; //This is how frames/seconds the hailstorm will last for.
int timer_hailstorm_start = 60*105; //This is how long until the next hailstorm starts.
char text_warning[] = "WARNING"; //Text message that appears when a hailstorm is close.
char text_plasma_hailstorm_imminent[] = "PLASMA HAILSTORM IMMINENT"; //Text message that appears when a hailstorm is close.
float hailstorm_background_tint = 0.0; //The alpha level of the background.
int hailstorm_background_x = (-50*64); //Where should we draw the hailstorm background?
int hailstorm_background_x_movement = 0; //How much should the hailstorm move this frame?
int hailstorm_movement_direction = 1; //Move to the right if it is 1. To the left if it is 0.
int timer_hailstorm_movement_direction = 35; //When this movement timer runs out the direction that the animation is moving in will start to change.
char switcher = 0;  //Values that alternates between 0 and 1 over and over.

//Achievement tracker logic.
unsigned char achievements_byte; //One Byte representing the achievements in the game. Each bit is used for telling if a certain achievement is unlocked or not. There are 8 achievements because there are 8 bits in a byte.
int shielders_killed = 0; //How many shielder enemies have you killed?

//Achievement popup.
int timer_achievement_1_popup = 2; //During this timer the animation will move into the screen and then out again.
int timer_achievement_2_popup = 2;
int timer_achievement_3_popup = 2;
int timer_achievement_4_popup = 2;
int timer_achievement_5_popup = 2;
int timer_achievement_6_popup = 2;
int timer_achievement_7_popup = 2;
int timer_achievement_8_popup = 2;
int achievement_1_popup_y = 40*64; //The position to draw the popup at. 
int achievement_2_popup_y = 40*64;
int achievement_3_popup_y = 40*64;
int achievement_4_popup_y = 40*64;
int achievement_5_popup_y = 40*64;
int achievement_6_popup_y = 40*64;
int achievement_7_popup_y = 40*64;
int achievement_8_popup_y = 40*64;
char text_achievement_unlocked[] = "ACHIEVEMENT UNLOCKED:                            ";
int popup_movement_speed = 0; //How fast does the popup move up the screen.
unsigned char popup_1_shown = 0; //This ensures the popup will only happen once and not repeat over and over.
unsigned char popup_2_shown = 0;
unsigned char popup_3_shown = 0;
unsigned char popup_4_shown = 0;
unsigned char popup_5_shown = 0;
unsigned char popup_6_shown = 0;
unsigned char popup_7_shown = 0;
unsigned char popup_8_shown = 0;


//Small enemy, these are the enemies that spawn in groups and move in patterns.
short timer_enemy_small_spawner; //How long left until the next one will spawn?
int enemy_small_spawn_x; //Where on the x axis will the enemies spawn?
unsigned char enemy_small_spawn_amount; //How many more small enemies will we spawn?
int enemy_small_central_ship_x; //The position of the central ship in pattern 0 formation.
short timer_enemy_small_spawn_delay = 0; //While this timer is running we can not spawn more of these enemies.

/* Special information.
Blue color used in menus = (117, 150, 221);
*/