//In this file we load the save file currently selected in the progression menu.
//Then we take all the data from the folder and prepare it to be shown on screen.
//The actual progression data is shown/drawn from the progress_menu_draw.c file.
if (timer_deleted == 0) {

//Checking if the player folder exists. Are we trying to load the 16th player when there are only 13 files (just an example)?
f = 0;
i = 0;
while (f < 30) {
if (text_name_temp[f] != 0) {
i = 1;
}
f += 1;
}


if (chosen_option == 1) {
if (i == 1) { //This checks if The currently selected user/player exists, if the playername is blank. 
              //If it is blank then don't run the code that loads the data. Avoiding Segmentation fault.


/////Making search file path from text_name_temp.
/////Gametime.

//Resetting path_to_gametime;
memset(path_to_gametime, 0, 64);

//Resetting all values related to gametime to avoid carryover bugs when switching between players.
memset(text_temp, 0, 128);
memset(text_gametime_seconds, 0, 32);
memset(text_gametime_minutes, 0, 32);
memset(text_gametime_hours, 0, 32);
memset(text_gametime_progress_menu, 0, 32);
gametime_seconds = 0;
gametime_minutes = 0;
gametime_hours = 0;
memset(text_score_0, 0, 64); //Emptying arrays. So no carryover of score between users.
memset(text_score_1, 0, 64);
memset(text_score_2, 0, 64);
memset(text_score_3, 0, 64);
memset(text_score_4, 0, 64);
memset(text_score_5, 0, 64);
memset(text_score_6, 0, 64);
memset(text_score_7, 0, 64);
memset(text_score_8, 0, 64);
memset(text_score_9, 0, 64);
memset(text_score_10, 0, 64);
memset(text_score_11, 0, 64);
memset(text_score_12, 0, 64);
memset(text_score_13, 0, 64);
memset(text_score_14, 0, 64);
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



//Setting the gametime path. 
path_to_gametime[0] = 'u';
path_to_gametime[1] = 's';
path_to_gametime[2] = 'e';
path_to_gametime[3] = 'r';
path_to_gametime[4] = '_';
path_to_gametime[5] = 'd';
path_to_gametime[6] = 'a';
path_to_gametime[7] = 't';
path_to_gametime[8] = 'a';
path_to_gametime[9] = '/';
path_to_gametime[10] = text_name_temp[0];
path_to_gametime[11] = text_name_temp[1];
path_to_gametime[12] = text_name_temp[2];
path_to_gametime[13] = text_name_temp[3];
path_to_gametime[14] = text_name_temp[4];
path_to_gametime[15] = text_name_temp[5];
path_to_gametime[16] = text_name_temp[6];
path_to_gametime[17] = text_name_temp[7];
path_to_gametime[18] = text_name_temp[8];
path_to_gametime[19] = text_name_temp[9];
path_to_gametime[20] = text_name_temp[10];
path_to_gametime[21] = text_name_temp[11];
path_to_gametime[22] = text_name_temp[12];
path_to_gametime[23] = text_name_temp[13];
path_to_gametime[24] = text_name_temp[14];
path_to_gametime[25] = text_name_temp[15];
path_to_gametime[26] = text_name_temp[16];
path_to_gametime[27] = '/';
path_to_gametime[28] = 'g';
path_to_gametime[29] = 'a';
path_to_gametime[30] = 'm';
path_to_gametime[31] = 'e';
path_to_gametime[32] = 't';
path_to_gametime[33] = 'i';
path_to_gametime[34] = 'm';
path_to_gametime[35] = 'e';
path_to_gametime[36] = '.';
path_to_gametime[37] = 't';
path_to_gametime[38] = 'x';
path_to_gametime[39] = 't';
path_to_gametime[40] = '\0';

//Removing blank spaces from path.
p = 0;
while (p < 16) {
f = 0;
i = 0;
while (f < 40) {

if (path_to_gametime[f] == '\0') {
i = 1;
}

if (i == 1) {
path_to_gametime[f] = path_to_gametime[f+1];
}

f += 1;
}
p += 1;
}
path_to_gametime[39] = '\0';


//Opening file stream.
fstream = fopen(path_to_gametime, "r");

//Reading from file and putting result in array.
fgets(text_gametime_progress_menu, sizeof(text_gametime_progress_menu), fstream);

//Getting numerical values from gametime text and putting them into temporary array.
f = 0;
i = 0;
while (f < 32) {
if (isdigit(text_gametime_progress_menu[f]) != 0) {
text_temp[i] = text_gametime_progress_menu[f];
i +=1;
}
f += 1;
}

//Turning text_temp into numerical value.
gametime_progress_menu = atoi(text_temp);

//Cloasing file stream;
fclose(fstream);


//Converting gametime from frame format to hours minutes and seconds format.

//Calculating hours, minutes and seconds played based on how many frames you have played.
gametime_seconds = (gametime_progress_menu/60);
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



/////Making path to high scores.
/////High scores.
//Setting the gametime path. Based on name of currently selected player.
path_to_score[0] = 'u';
path_to_score[1] = 's';
path_to_score[2] = 'e';
path_to_score[3] = 'r';
path_to_score[4] = '_';
path_to_score[5] = 'd';
path_to_score[6] = 'a';
path_to_score[7] = 't';
path_to_score[8] = 'a';
path_to_score[9] = '/';
path_to_score[10] = text_name_temp[0];
path_to_score[11] = text_name_temp[1];
path_to_score[12] = text_name_temp[2];
path_to_score[13] = text_name_temp[3];
path_to_score[14] = text_name_temp[4];
path_to_score[15] = text_name_temp[5];
path_to_score[16] = text_name_temp[6];
path_to_score[17] = text_name_temp[7];
path_to_score[18] = text_name_temp[8];
path_to_score[19] = text_name_temp[9];
path_to_score[20] = text_name_temp[10];
path_to_score[21] = text_name_temp[11];
path_to_score[22] = text_name_temp[12];
path_to_score[23] = text_name_temp[13];
path_to_score[24] = text_name_temp[14];
path_to_score[25] = text_name_temp[15];
path_to_score[26] = text_name_temp[16];
path_to_score[27] = '/';
path_to_score[28] = 'h';
path_to_score[29] = 'i';
path_to_score[30] = 'g';
path_to_score[31] = 'h';
path_to_score[32] = '_';
path_to_score[33] = 's';
path_to_score[34] = 'c';
path_to_score[35] = 'o';
path_to_score[36] = 'r';
path_to_score[37] = 'e';
path_to_score[38] = 's';
path_to_score[39] = '.';
path_to_score[40] = 't';
path_to_score[41] = 'x';
path_to_score[42] = 't';
path_to_score[43] = '\0';

//Removing blank spaces from path.
p = 0;
while (p < 16) {
f = 0;
i = 0;
while (f < 43) {

if (path_to_score[f] == '\0') {
i = 1;
}

if (i == 1) {
path_to_score[f] = path_to_score[f+1];
}

f += 1;
}
p += 1;
}
path_to_score[39] = '\0';



//Opening file stream.
fstream = fopen(path_to_score, "r");


//Reading scores from file and turning them, into char array.
fgets(text_score_0, 64, fstream);
fgets(text_score_1, 64, fstream);
fgets(text_score_2, 64, fstream);
fgets(text_score_3, 64, fstream);
fgets(text_score_4, 64, fstream);
fgets(text_score_5, 64, fstream);
fgets(text_score_6, 64, fstream);
fgets(text_score_7, 64, fstream);
fgets(text_score_8, 64, fstream);
fgets(text_score_9, 64, fstream);
fgets(text_score_10, 64, fstream);
fgets(text_score_11, 64, fstream);
fgets(text_score_12, 64, fstream);
fgets(text_score_13, 64, fstream);
fgets(text_score_14, 64, fstream);


//Extracting numbers from arrays and putting them into another array.
f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_0[f]) == 0 || text_score_0[f] == '\0' || text_score_0[f] == '\n') {
break;
}
text_score_0_int[i] = text_score_0[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_1[f]) == 0) {
break;
}
text_score_1_int[i] = text_score_1[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_2[f]) == 0) {
break;
}
text_score_2_int[i] = text_score_2[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_3[f]) == 0) {
break;
}
text_score_3_int[i] = text_score_3[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_4[f]) == 0) {
break;
}
text_score_4_int[i] = text_score_4[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_5[f]) == 0) {
break;
}
text_score_5_int[i] = text_score_5[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_6[f]) == 0) {
break;
}
text_score_6_int[i] = text_score_6[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_7[f]) == 0) {
break;
}
text_score_7_int[i] = text_score_7[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_8[f]) == 0) {
break;
}
text_score_8_int[i] = text_score_8[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 7;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_9[f]) == 0) {
break;
}
text_score_9_int[i] = text_score_9[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 8;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_10[f]) == 0) {
break;
}
text_score_10_int[i] = text_score_10[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 8;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_11[f]) == 0) {
break;
}
text_score_11_int[i] = text_score_11[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 8;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_12[f]) == 0) {
break;
}
text_score_12_int[i] = text_score_12[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 8;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_13[f]) == 0) {
break;
}
text_score_13_int[i] = text_score_13[f]; //Putting number into another array.
i += 1;
f += 1;
}

