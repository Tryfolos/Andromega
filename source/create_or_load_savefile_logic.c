/////Based on the player name, this code will create a folder for the players progression data. If the folder exists, load it.


//Checking length of playername.
f = 0;
p = 0;
while (f < 16) {

if (text_playername[f] != ' ') {
p += 1; //Counting how many non  space characters is in the playername.
}

f += 1;
}


//Creating search path strings using the playername.
f = 10;
while (f < sizeof(text_path_to_save)) { //Path to folder.
text_path_to_save[f] = text_playername[f-10];
f += 1;
}
text_path_to_save[10+p] = '\0';


/////Creating path to gametime text file in player folder.
f = 11+p; //p in this case refers to the length of the playername. How many characters it is.
text_path_to_save_gametime[f - 1] = '/';
text_path_to_save_gametime[f] = 'g';
text_path_to_save_gametime[f+1] = 'a';
text_path_to_save_gametime[f+2] = 'm';
text_path_to_save_gametime[f+3] = 'e';
text_path_to_save_gametime[f + 4] = 't';
text_path_to_save_gametime[f + 5] = 'i';
text_path_to_save_gametime[f + 6] = 'm';
text_path_to_save_gametime[f + 7] = 'e';
text_path_to_save_gametime[f + 8] = '.';
text_path_to_save_gametime[f + 9] = 't';
text_path_to_save_gametime[f + 10] = 'x';
text_path_to_save_gametime[f + 11] = 't';
text_path_to_save_gametime[23+p] = '\0';

f = 10;
while (f < 10+p) { //Path to high_scores file.
text_path_to_save_gametime[f] = text_playername[f-10];
f += 1;
}


/////


/////Creating path to high scores text file in player folder.
f = 11+p; //p in this case refers to the length of the playername. How many characters it is.
text_path_to_save_high_scores[f - 1] = '/';
text_path_to_save_high_scores[f] = 'h';
text_path_to_save_high_scores[f+1] = 'i';
text_path_to_save_high_scores[f+2] = 'g';
text_path_to_save_high_scores[f+3] = 'h';
text_path_to_save_high_scores[f + 4] = '_';
text_path_to_save_high_scores[f + 5] = 's';
text_path_to_save_high_scores[f + 6] = 'c';
text_path_to_save_high_scores[f + 7] = 'o';
text_path_to_save_high_scores[f + 8] = 'r';
text_path_to_save_high_scores[f + 9] = 'e';
text_path_to_save_high_scores[f + 10] = 's';
text_path_to_save_high_scores[f + 11] = '.';
text_path_to_save_high_scores[f + 12] = 't';
text_path_to_save_high_scores[f + 13] = 'x';
text_path_to_save_high_scores[f + 14] = 't';
text_path_to_save_high_scores[26+p] = '\0';



f = 10;
while (f < 10+p) { //Path to achievements file.
text_path_to_save_high_scores[f] = text_playername[f-10];
f += 1;
}



/////Creating path to achievements text file in player folder.
f = 11+p; //p in this case refers to the length of the playername. How many characters it is.
text_path_to_save_achievements[f - 1] = '/';
text_path_to_save_achievements[f] = 'a';
text_path_to_save_achievements[f + 1] = 'c';
text_path_to_save_achievements[f + 2] = 'h';
text_path_to_save_achievements[f + 3] = 'i';
text_path_to_save_achievements[f + 4] = 'e';
text_path_to_save_achievements[f + 5] = 'v';
text_path_to_save_achievements[f + 6] = 'e';
text_path_to_save_achievements[f + 7] = 'm';
text_path_to_save_achievements[f + 8] = 'e';
text_path_to_save_achievements[f + 9] = 'n';
text_path_to_save_achievements[f + 10] = 't';
text_path_to_save_achievements[f + 11] = 's';
text_path_to_save_achievements[23 + p] = '\0';



f = 10;
while (f < 10+p) { //Path to achievements file.
text_path_to_save_achievements[f] = text_playername[f-10];
f += 1;
}



//If player data folder does not exist. Create folder.
if (access(text_path_to_save, F_OK) != 0) {
mkdir(text_path_to_save, 0777);
}


//If proper files are not present inside players folder, they are created.
//Default values are not set, file is left blank.
if (access(text_path_to_save_gametime, F_OK) != 0) {
FILE * tempfile = fopen(text_path_to_save_gametime, "w");
fclose(tempfile);
}

//If proper files are not present inside players folder, they are created.
//Default values are not set, file is left blank.
if (access(text_path_to_save_high_scores, F_OK) != 0) {
FILE * tempfile = fopen(text_path_to_save_high_scores, "w");
fclose(tempfile);
}

//If proper files are not present inside players folder, they are created.
//Default values are also set.
if (access(text_path_to_save_achievements, F_OK) != 0) {
FILE * tempfile = fopen(text_path_to_save_achievements, "wb");

//Setting default values.
achievements_byte = 0; //Making sure achievements_byte is set to 0 when creating new save file.
fwrite(&achievements_byte, sizeof(char), 1, tempfile);


fclose(tempfile);

}