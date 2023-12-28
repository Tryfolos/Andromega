//Including things.
#include "include_headers.c"
/*
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
*/


//Main function.
int main () {


//Setting up keyboard variables.
#include "input_setup.c"

//Setting up hitbox struct AND collision check functions.
#include "hitbox_setup.c"

//Primitive variables.
#include "primitive_variables.c"

//stringtolower implementation.
void stringtolower(char string[]) {

f = 0;
while (f < 1000) {

if (string[f] == '\0') {
break;
}
string[f] = tolower(string[f]);

f += 1;
}

}


//Initializing allegro.
al_init();
al_init_image_addon();
al_init_primitives_addon();
al_install_keyboard();
al_install_audio();
al_init_acodec_addon();


//Checking if savedata folder exists. If not, create it.
if (access("user_data", F_OK)) {
mkdir("user_data", 0777);
}

//Loading controls from file.
#include "loading_controls_from_file.c"

//Loading video settings on startup.
#include "load_video_settings.c"

//OpenGL.
al_set_new_display_flags(ALLEGRO_OPENGL);
al_set_new_display_option(ALLEGRO_OPENGL_MAJOR_VERSION, 1, ALLEGRO_REQUIRE);
al_set_new_display_option(ALLEGRO_OPENGL_MINOR_VERSION, 5, ALLEGRO_REQUIRE);

//Setting new display options.
al_set_new_display_option(ALLEGRO_VSYNC, 2, ALLEGRO_REQUIRE);
switch (window_mode) {

case 0:
al_set_new_display_flags(ALLEGRO_WINDOWED);
break;
case 1:
al_set_new_display_flags(ALLEGRO_NOFRAME);
break;
case 2:
al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
break;


};

//Creating gameplay display.
ALLEGRO_BITMAP * bitmap_gameplay_display = al_create_bitmap(270, 270);


//Setting up internal and external display (two different backbuffers).
ALLEGRO_DISPLAY * external_display = al_create_display(external_display_width, external_display_height);
ALLEGRO_BITMAP * internal_display = al_create_bitmap(480, 270);

//Loading title screen logo.
ALLEGRO_BITMAP * bitmap_title = al_load_bitmap("assets/andromega.png");

//Loading title screen line.
ALLEGRO_BITMAP * bitmap_title_line = al_load_bitmap("assets/title_screen_line.png");

//Background for title screen. 
ALLEGRO_BITMAP * bitmap_title_planet = al_load_bitmap("assets/title_planet.png");

//White version of andromega title.
ALLEGRO_BITMAP * bitmap_title_white = al_load_bitmap("assets/andromega_2.png");

//Creating black bitmap that covers the whole screen.
ALLEGRO_BITMAP * bitmap_black_screen = al_create_bitmap(480, 270);
al_set_target_bitmap(bitmap_black_screen);
al_clear_to_color(al_map_rgba(0, 0, 0, 255));

//Function for random numbers in range.
int randint(int lower, int upper) {

int num = (rand() % (upper - lower + 1)) + lower;

return num;
}

//Setting seed of random number generation.
srand(time(NULL));


//Function for limiting volume level to 0-10 range.
int limit_master_volume(int volume) {
if (volume > 10) {
volume = 10;
}
if (volume < 0) {
volume = 0;
}
return volume;
}


//Main menu setup.
#include "main_menu_setup.c"

//Controls menu setup.
#include "controls_menu_setup.c"

//Video menu setup.
#include "video_menu_setup.c"

//Cutscene setup.
#include "cutscene_setup.c"

//Player bullets setup.
#include "player_bullets_setup.c"

//Backgrounds for levels.
#include "loading_level_backgrounds.c"

//Enemy bullets setup.
#include "enemy_bullet_setup.c"

//Setup for energy cell pickup that drops from killed enemies.
#include "energy_cell_pickup_setup.c"

//Gameplay UI and pause menu setup.
#include "gameplay_ui_setup.c"

//Enemy setup.
#include "enemy_setup.c"

//Particle setup.
#include "particle_setup.c"

//Enemy shielder setup.
#include "enemy_shielder_setup.c"

//Invader enemy. Enemy invader setup.
#include "invader_setup.c"

//Laser particle setup.
#include "laser_particle_setup.c"

//Laser pickup seyup.
#include "laser_pickup_setup.c"

//Triplefire powerup.
#include "powerup_triplefire_pickup_setup.c"

//Death pickup setup.
#include "death_pickup_setup.c"

//Ui ship setup.
#include "ui_ship_setup.c"

//Hailstorm setup.
#include "hailstorm_setup.c"

//Hailstorm setup.c.
#include "hailstorm_background_setup.c"

//Enemy small setup.
#include "enemy_small_setup.c"

//Audio setup.
#include "audio_setup.c"

//Crawler setup.
#include "crawler_setup.c"

//Setup for twinkling stars that are seen on the title screen. 
#include "twinkling_stars_setup.c"


//Creating hitbox for player.
struct hitbox hitbox_player = create_hitbox(player_x, player_y, player_x+16, player_y+16);

//Creating event queue.
ALLEGRO_EVENT_QUEUE * event_queue = al_create_event_queue(); 


//Loading lock bitmap.
ALLEGRO_BITMAP * bitmap_lock = al_load_bitmap("assets/lock.png");

//Loading player bitmap.
ALLEGRO_BITMAP * bitmap_player = al_load_bitmap("assets/player_plane.png");

//Loading laser addon that shows up to the side of the ship when the laser powerup is active.
ALLEGRO_BITMAP * bitmap_player_laser_addon = al_load_bitmap("assets/player_laser_addon.png");

//Loading player shield bitmap.
ALLEGRO_BITMAP * bitmap_player_shield = al_load_bitmap("assets/player_shield.png");
ALLEGRO_BITMAP * bitmap_player_shield_hurt = al_load_bitmap("assets/player_shield_hurt.png");
ALLEGRO_BITMAP * bitmap_player_supershield = al_load_bitmap("assets/player_supershield.png");

//Increase stat buttons.
ALLEGRO_BITMAP * bitmap_add_shield = al_load_bitmap("assets/add_shield.png");
ALLEGRO_BITMAP * bitmap_add_laser = al_load_bitmap("assets/add_laser.png");
ALLEGRO_BITMAP * bitmap_add_firerate = al_load_bitmap("assets/add_firerate.png");

//Game over screen selection background.
ALLEGRO_BITMAP * bitmap_game_over_selection = al_load_bitmap("assets/game_over_screen_selection.png");

//Progress menu assets.
ALLEGRO_BITMAP * bitmap_progress_menu_background = al_load_bitmap("assets/progression_background.png");

//On screen keyboard asset.
ALLEGRO_BITMAP * bitmap_on_screen_keyboard = al_load_bitmap("assets/keyboard.png");

//Story background.
ALLEGRO_BITMAP * bitmap_story_background = al_load_bitmap("assets/story.png");

//Triplefire timer/counter.
ALLEGRO_BITMAP * bitmap_triplefire_timer = al_load_bitmap("assets/triplefire_timer.png");

//Death powerup icon.
ALLEGRO_BITMAP * bitmap_death_icon = al_load_bitmap("assets/death_icon.png");

//Laser powerup.
ALLEGRO_BITMAP * bitmap_laser_powerup_icon = al_load_bitmap("assets/laser_powerup_icon.png");

//File struct.
FILE * file_cheats;

//Directory and directory entry structs. Also opening user data folder.
DIR * directory; //Directory struct.
struct dirent * entry; // Entry struct.

//This directory and entry will be used to count how many folders there are in the user_data directory.
DIR * directory_2; //Directory struct.
struct dirent * entry_2; // Entry struct.

//Generic file pointer.
FILE * fstream;

//Loading the font bitmap.
ALLEGRO_BITMAP * bitmap_font = al_load_bitmap("assets/font.png");
al_convert_mask_to_alpha(bitmap_font, al_map_rgb(0, 0, 0)); //Removing black background to make all letter background transparent.

//Function for drawing text.
#include "draw_text_setup.c"

//Functions for checking if the right key is being pressed to perform an action. This is trivial for remappable keys to work.
#include "check_input_functions.c"

//Hitbox that coveres gameplay screen.
hitbox_gameplay_screen.x1 = 0;
hitbox_gameplay_screen.y1 = 0;
hitbox_gameplay_screen.x2 = 270*64;
hitbox_gameplay_screen.y2 = 270*64;

//Registering input event sources.
al_register_event_source(event_queue, al_get_keyboard_event_source());
al_register_event_source(event_queue, al_get_display_event_source(external_display));

//Setting title of window.
al_set_window_title(external_display, "Andromega");


//Setting icon.
ALLEGRO_BITMAP * bitmap_icon = al_load_bitmap("assets/icon.png");
al_set_display_icon(external_display, bitmap_icon);


//Devtest.
ALLEGRO_OPENGL_VARIANT version;


//Opening audio file and loading current audio level if the file exists. 
fstream = fopen("user_data/audio", "rb+");
if (fstream != NULL) {
audio_menu_option_0_option = fgetc(fstream);
}

//Checking if file exists. Creating it and setting default values if it doesn't
fstream = fopen("user_data/audio", "rb");
if (fstream == NULL) {
fstream = fopen("user_data/audio", "wb");
putc(5, fstream);
}
fclose(fstream); //Closing filestream.

//Start of main loop.
while (running == true) {

start_of_game:


//Setting target bitmap to internal display.
al_set_target_bitmap(internal_display);

//Clock and framerate logic.
#include "clock_and_framerate_logic.c"

//Clearing gameplay display every frame.
al_set_target_bitmap(bitmap_gameplay_display);
al_clear_to_color(al_map_rgb(0, 0, 0));

//Clearing internal_display.
al_set_target_bitmap(internal_display);
al_clear_to_color(al_map_rgba(0, 0, 0, 255));

//Resetting event struct each frame.
ALLEGRO_EVENT event;

//Getting event out of queue.
al_get_next_event(event_queue, &event);

//If you pressed the x in the corner of the screen, quit the game.
if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
running = false;
}

//Pausing game when pressing menu button in game.
if (player_durability > 0) {
if (current_cutscene_part == -1) {
if (input_pause() == 1) {
if (game_paused == 0) {
if (skip_closing_menu == 0) {
game_paused = 1;
goto _667;
}}
if (game_paused == 1) {
if (skip_closing_menu == 0) {
game_paused = 0;
}}
}}
}
_667:


//Setting selected_resolution in pause menu.
if (current_cutscene_part == 0) {
if (external_display_height == 270) {
pause_menu_selected_resolution = 270;
}
if (external_display_height == 540) {
pause_menu_selected_resolution = 540;
}
if (external_display_height == 810) {
pause_menu_selected_resolution = 810;
}
if (external_display_height == 1080) {
pause_menu_selected_resolution = 1080;
}
if (external_display_height == 1350) {
pause_menu_selected_resolution = 1350;
}
if (external_display_height == 1620) {
pause_menu_selected_resolution = 1620;
}
if (external_display_height == 1890) {
pause_menu_selected_resolution = 1890;
}
if (external_display_height == 2160) {
pause_menu_selected_resolution = 2160;
}
if (external_display_height == 2700) {
pause_menu_selected_resolution = 2700;
}
if (external_display_height == 3240) {
pause_menu_selected_resolution = 3240;
}
if (external_display_height == 3780) {
pause_menu_selected_resolution = 3780;
}
if (external_display_height == 4320) {
pause_menu_selected_resolution = 4320;
}


//Setting selected_window_mode in pause menu.
if (window_mode == 0) {
pause_menu_selected_window_mode = 0;
strcpy(text_window_mode_variable, "WINDOWED");
}
if (window_mode == 1) {
pause_menu_selected_window_mode = 1;
strcpy(text_window_mode_variable, "BORDERLESS");
}
if (window_mode == 2) {
pause_menu_selected_window_mode = 2;
strcpy(text_window_mode_variable, "FULLSCREEN");
}


} //Checking if we are in main menu/if cutscene has started.

//In game progression variable. This governs the difficulty and how fast the enemies spawn.
//This variable only increments if there is no active event (Hailstorm).
if (game_paused == 0) {
if (current_cutscene_part == -1) {
//if (timer_hailstorm_duration == 0) {
progression += 1;
//}
}}

/*
//Devtest.
f = 0;
while (f < 200) {

printf("%d\n", randint(-128, 128));

f += 1;
}*/

//Playing main menu music when not in gameplay mode. Looping it when it is over.
if (al_get_sample_instance_playing(array_sample_instance[117]) == 0) {
al_play_sample_instance(array_sample_instance[117]);
}


//If the player has chosen the play option, stop playing the main menu music.
if (chosen_option == 0) {
al_set_sample_instance_playing(array_sample_instance[117], 0);
}


//Counting down timer. During this timer certain code won't run. This timer starts when you restart the game.
if (timer_main_menu_up_time > 0) {
timer_main_menu_up_time -= 1;
}


//Devtest.
#include "devtest.c"

//Gametime tracker logic.
#include "gametime_tracker_logic.c"

//Getting keyboard input.
#include "input_logic.c"

//Video menu logic.
#include "video_menu_logic.c"

//Main menu logic.
#include "main_menu_logic.c"

//Updating audio level/master volume every frame based on audio_menu_option_0_option variable.
#include "audio_update_logic.c"

//Random loot spawner.
#include "random_loot_spawner_logic.c"
 
//High scores tracker logic.
#include "high_score_tracker_logic.c"

//Progress menu logic.
#include "progress_menu_logic.c"

//Controls menu logic.
#include "controls_menu_logic.c"

//Gameplay ui logic + pause menu logic.
#include "gameplay_ui_logic.c"

//Loading progression data.
#include "load_progression_data_logic.c"

//Cheat logic (Used purely during development).
#include "cheat_logic.c"

//Enemy spawner.
#include "enemy_spawner_logic.c"

//Crawler animation draw and logic.
#include "crawler_logic_draw.c"

//Main menu drawing.
#include "main_menu_drawing.c"

//Drawing level backgrounds (+logic).
#include "level_background_draw_logic.c"

//Drawing hailstorm background.
#include "hailstorm_background_logic_draw.c"

//Choose name, name choice logic.
#include "choose_name_logic.c"

//Twinkling stars that are seen on the title screen. 
#include "twinkling_stars_logic_draw.c"

//Title screen logic and drawing.
#include "title_logic_drawing.c"

//Laser pickup logic and drawing.
#include "laser_pickup_logic_draw.c"

//Title logic and drawing after you have pressed the play button.
#include "title_logic_drawing_after_play.c"

//Enemy bullet logic and draw.
#include "enemy_bullet_logic_draw.c"

//Enemy logic.
#include "enemy_logic.c"

//Enemy drawing.
#include "enemy_draw.c"

//Difficulty and progression logic.
#include "difficulty_logic.c"

//BEFORE.

//Achievement tracker logic.
#include "achievement_tracker_logic.c"

//Player drawing and logic.
#include "player_draw_logic.c"

//Energy cell pickup logic and drawing.
#include "energy_cell_pickup_logic_draw.c"

//Death powerup pickup logic and drawing.
#include "death_pickup_draw_logic.c"

//Enemy horseshoe spawner.
#include "enemy_spawner_logic.c"

//Laser logic.
#include "laser_logic.c"

//Enemy shielder logic.
#include "enemy_shielder_logic.c"

//Invader logic.
#include "invader_logic.c"

//Enemy shielder draw.
#include "enemy_shielder_draw.c"

//Invader enemy draw. Enemy invader draw.
#include "invader_draw.c"

//Enemy small logic and draw.
#include "enemy_small_logic_draw.c"

//Hailstorm logic and drawing.
#include "hailstorm_logic_draw.c"

//Player bullets logic and drawing.
#include "player_bullets_logic_draw.c"

//Triplefire powerup.
#include "powerup_triplefire_pickup_logic_draw.c"

//Story menu logic and draw.
#include "story_menu_logic_draw.c"

//Particles logic and drawing.
#include "particle_logic_draw.c"

//Laser particle logic draw.
#include "laser_particle_logic_draw.c"

//Drawing gameplay ui including pause menu.
#include "gameplay_ui_draw.c"

//Logic and drawing behind achievement popups.
#include "achievement_popup_logic_draw.c"

//Drawing ui ship on the right side of the screen. Logic too.
#include "ui_ship_logic_draw.c"

//Drawing name choice menu. Choose name menu.
#include "choose_name_draw.c"

//Drawing player laser.
#include "laser_draw.c"

//Game over screen logic and drawing.
#include "game_over_logic_draw.c" //#include "replay_logic.c" //#include "back_to_menu_logic.c"

//Drawing progress menu.
#include "progress_menu_draw.c"

//Controls menu drawing.
#include "controls_menu_drawing.c"

//Audio menu logic and drawing.
#include "audio_menu_logic_draw.c"

//Save audio settings in file logic.
#include "audio_save_settings_logic.c"

//Draw black screen in game.
if (current_cutscene_part == -1) {
al_set_target_bitmap(bitmap_gameplay_display);
if (progression < 60*5 && game_paused == 0) { //Drawing splash screen "brace yourself!".
draw_text(text_brace_yourself, 62, 125, 1, 1, 1, 1);
}
al_draw_filled_rectangle(1, 0, 270, 269, al_map_rgba(0, 0, 0, (int)level_black_screen_alpha));
}

//Cutscene part1 logic and drawing.
#include "cutscene_part1_logic_drawing.c"

//Second part of cutscene.
#include "cutscene_part2_logic_drawing.c"

//Third part of cutscene.
#include "cutscene_part3_logic_drawing.c"

//Cutscene part4 logic and drawing.
#include "cutscene_part4_logic_drawing.c"

//Video menu drawing.
#include "video_menu_drawing.c"

//Tracking how many frames have passed while we are in gameplay mode. 
if (current_cutscene_part == -1) {
if (game_paused == 0) {
if (player_durability > 0) {

gameplay_frames_passed += 1;

}
}
}


//Drawing version water mark.
/*
if (current_cutscene_part != -1) {
draw_text_small(text_beta_version, 1, 262, 1, 0, 1, 1);
}
*/

//Drawing gameplay bitmap to internal_display.
if (current_cutscene_part == -1) {
al_set_target_bitmap(internal_display);
al_draw_bitmap(bitmap_gameplay_display, 105, 0, 0);
}

//Drawing internal_display onto the external_display.
al_set_target_bitmap(al_get_backbuffer(external_display));
al_clear_to_color(al_map_rgb(0, 0, 0)); //Clearing external_display
al_draw_scaled_bitmap(internal_display, 0, 0, 480, 270, internal_display_x_offset, internal_display_y_offset, external_display_width, external_display_height, 0);


//Flipping the backbuffer.
al_flip_display();

//Counting how many frames have passed since the program started.
frames_passed += 1;




} //End of main loop.



//Cleanup. Freeing up memory.
#include "cleanup_logic.c"

return 0; //Return value for main function.
}//End of main funtcion.
