//This will track everything that is seen in the progress menu in real time.
//It checks for new achievements and high scores as well as tracking play time.
//This code will create progress file if it doesn't exist and if it does exist it will read and write to it as needed.

//Function for creating new file with default values.
void create_progress_file() {

file_progress = fopen(text_path_to_save_gametime, "w");
fputs("gametime:0", file_progress);

} //End of function.




//This function will rewrite the progress file with the current more up to date information.
void update_progress_file() {


//Getting data from file.
fseek(file_progress, 0, SEEK_SET);
memset(text_progress_file, 0, 63);
memset(text_progress_temp, 0, 31);
fgets(text_progress_file, 64, file_progress);


//Getting gametime text (number) value from data that was read from file.
f = 0;
i = 0;
while (f < 64) {

if (isdigit(text_progress_file[f]) != 0) { //Getting numbers from file and putting them in seperate array.
text_progress_temp[i] = text_progress_file[f];
i += 1;
}

f += 1;
}

//Putting null character at end of temp text.
text_progress_temp[i] = '\0';

//Turning gametime string into integer so it can be used mathematically.
sscanf(text_progress_temp, "%lu", &gametime);


//Adding one frame to counter and writing to file.
if (current_cutscene_part == -1) {
if (game_paused == 0) {
if (player_durability > 0) {
gametime += 1;
}}}
sprintf(text_progress_temp, "%lu", gametime);
fclose(file_progress);
file_progress = fopen(text_path_to_save_gametime, "w");
fprintf(file_progress, "gametime:%lu", gametime);


} //End of function.


//Creating progress file if it doesn't exist.
if (current_cutscene_part == -1) {
file_progress = fopen(text_path_to_save_gametime, "r");
if (file_progress == NULL) { //Creating progress file and setting default values.
create_progress_file();
}}


/////Checking the file to see if everything is structured correctly, if there are problems it will be overwritten and replaced with default values.
if (current_cutscene_part == -1) {
fseek(file_progress, 0, SEEK_SET);
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "gametime:") == NULL) { //If not up to standard, create new file.
create_progress_file();
}
}

//Updating progress file.
if (current_cutscene_part == -1) {
update_progress_file();
}


//Closing file.
if (current_cutscene_part == -1) {
fclose(file_progress);
}


//Calculating hours, minutes and seconds played based on how many frames you have played.
gametime_seconds = (gametime/60);
gametime_minutes = (gametime_seconds/60);
gametime_hours = (gametime_minutes/60);
gametime_seconds -= (gametime_minutes*60); //When there are more than 59 seconds on the clock turn it back to 0. Start counting on the next minute. 
gametime_minutes -= (gametime_hours*60);

//Turning integers into strings that can be drawn to the screen in the progress menu.
memset(text_gametime_seconds, 0, 31);
memset(text_gametime_minutes, 0, 31);
memset(text_gametime_hours, 0, 31);
sprintf(text_gametime_hours, "HOURS:%lu",  gametime_hours);
sprintf(text_gametime_minutes, "MINUTES:%lu",  gametime_minutes);
sprintf(text_gametime_seconds, "SECONDS:%lu",  gametime_seconds);

//Devtest.
//printf("Hours: %lu     Minutes: %lu     Seconds: %lu\n", gametime_hours, gametime_minutes, gametime_seconds);