f = 8;
i = 0;
while (f < 62) {
//If not a digit. Stop iterating.
if (isdigit(text_score_14[f]) == 0) {
break;
}
text_score_14_int[i] = text_score_14[f]; //Putting number into another array.
i += 1;
f += 1;
}



//Creating strings that will be drawn in progress menu. Scores.
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


//Cloasing file stream;
fclose(fstream);




//Creating path to achievements file based on currently selected pilot.
path_to_achievements[0] = 'u';
path_to_achievements[1] = 's';
path_to_achievements[2] = 'e';
path_to_achievements[3] = 'r';
path_to_achievements[4] = '_';
path_to_achievements[5] = 'd';
path_to_achievements[6] = 'a';
path_to_achievements[7] = 't';
path_to_achievements[8] = 'a';
path_to_achievements[9] = '/';
path_to_achievements[10] = text_name_temp[0];
path_to_achievements[11] = text_name_temp[1];
path_to_achievements[12] = text_name_temp[2];
path_to_achievements[13] = text_name_temp[3];
path_to_achievements[14] = text_name_temp[4];
path_to_achievements[15] = text_name_temp[5];
path_to_achievements[16] = text_name_temp[6];
path_to_achievements[17] = text_name_temp[7];
path_to_achievements[18] = text_name_temp[8];
path_to_achievements[19] = text_name_temp[9];
path_to_achievements[20] = text_name_temp[10];
path_to_achievements[21] = text_name_temp[11];
path_to_achievements[22] = text_name_temp[12];
path_to_achievements[23] = text_name_temp[13];
path_to_achievements[24] = text_name_temp[14];
path_to_achievements[25] = text_name_temp[15];
path_to_achievements[26] = text_name_temp[16];
path_to_achievements[27] = '/';
path_to_achievements[28] = 'a';
path_to_achievements[29] = 'c';
path_to_achievements[30] = 'h';
path_to_achievements[31] = 'i';
path_to_achievements[32] = 'e';
path_to_achievements[33] = 'v';
path_to_achievements[34] = 'e';
path_to_achievements[35] = 'm';
path_to_achievements[36] = 'e';
path_to_achievements[37] = 'n';
path_to_achievements[38] = 't';
path_to_achievements[39] = 's';
path_to_achievements[40] = '\0';


