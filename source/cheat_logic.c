//In this file we are loading a file and searching for certain strings that if recognized will be used accordingly to enable a cheat.


//If cheat file doesn't exist, create it. 
if (access("user_data/cheats.txt", F_OK) == -1) {

file_cheats = fopen("user_data/cheats.txt", "w");
fclose(file_cheats);

}


//Checking if cheat file exists.
if (access("user_data/cheats.txt", F_OK) == 0) {

//Opening file.
file_cheats = fopen("user_data/cheats.txt", "r+");


////////// Reading lines and looking for cheat words that turn on cheats if recognized as such.


//Maxplasma cheat maxes out plasma stat permanently.
fseek(file_cheats, 0, SEEK_SET);
f = 0;
while (f < 16) {
fgets(text_cheat, sizeof(text_cheat), file_cheats);
if (strstr(text_cheat, "maxplasma") != NULL) {
player_plasma = 10;
}
memset(text_cheat, 0, 1000);
f += 1;
}



//Maxshield cheat maxes out shield stat permanently.
fseek(file_cheats, 0, SEEK_SET);
f = 0;
while (f < 16) {
fgets(text_cheat, sizeof(text_cheat), file_cheats);
if (strstr(text_cheat, "maxshield") != NULL) {
player_shield = 10;
}
memset(text_cheat, 0, 1000);
f += 1;
}



//Minshield cheat minimizes the shield stat permanently.
fseek(file_cheats, 0, SEEK_SET);
f = 0;
while (f < 16) {
fgets(text_cheat, sizeof(text_cheat), file_cheats);
if (strstr(text_cheat, "minshield") != NULL) {
player_shield = 0;
}
memset(text_cheat, 0, 1000);
f += 1;
}


//lifedrain cheat kills the player quickly.
fseek(file_cheats, 0, SEEK_SET);
f = 0;
while (f < 16) {
fgets(text_cheat, sizeof(text_cheat), file_cheats);
if (strstr(text_cheat, "lifedrain") != NULL) {
if (progression > 59) { //At least one second must have passed for player to die.
player_durability -= 1;
}
}
memset(text_cheat, 0, 1000);
f += 1;
}

//Finally, we close the file stream.
fclose(file_cheats);

}


 

/* This is a list of all possible cheats.

maxplasma - maxes out plasma permanently.
maxshield - maxes out shield permanently.
minshield - depletes shield permanently.
lifedrain - kills the player almost instantly.


*/