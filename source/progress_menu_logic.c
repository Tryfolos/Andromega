//Moving assets into view.
if (chosen_option == 1) {


//Counting down timer. Once this timer has run out, the menu will start to move.
if (timer_progress_menu_move > 0) {
timer_progress_menu_move -= 1;
}

//Moving towards the left. If timer has run out.
if (timer_progress_menu_move == 0) {
progress_menu_background_x -= 1024;
}

//Clamping movement towards the left.
if (progress_menu_background_x < 0) {
progress_menu_background_x = 0;
}

}


//Finding all the player directories in user_data folder. 
//We need to know what player data there is to know what to show on the progress screen.
//This code will put the names of the directories in an array of char arrays, a 2d array.

if (directory != NULL) { //Closing directory stream each frame. Avoiding terrible memory leak I had.
closedir(directory);
}


directory = opendir("user_data/."); //Opening user data folder.

if (directory == NULL) {
printf("Couldn't open directory.\n");
return 1;
}
memset(text_list_of_save_files, 0, 17*16); //Resetting array that contains list of save files.


f = 0;
i = 0;
while (f < 16) { //Loop that puts directory names into dynamically allocated array.

entry = readdir(directory); //Getting an entry out of user data directory. 
if (entry == NULL) {
break;
}

if (entry->d_type == DT_DIR) { //Go on to the next entry if it is not a directory.
i += 1;
}


if (entry->d_type != DT_DIR) { //Go on to the next entry if it is not a directory.
continue;
}

if (entry->d_name[0] == '.') { //Removing entries containing periods (.) since they just represent the parent directories.
continue;
}



//if (entry->d_name[0] == 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J' || 'K' || 'L' || 'M' || 'N' || 'O' || 'P' || 'Q' || 'R' || 'S' || 'T' || 'U' || 'V' || 'W' || 'X' || 'Y' || 'Z' || '_' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9' || '0') {

text_list_of_save_files[(f * 17) + 0] = entry->d_name[0];
if (entry->d_name[0] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 1] = entry->d_name[1];
if (entry->d_name[1] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 2] = entry->d_name[2];
if (entry->d_name[2] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 3] = entry->d_name[3];
if (entry->d_name[3] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 4] = entry->d_name[4];
if (entry->d_name[4] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 5] = entry->d_name[5];
if (entry->d_name[5] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 6] = entry->d_name[6];
if (entry->d_name[6] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 7] = entry->d_name[7];
if (entry->d_name[7] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 8] = entry->d_name[8];
if (entry->d_name[8] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 9] = entry->d_name[9];
if (entry->d_name[9] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 10] = entry->d_name[10];
if (entry->d_name[10] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 11] = entry->d_name[11];
if (entry->d_name[11] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 12] = entry->d_name[12];
if (entry->d_name[12] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 13] = entry->d_name[13];
if (entry->d_name[13] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 14] = entry->d_name[14];
if (entry->d_name[14] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 15] = entry->d_name[15];
if (entry->d_name[15] == '\0') {
f += 1;
continue;
}
text_list_of_save_files[(f * 17) + 16] = entry->d_name[16];
if (entry->d_name[16] == '\0') {
f += 1;
continue;
}
//}}


//printf("%s\n", text_list_of_save_files);

//printf("%c", text_list_of_save_files[0]);
//printf("%c", text_list_of_save_files[1]);
//printf("%c", text_list_of_save_files[2]);
//printf("%c", text_list_of_save_files[3]);
//printf("%c", text_list_of_save_files[4]);
//printf("%c", text_list_of_save_files[5]);
//printf("%c\n", text_list_of_save_files[6]);

f += 1;
} //Grand loop.

//How many save files are there? This value is decided by a previous loop in this file.
number_of_saves = i-2;

//Resetting text_name_temp each frame.
memset(text_name_temp, 0, 32);


//Putting player name in temp array depending on what user is selected.
f = progress_menu_player*17;
i = 0;
while (f < (progress_menu_player*17)+17) {

text_name_temp[i] = text_list_of_save_files[f];

i += 1;
f += 1;
}

//Calculating length of temp_array and choosing the x position of the text from that.
f = 0;
name_x_position = 0;
while (f < 17) {

switch (text_name_temp[f]) {

case 'A':
name_x_position += 1;
break;
case 'B':
name_x_position += 1;
break;
case 'C':
name_x_position += 1;
break;
case 'D':
name_x_position += 1;
break;
case 'E':
name_x_position += 1;
break;
case 'F':
name_x_position += 1;
break;
case 'G':
name_x_position += 1;
break;
case 'H':
name_x_position += 1;
break;
case 'I':
name_x_position += 1;
break;
case 'J':
name_x_position += 1;
break;
case 'K':
name_x_position += 1;
break;
case 'L':
name_x_position += 1;
break;
case 'M':
name_x_position += 1;
break;
case 'N':
name_x_position += 1;
break;
case 'O':
name_x_position += 1;
break;
case 'P':
name_x_position += 1;
break;
case 'Q':
name_x_position += 1;
break;
case 'R':
name_x_position += 1;
break;
case 'S':
name_x_position += 1;
break;
case 'T':
name_x_position += 1;
break;
case 'U':
name_x_position += 1;
break;
case 'V':
name_x_position += 1;
break;
case 'W':
name_x_position += 1;
break;
case 'X':
name_x_position += 1;
break;
case 'Y':
name_x_position += 1;
break;
case 'Z':
name_x_position += 1;
break;
case '0':
name_x_position += 1;
break;
case '1':
name_x_position += 1;
break;
case '2':
name_x_position += 1;
break;
case '3':
name_x_position += 1;
break;
case '4':
name_x_position += 1;
break;
case '5':
name_x_position += 1;
break;
case '6':
name_x_position += 1;
break;
case '7':
name_x_position += 1;
break;
case '8':
name_x_position += 1;
break;
case '9':
name_x_position += 1;
break;
case '_':
name_x_position += 1;
break;

};

f += 1;
}