//Removing blank space from array.
p = 0;
while (p < 16) {
f = 0;
i = 0;
while (f < 40) {

if (path_to_achievements[f] == '\0') {
i = 1;
}

if (i == 1) {
path_to_achievements[f] = path_to_achievements[f+1];
}

f += 1;
}
p += 1;
}
path_to_achievements[39] = '\0';


//Loading achievements file
fstream = fopen(path_to_achievements, "rb+");


//Reading byte containing achievements.
fread(&achievements_byte, sizeof(unsigned char), 1, fstream);


//Closing achievements file stream.
fclose(fstream);



//We do have a player selected so we are setting this variable to 1.
player_selected = 1;


} /*If we don't have a file to load, set default progress screen
This will set all scores to 0/null,
sets all achievements to locked,
sets gametime to null,
and puts the "NO DATA" text on top where the player name usually is.
*/ else {

//Setting all scores to 0.
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

//Setting achievements to locked.
achievements_byte = 0;

//Changing variable that represents if we have a player selected or the "NO DATA" screen.
player_selected = 0;

//Setting gametime text to null.
f = 6;
while (f < 32) {
text_gametime_hours[f] = 0;
f += 1;
}
f = 8;
while (f < 32) {
text_gametime_minutes[f] = 0;
f += 1;
}
f = 8;
while (f < 32) {
text_gametime_seconds[f] = 0;
f += 1;
}

//Setting player name to NO DATA.
text_name_temp[0] = 'N';
text_name_temp[1] = 'O';
text_name_temp[2] = ' ';
text_name_temp[3] = 'D';
text_name_temp[4] = 'A';
text_name_temp[5] = 'T';
text_name_temp[6] = 'A';
text_name_temp[7] = '\0';


}




} //If we are in progress menu.

} else {
timer_deleted -= 1;
}

