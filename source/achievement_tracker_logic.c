//This code will track achievements in game. 
//If the game is in a certain state the game will set a certain achievement to an unlocked state.
//Once an achievement is in an unlocked state the game will write that change to disk in the current users folder.
if (current_cutscene_part == -1) {


//Opening up file handle to achievements for later use.
fstream = fopen(text_path_to_save_achievements, "rb");


//Reading the achievements file from disk and putting it's value into a variable.
fread(&achievements_byte, sizeof(char), 1, fstream);

//Closing file stream.
fclose(fstream);


//Opening file stream again for writing.
fstream = fopen(text_path_to_save_achievements, "rb+");

//Setting the file pointer to the beginning of the file.
fseek(fstream, 0, SEEK_SET);

//Checking what achievements are unlocked. If an achievement is already unlocked we will not show a popup if unlocking.
if (achievements_byte & (1 << 7)) {
popup_1_shown = 1;
}
if (achievements_byte & (1 << 6)) {
popup_2_shown = 1;
}
if (achievements_byte & (1 << 5)) {
popup_3_shown = 1;
}
if (achievements_byte & (1 << 4)) {
popup_4_shown = 1;
}
if (achievements_byte & (1 << 3)) {
popup_5_shown = 1;
}
if (achievements_byte & (1 << 2)) {
popup_6_shown = 1;
}
if (achievements_byte & (1 << 1)) {
popup_7_shown = 1;
}
if (achievements_byte & 1) {
popup_8_shown = 1;
}



/////This next segment will be about unlocking achievements. 
//We set certain bits inside the achievements byte to 1s to represent an achievement being unlocked.
//This byte is written to disk every frame to keep up to date.

//If we have at least 100 score, unlock the first achievement-
//(Change the first bit of the achievement_byte variable).
if (score > 500) { //Pacifist. 
if (player_shot == 0) {

achievements_byte = achievements_byte | (1 << 7);
if (timer_achievement_1_popup == 0 & popup_1_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_1_popup = 240; //4 second timer.
popup_1_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}

}} //Criteria for unlocking.


//Second achievement.
if (hailstorms_survived > 7) { //Storm Hiker.


achievements_byte = achievements_byte | (1 << 6);
if (timer_achievement_2_popup == 0 & popup_2_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_2_popup = 240; //4 second timer.
popup_2_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}

}

//Third achievement.
if (upgrade_0 == 1 && upgrade_1 == 1 && upgrade_2 == 1 && upgrade_3 == 1 && upgrade_4 == 1) { //Ship Mechanic.


achievements_byte = achievements_byte | (1 << 5);
if (timer_achievement_3_popup == 0 & popup_3_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_3_popup = 240; //4 second timer.
popup_3_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}
}


//Fourth achievement.
if (player_shield == 10 && player_laser == 10 && player_plasma == 10) { // Supercharger.

achievements_byte = achievements_byte | (1 << 4);
if (timer_achievement_4_popup == 0 & popup_4_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_4_popup = 240; //4 second timer.
popup_4_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}
}

//Fifth achievement.
if (shielders_killed > 19) { // Shieldbreaker.

achievements_byte = achievements_byte | (1 << 3);
if (timer_achievement_5_popup == 0 & popup_5_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_5_popup = 240; //4 second timer.
popup_5_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}
}

//Sixth achievement.
if (score > 10000) { // A-Student.
achievements_byte = achievements_byte | (1 << 2);
if (timer_achievement_6_popup == 0 & popup_6_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_6_popup = 240; //4 second timer.
popup_6_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}
}

//Seventh achievement.
if (gameplay_frames_passed > (60*60*30)) { //Space Veteran. Survived for 60*60*30 frames / 30 minutes.

achievements_byte = achievements_byte | (1 << 1);
if (timer_achievement_7_popup == 0 & popup_7_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_7_popup = 240; //4 second timer.
popup_7_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}
}

//Eight achievement.
if (score > 999 && gameplay_frames_passed < (60*60*3)) { //Speedrunner. 

achievements_byte = achievements_byte | 1;
if (timer_achievement_8_popup == 0 & popup_8_shown == 0) { //Setting timer neccesary for popup to show on screen.
timer_achievement_8_popup = 240; //4 second timer.
popup_8_shown = 1; //It will not be shown a second time.
al_play_sample_instance(array_sample_instance[119]);
}

}


//Writing unlocked achievements to disk.
fwrite(&achievements_byte, sizeof(char), 1, fstream);


//Closing file stream.
fclose(fstream);


} //If we are in gameplay mode.