//Changing what player is currently selected with arrow keys.
if (chosen_option == 1) {
if (press_right == 1) {
if (progress_menu_player < 15) {
progress_menu_player += 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}}
if (press_left == 1) {
if (progress_menu_player > 0) {
progress_menu_player -= 1;

f = 85;
while (f < 93) { //Playing audio.
if (al_get_sample_instance_playing(array_sample_instance[f]) == 0) {
al_play_sample_instance(array_sample_instance[f]);
break;
}
f += 1;
}

}}
} //Are we in the right menu?



//Moving assets out of view.
if (chosen_option != 1) {

//Resetting timer.
timer_progress_menu_move = 30;

progress_menu_background_x += 1024;

//Clamping movement towards the right.
if (progress_menu_background_x > (480*64)) {
progress_menu_background_x = (480*64);
}


}



//Emptying strings. 
memset(text_first_place, 0, 63);
memset(text_second_place, 0, 63);
memset(text_third_place, 0, 63);
memset(text_fourth_place, 0, 63);
memset(text_fifth_place, 0, 63);
memset(text_sixth_place, 0, 63);
memset(text_seventh_place, 0, 63);
memset(text_eigth_place, 0, 63);
memset(text_ninth_place, 0, 63);
memset(text_tenth_place, 0, 63);
memset(text_eleventh_place, 0, 63);
memset(text_twelfth_place, 0, 63);
memset(text_thirteenth_place, 0, 63);
memset(text_fourteenth_place, 0, 63);
memset(text_fifteenth_place, 0, 63);

//Combining score from file with player position withing high score hierarchy.
sprintf(text_first_place, "1ST  - %s", text_score_0_int);
sprintf(text_second_place, "2ND  - %s", text_score_1_int);
sprintf(text_third_place, "3RD  - %s", text_score_2_int);
sprintf(text_fourth_place, "4TH  - %s", text_score_3_int);
sprintf(text_fifth_place, "5TH  - %s", text_score_4_int);
sprintf(text_sixth_place, "6TH  - %s", text_score_5_int);
sprintf(text_seventh_place, "7TH  - %s", text_score_6_int);
sprintf(text_eigth_place, "8TH  - %s", text_score_7_int);
sprintf(text_ninth_place, "9TH  - %s", text_score_8_int);
sprintf(text_tenth_place, "10TH - %s", text_score_9_int);
sprintf(text_eleventh_place, "11TH - %s", text_score_10_int);
sprintf(text_twelfth_place, "12TH - %s", text_score_11_int);
sprintf(text_thirteenth_place, "13TH - %s", text_score_12_int);
sprintf(text_fourteenth_place, "14TH - %s", text_score_13_int);
sprintf(text_fifteenth_place, "15TH - %s", text_score_14_int);

//What score/achievement is selected?


//This text/string shows what player slot is currently selected. 1-16. There are 16 total player slots.
sprintf(text_selected_slot, "SAVE SLOT: %d/16", progress_menu_player+1);


///// Making sure you can only delete a player when in the progresss menu. You should also only be able to delete a player if a player is actually selected, so you can't delete a "NO DATA" user.
if (chosen_option == 1) {
if (player_selected != 0) {


//Playing delete sound. 
if (press_delete == 1) {
if (al_get_sample_instance_playing(array_sample_instance[118]) == 0)  {
al_play_sample_instance(array_sample_instance[118]);
} 
}

//If you release the delete key, stop playing the delete sound.
if (hold_delete == 0) {
if (al_get_sample_instance_playing(array_sample_instance[118]) == 1)  {
al_set_sample_instance_playing(array_sample_instance[118], 0);
} 
}

//Copying path_to_gametime to temporary array thay only leads to the user folder itself. This new path can then be used for deleting the user folder.
memset(text_temp_44, 0, 128);
strcpy(text_temp_44, path_to_gametime);


//Removing the last part of the string that says "gametime.txt".
f = 0;
while (f < 64) {
if (text_temp_44[f] == '.') { //This if statements removes the gametime part of the name.
text_temp_44[f] = '\0';
text_temp_44[f+1] = '\0';
text_temp_44[f+2] = '\0';
text_temp_44[f+3] = '\0';

text_temp_44[f-1] = '\0';
text_temp_44[f-2] = '\0';
text_temp_44[f-3] = '\0';
text_temp_44[f-4] = '\0';
text_temp_44[f-5] = '\0';
text_temp_44[f-6] = '\0';
text_temp_44[f-7] = '\0';
text_temp_44[f-8] = '\0';
text_temp_44[f-9] = '\0';
break;
}
f += 1;
}

//Devtest.
//p.rintf("%d\n", press_delete);

//Deleting save files be pressing alt + delete.
//if (hold_alt == 1) {

//If you hold the delete key for more than 45 frames the currently selected user will be deleted.
if (hold_delete == 1) {
delete_hold += 1;
} else {
delete_hold = 0;
}

//If we have held the delete key for more than 1 second the current player will be deleted.
if (delete_hold > 60) {
remove(path_to_achievements);
remove(path_to_gametime);
remove(path_to_score);
rmdir(text_temp_44);
delete_hold = 0;
timer_deleted = 7;
play_sound_player_hurt
}

} //Is a user even selected?

//If you release the delete key, stop playing the delete sound.
if (player_selected == 0) {
if (al_get_sample_instance_playing(array_sample_instance[118]) == 1)  {
al_set_sample_instance_playing(array_sample_instance[118], 0);
}}

} //Are we in the progress menu?