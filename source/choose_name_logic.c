//Checking if we have pressed the play button in the main menu.
if (chosen_option == 0) { 
if (title_alpha == 0) { 
if (current_cutscene_part != -1) { 

//Going back to main meny by pressing escape button. Stopping music too. 
if (input_pause() == 1) {
al_set_sample_instance_playing(array_sample_instance[84], 0);
#include "back_to_menu_logic.c"
}

//Playing music.
if (al_get_sample_instance_playing(array_sample_instance[84]) == 0) {
al_play_sample_instance(array_sample_instance[84]);
}


//Counting number of save files currently in user_data folder.
//If there are too many (over 16) save files you will not be able to create a new one.
if (directory_2 != NULL) {
closedir(directory_2);
}

directory_2 = opendir("user_data/.");

f = 0;
i = 0;
while (f < 64) {

entry_2 = readdir(directory_2);

if (entry_2 == NULL) {
break;
}

if (entry_2->d_type == DT_DIR) {
i += 1;
}

f += 1;
}
//entry_2 =

//Setting save_count variable.
save_count = i-2;


//Temporarily changing ' ' to '-'. Setting null char.
i = 0;
while (i < 16) {

if (text_playername[i] == ' ' || text_playername[i] == 0) {
text_playername[i] = '-';
}

i += 1;
}
text_playername[16] = '\0';



p = 0;
e = 0;
while (p < 17*16) {
if (text_list_of_save_files[p] == '\0') {
text_list_of_save_files[p] = '-';
e += 1;
}
//printf("%c", text_list_of_save_files[p]);

p += 1;
}

//printf("%s\n", text_list_of_save_files);

//Checking if there is a name duplicate to the one you are trying to create.
f = 0;
duplicate_save = 0;
while (f < (17*16)) {

if (text_list_of_save_files[f] == text_playername[0]) {
if (text_list_of_save_files[f + 1] == text_playername[1]) {
if (text_list_of_save_files[f + 2] == text_playername[2]) {
if (text_list_of_save_files[f + 3] == text_playername[3]) {
if (text_list_of_save_files[f + 4] == text_playername[4]) {
if (text_list_of_save_files[f + 5] == text_playername[5]) {
if (text_list_of_save_files[f + 6] == text_playername[6]) {
if (text_list_of_save_files[f + 7] == text_playername[7]) {
if (text_list_of_save_files[f + 8] == text_playername[8]) {
if (text_list_of_save_files[f + 9] == text_playername[9]) {
if (text_list_of_save_files[f + 10] == text_playername[10]) {
if (text_list_of_save_files[f + 11] == text_playername[11]) {
if (text_list_of_save_files[f + 12] == text_playername[12]) {
if (text_list_of_save_files[f + 13] == text_playername[13]) {
if (text_list_of_save_files[f + 14] == text_playername[14]) {
if (text_list_of_save_files[f + 15] == text_playername[15]) {

duplicate_save = 1;
}}}}}}}}}}}}}}}}

f += 1;
}



//Changing '-' back to ' '.
i = 0;
while (i < 16) {

if (text_playername[i] == '-') {
text_playername[i] = ' ';
}

i += 1;
}

//printf("Duplicate: %d\n", duplicate_save);

//Blinking timer.
if (timer_blinking_text_cursor > 0) {
timer_blinking_text_cursor -= 1;
} else {
timer_blinking_text_cursor = 30;
switch (text_cursor_visible) {
case 0:
text_cursor_visible = 1;
break;
case 1:
text_cursor_visible = 0;
break;
}; //Switch statement.
}


//Moving selected key horizontally.
if (press_right == 1) {
selected_key_horizontal += 1;
play_sound_move_select
}
if (press_left == 1) {
selected_key_horizontal -= 1;
play_sound_move_select
}

//Moving selected key vertically. 
if (press_down == 1) {
selected_key_vertical += 1;
play_sound_move_select
}
if (press_up == 1) {
selected_key_vertical -= 1;
play_sound_move_select
}


//Without this code, when you have the enter key selected it would take two downwards key presses to get to the spacebar. This fixes that.
if (selected_key_horizontal == 10) {
if (selected_key_vertical == 2) {
if (press_down == 1) {
selected_key_vertical = 3;
}
}
}


//Making sure text cursor/marker doesn't move below 0 or behind the beginning of the line.
if (position_in_text < 0) {
position_in_text = 0;
}


//Making sure text/name doesn't go beyond 13 characters. (Was originally supposed to be 16 but changed to 13 to avoid a segmentation fault in the progress menu).
if (position_in_text > 13) {
position_in_text = 13;
}

//Limiting how far selected key can go.
if (selected_key_horizontal < 0) { //Selected key can never go below 0.
selected_key_horizontal = 0;
}

if (selected_key_vertical < 0) { //Selected key can never go below 0.
selected_key_vertical = 0;
}

if (selected_key_vertical > 3) { //Selected key can never go above 3.
selected_key_vertical = 3;
}

if (selected_key_vertical == 0) {
if (selected_key_horizontal > 10) {
selected_key_horizontal = 10;
}
}

if (selected_key_vertical == 1) {
if (selected_key_horizontal > 10) {
selected_key_horizontal = 10;
}
}

if (selected_key_vertical == 2) {
if (selected_key_horizontal > 9) {
selected_key_horizontal = 9;
}
}

if (selected_key_vertical == 3) {
if (selected_key_horizontal > 7) {
selected_key_horizontal = 7;
}
}



//Entering text by pressing select key (usually enter) on the currently selected key (on screen keyboard).
if (input_select() == 1) {
play_sound_enter

switch (selected_key_horizontal) {


case 0:
if (selected_key_vertical == 0) { //Number 1.
text_playername[position_in_text] = '1';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter Q.
text_playername[position_in_text] = 'Q';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter A.
text_playername[position_in_text] = 'A';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter Z.
text_playername[position_in_text] = 'Z';
position_in_text += 1;
}
break;


case 1:
if (selected_key_vertical == 0) { //Number 2.
text_playername[position_in_text] = '2';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter W.
text_playername[position_in_text] = 'W';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter S.
text_playername[position_in_text] = 'S';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter X.
text_playername[position_in_text] = 'X';
position_in_text += 1;
}
break;

case 2:
if (selected_key_vertical == 0) { //Number 3.
text_playername[position_in_text] = '3';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter E.
text_playername[position_in_text] = 'E';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter D.
text_playername[position_in_text] = 'D';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter C.
text_playername[position_in_text] = 'C';
position_in_text += 1;
}
break;

case 3:
if (selected_key_vertical == 0) { //Number 4.
text_playername[position_in_text] = '4';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter R.
text_playername[position_in_text] = 'R';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter F.
text_playername[position_in_text] = 'F';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter V.
text_playername[position_in_text] = 'V';
position_in_text += 1;
}
break;

case 4:
if (selected_key_vertical == 0) { //Number 5.
text_playername[position_in_text] = '5';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter T.
text_playername[position_in_text] = 'T';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter G.
text_playername[position_in_text] = 'G';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter B.
text_playername[position_in_text] = 'B';
position_in_text += 1;
}
break;

case 5:
if (selected_key_vertical == 0) { //Number 6.
text_playername[position_in_text] = '6';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter Y.
text_playername[position_in_text] = 'Y';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter H.
text_playername[position_in_text] = 'H';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter N.
text_playername[position_in_text] = 'N';
position_in_text += 1;
}
break;

case 6:
if (selected_key_vertical == 0) { //Number 7.
text_playername[position_in_text] = '7';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter U.
text_playername[position_in_text] = 'U';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter J.
text_playername[position_in_text] = 'J';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Letter M.
text_playername[position_in_text] = 'M';
position_in_text += 1;
}
break;

case 7:
if (selected_key_vertical == 0) { //Number 8.
text_playername[position_in_text] = '8';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter I.
text_playername[position_in_text] = 'I';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter K.
text_playername[position_in_text] = 'K';
position_in_text += 1;
}
if (selected_key_vertical == 3) { //Underscore.
text_playername[position_in_text] = '_';
position_in_text += 1;
}
break;

case 8:
if (selected_key_vertical == 0) { //Number 9.
text_playername[position_in_text] = '9';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter O.
text_playername[position_in_text] = 'O';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Letter L.
text_playername[position_in_text] = 'L';
position_in_text += 1;
}
break;

case 9:
if (selected_key_vertical == 0) { //Number 0.
text_playername[position_in_text] = '0';
position_in_text += 1;
}
if (selected_key_vertical == 1) { //Letter P.
text_playername[position_in_text] = 'P';
position_in_text += 1;
}
if (selected_key_vertical == 2) { //Enter button.
if (text_playername[0] != 0 & text_playername[0] != ' ') {
if (save_count < 16) {
current_cutscene_part = -1;
if (al_get_sample_instance_playing(array_sample_instance[84]) == 1) { //Stop playing music.
al_set_sample_instance_playing(array_sample_instance[84], 0);
al_play_sample_instance(array_sample_instance[131]);
}
timer_invincible = 5;
play_sound_enter
#include "create_or_load_savefile_logic.c" //Creating a save file with the player name if it doesn't exist. Otherwise load it.
}}
if (text_playername[0] == 0 || text_playername[0] == ' ') {
timer_enter_name_error = 150; //Don't leave it blank.
}
if (save_count == 16) {
if (timer_enter_name_error == 0) {
if (duplicate_save == 0) {
timer_too_many_saves_error = 150; //Too many save files, can't create anymore.
}
if (duplicate_save == 1) {
current_cutscene_part = -1;
if (al_get_sample_instance_playing(array_sample_instance[84]) == 1) { //Stop playing music.
al_set_sample_instance_playing(array_sample_instance[84], 0);
al_play_sample_instance(array_sample_instance[131]);
}
timer_invincible = 5;
play_sound_enter
#include "create_or_load_savefile_logic.c" //Creating a save file with the player name if it doesn't exist. Otherwise load it.
}
}
}
} //Enter button.
break;

case 10:
if (selected_key_vertical == 0) { //Removing characters by selecting backspace.
position_in_text -= 1;
text_playername[position_in_text] = 0;
}
if (selected_key_vertical == 1) { //Enter button.
if (text_playername[0] != 0 & text_playername[0] != ' ') {
if (save_count < 16) {
current_cutscene_part = -1;
if (al_get_sample_instance_playing(array_sample_instance[84]) == 1) { //Stop playing music.
al_set_sample_instance_playing(array_sample_instance[84], 0);
al_play_sample_instance(array_sample_instance[131]);
}
timer_invincible = 5;
play_sound_enter
#include "create_or_load_savefile_logic.c" //Creating a save file with the player name if it doesn't exist. Otherwise load it.
}}
if (text_playername[0] == 0 || text_playername[0] == ' ') {
timer_enter_name_error = 150; //Don't leave it blank.
}
if (save_count == 16) {
if (timer_enter_name_error == 0) {
if (duplicate_save == 0) {
timer_too_many_saves_error = 150; //Too many save files, can't create anymore.
}
if (duplicate_save == 1) {
current_cutscene_part = -1;
if (al_get_sample_instance_playing(array_sample_instance[84]) == 1) { //Stop playing music.
al_set_sample_instance_playing(array_sample_instance[84], 0);
al_play_sample_instance(array_sample_instance[131]);
}
timer_invincible = 5;
play_sound_enter
#include "create_or_load_savefile_logic.c" //Creating a save file with the player name if it doesn't exist. Otherwise load it.
}
}
}
} //Enter button.
break;

};


} //Input select.



//Counting down error timers (how long an error should remain on screen). 
if (timer_enter_name_error > 0) {
timer_enter_name_error -= 1;
}
if (timer_too_many_saves_error > 0) {
timer_too_many_saves_error -= 1;
}


//Setting the text cursors position based on the text currently on the line/in the text_playername array.
text_cursor_position = 131; //This is the start of the line. The line will be moved towards the right a little bit for each character currently entered.
f = 0;
while (f < 16) {

switch (text_playername[f]) {

case '_': 
text_cursor_position += 11;
break;

case '1': 
text_cursor_position += 9;
break;

case '2': 
text_cursor_position += 9;
break;

case '3': 
text_cursor_position += 9;
break;

case '4': 
text_cursor_position += 9;
break;

case '5': 
text_cursor_position += 9;
break;

case '6': 
text_cursor_position += 9;
break;

case '7': 
text_cursor_position += 9;
break;

case '8': 
text_cursor_position += 9;
break;

case '9': 
text_cursor_position += 9;
break;

case '0': 
text_cursor_position += 9;
break;

case 'Q': 
text_cursor_position += 11;
break;

case 'W': 
text_cursor_position += 11;
break;

case 'E': 
text_cursor_position += 10;
break;

case 'R': 
text_cursor_position += 11;
break;

case 'T': 
text_cursor_position += 11;
break;

case 'Y': 
text_cursor_position += 11;
break;

case 'U': 
text_cursor_position += 11;
break;

case 'I': 
text_cursor_position += 9;
break;

case 'O': 
text_cursor_position += 11;
break;

case 'P': 
text_cursor_position += 10;
break;

case 'A': 
text_cursor_position += 11;
break;

case 'S': 
text_cursor_position += 11;
break;

case 'D':
text_cursor_position += 11;
break;

case 'F': 
text_cursor_position += 10;
break;

case 'G': 
text_cursor_position += 11;
break;

case 'H': 
text_cursor_position += 11;
break;

case 'J': 
text_cursor_position += 10;
break;

case 'K': 
text_cursor_position += 10;
break;

case 'L': 
text_cursor_position += 10;
break;

case 'Z': 
text_cursor_position += 11;
break;

case 'X': 
text_cursor_position += 11;
break;

case 'C': 
text_cursor_position += 11;
break;

case 'V': 
text_cursor_position += 11;
break;

case 'B': 
text_cursor_position += 11;
break;

case 'N': 
text_cursor_position += 11;
break;

case 'M':
text_cursor_position += 11;
break;


};

//Bug fix. Making sure the 14th slot in name array is is zero at all times. 
//The player should not be able to enter more than 16 characters.
text_playername[13] = 0;


f += 1;
}


}}
} //Checking if gameplay has started.