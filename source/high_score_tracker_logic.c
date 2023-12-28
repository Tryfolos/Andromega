
if (current_cutscene_part == -1) {

//Function for creating new file with default values.
void create_high_scores_file() {
//running = 0;
//goto end;
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs("SCORE0:0\n", file_progress);
fputs("SCORE1:0\n", file_progress);
fputs("SCORE2:0\n", file_progress);
fputs("SCORE3:0\n", file_progress);
fputs("SCORE4:0\n", file_progress);
fputs("SCORE5:0\n", file_progress);
fputs("SCORE6:0\n", file_progress);
fputs("SCORE7:0\n", file_progress);
fputs("SCORE8:0\n", file_progress);
fputs("SCORE9:0\n", file_progress);
fputs("SCORE10:0\n", file_progress);
fputs("SCORE11:0\n", file_progress);
fputs("SCORE12:0\n", file_progress);
fputs("SCORE13:0\n", file_progress);
fputs("SCORE14:0\n", file_progress);
//Devtest.
//end:
} //End of function.



//Creating progress file if it doesn't exist.

file_progress = fopen(text_path_to_save_high_scores, "r");
if (file_progress == NULL) { //Creating progress file and setting default values.
create_high_scores_file();
}


//Resetting strings.
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


/////Checking the file to see if everything is structured correctly, if there are problems it will be overwritten and replaced with default values.
fseek(file_progress, 0, SEEK_SET);
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE0:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE1:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE2:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE3:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE4:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE5:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE6:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE7:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE8:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE9:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE10:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE11:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE12:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE13:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}
memset(text_progress_file, 0, 63);
fgets(text_progress_file, 64, file_progress);
if (strstr(text_progress_file, "SCORE14:") == NULL) { //If not up to standard, create new file.
create_high_scores_file();
}


/////If player has died. Update high score. Write new score to file IF it fits into the top 10 scores.
if (player_durability == 0 || chosen_option == 1) {

//Putting pointer at beginning of file.
fseek(file_progress, 0, SEEK_SET);

//Turning score into string. Only do this if player is alive.
sprintf(text_score_tracker, "%d", score);


//Reading scores from file and turning the, into integers. 
fgets(text_score_0, 64, file_progress);
fgets(text_score_1, 64, file_progress);
fgets(text_score_2, 64, file_progress);
fgets(text_score_3, 64, file_progress);
fgets(text_score_4, 64, file_progress);
fgets(text_score_5, 64, file_progress);
fgets(text_score_6, 64, file_progress);
fgets(text_score_7, 64, file_progress);
fgets(text_score_8, 64, file_progress);
fgets(text_score_9, 64, file_progress);
fgets(text_score_10, 64, file_progress);
fgets(text_score_11, 64, file_progress);
fgets(text_score_12, 64, file_progress);
fgets(text_score_13, 64, file_progress);
fgets(text_score_14, 64, file_progress);


//Resetting strings every frame.
memset(text_score_0_int, 0, 31);
memset(text_score_1_int, 0, 31);
memset(text_score_2_int, 0, 31);
memset(text_score_3_int, 0, 31);
memset(text_score_4_int, 0, 31);
memset(text_score_5_int, 0, 31);
memset(text_score_6_int, 0, 31);
memset(text_score_7_int, 0, 31);
memset(text_score_8_int, 0, 31);
memset(text_score_9_int, 0, 31);
memset(text_score_10_int, 0, 31);
memset(text_score_11_int, 0, 31);
memset(text_score_12_int, 0, 31);
memset(text_score_13_int, 0, 31);
memset(text_score_14_int, 0, 31);

//Picking the number out of the strings and putting them in seperate strings.
//Getting gametime text (number) value from data that was read from file.
f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_0[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_0_int[i] = text_score_0[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_1[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_1_int[i] = text_score_1[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_2[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_2_int[i] = text_score_2[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_3[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_3_int[i] = text_score_3[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_4[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_4_int[i] = text_score_4[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_5[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_5_int[i] = text_score_5[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_6[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_6_int[i] = text_score_6[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_7[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_7_int[i] = text_score_7[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_8[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_8_int[i] = text_score_8[f];
i += 1;
}

f += 1;
}

f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_9[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_9_int[i] = text_score_9[f];
i += 1;
}

f += 1;
}


f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_10[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_10_int[i] = text_score_10[f];
i += 1;
}

f += 1;
}


f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_11[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_11_int[i] = text_score_11[f];
i += 1;
}

f += 1;
}


f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_12[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_12_int[i] = text_score_12[f];
i += 1;
}

f += 1;
}


f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_13[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_13_int[i] = text_score_13[f];
i += 1;
}

f += 1;
}


f = 7;
i = 0;
while (f < 64) {

if (isdigit(text_score_14[f]) > 0) { //Getting numbers from file and putting them in seperate array.
text_score_14_int[i] = text_score_14[f];
i += 1;
}

f += 1;
}


//Turning text_score_0_int and the other strings into integers. 
score_0 = atoi(text_score_0_int);
score_1 = atoi(text_score_1_int);
score_2 = atoi(text_score_2_int);
score_3 = atoi(text_score_3_int);
score_4 = atoi(text_score_4_int);
score_5 = atoi(text_score_5_int);
score_6 = atoi(text_score_6_int);
score_7 = atoi(text_score_7_int);
score_8 = atoi(text_score_8_int);
score_9 = atoi(text_score_9_int);
score_10 = atoi(text_score_10_int);
score_11 = atoi(text_score_11_int);
score_12 = atoi(text_score_12_int);
score_13 = atoi(text_score_13_int);
score_14 = atoi(text_score_14_int);


//Comparing current score with the ones from the file and deciding ranking.

if (score > score_14) {
if (score < score_13) {
sprintf(text_score_14, "SCORE14:%d\n", score);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress);
fputs(text_score_1, file_progress);
fputs(text_score_2, file_progress);
fputs(text_score_3, file_progress);
fputs(text_score_4, file_progress);
fputs(text_score_5, file_progress);
fputs(text_score_6, file_progress);
fputs(text_score_7, file_progress);
fputs(text_score_8, file_progress);
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_13) {
if (score < score_12) {
sprintf(text_score_13, "SCORE13:%d\n", score);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress);
fputs(text_score_1, file_progress);
fputs(text_score_2, file_progress);
fputs(text_score_3, file_progress);
fputs(text_score_4, file_progress);
fputs(text_score_5, file_progress);
fputs(text_score_6, file_progress);
fputs(text_score_7, file_progress);
fputs(text_score_8, file_progress);
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_12) {
if (score < score_11) {
sprintf(text_score_12, "SCORE12:%d\n", score);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress);
fputs(text_score_1, file_progress);
fputs(text_score_2, file_progress);
fputs(text_score_3, file_progress);
fputs(text_score_4, file_progress);
fputs(text_score_5, file_progress);
fputs(text_score_6, file_progress);
fputs(text_score_7, file_progress);
fputs(text_score_8, file_progress);
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_11) {
if (score < score_10) {
sprintf(text_score_11, "SCORE11:%d\n", score);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress);
fputs(text_score_1, file_progress);
fputs(text_score_2, file_progress);
fputs(text_score_3, file_progress);
fputs(text_score_4, file_progress);
fputs(text_score_5, file_progress);
fputs(text_score_6, file_progress);
fputs(text_score_7, file_progress);
fputs(text_score_8, file_progress);
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_10) {
if (score < score_9) {
sprintf(text_score_10, "SCORE10:%d\n", score);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress);
fputs(text_score_1, file_progress);
fputs(text_score_2, file_progress);
fputs(text_score_3, file_progress);
fputs(text_score_4, file_progress);
fputs(text_score_5, file_progress);
fputs(text_score_6, file_progress);
fputs(text_score_7, file_progress);
fputs(text_score_8, file_progress);
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_9) {
if (score < score_8) {
sprintf(text_score_9, "SCORE9:%d\n",  score);
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress);
fputs(text_score_1, file_progress);
fputs(text_score_2, file_progress);
fputs(text_score_3, file_progress);
fputs(text_score_4, file_progress);
fputs(text_score_5, file_progress);
fputs(text_score_6, file_progress);
fputs(text_score_7, file_progress);
fputs(text_score_8, file_progress);
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_8) {
if (score < score_7) {
sprintf(text_score_8, "SCORE8:%d\n",  score);
sprintf(text_score_9, "SCORE9:%d\n",  score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}

if (score > score_7) {
if (score < score_6) {
sprintf(text_score_7, "SCORE7:%d\n", score);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}

if (score > score_6) {
if (score < score_5) {
sprintf(text_score_6, "SCORE6:%d\n", score);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_5) {
if (score < score_4) {
sprintf(text_score_5, "SCORE5:%d\n", score);
sprintf(text_score_6, "SCORE6:%d\n", score_5);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}



if (score > score_4) {
if (score < score_3) {
sprintf(text_score_4, "SCORE4:%d\n", score);
sprintf(text_score_5, "SCORE5:%d\n", score_4);
sprintf(text_score_6, "SCORE6:%d\n", score_5);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_3) {
if (score < score_2) {
sprintf(text_score_3, "SCORE3:%d\n", score);
sprintf(text_score_4, "SCORE4:%d\n", score_3);
sprintf(text_score_5, "SCORE5:%d\n", score_4);
sprintf(text_score_6, "SCORE6:%d\n", score_5);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_2) {
if (score < score_1) {
sprintf(text_score_2, "SCORE2:%d\n", score);
sprintf(text_score_3, "SCORE3:%d\n", score_2);
sprintf(text_score_4, "SCORE4:%d\n", score_3);
sprintf(text_score_5, "SCORE5:%d\n", score_4);
sprintf(text_score_6, "SCORE6:%d\n", score_5);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}

if (score > score_1) {
if (score < score_0) {
sprintf(text_score_1, "SCORE1:%d\n", score);
sprintf(text_score_2, "SCORE2:%d\n", score_1);
sprintf(text_score_3, "SCORE3:%d\n", score_2);
sprintf(text_score_4, "SCORE4:%d\n", score_3);
sprintf(text_score_5, "SCORE5:%d\n", score_4);
sprintf(text_score_6, "SCORE6:%d\n", score_5);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.
score = 0;
}}


if (score > score_1) {
sprintf(text_score_0, "SCORE0:%d\n", score);
sprintf(text_score_1, "SCORE1:%d\n", score_0);
sprintf(text_score_2, "SCORE2:%d\n", score_1);
sprintf(text_score_3, "SCORE3:%d\n", score_2);
sprintf(text_score_4, "SCORE4:%d\n", score_3);
sprintf(text_score_5, "SCORE5:%d\n", score_4);
sprintf(text_score_6, "SCORE6:%d\n", score_5);
sprintf(text_score_7, "SCORE7:%d\n", score_6);
sprintf(text_score_8, "SCORE8:%d\n", score_7); //Score 9 takes on the score of score 8.
sprintf(text_score_9, "SCORE9:%d\n", score_8); //Score 9 takes on the score of score 8.
sprintf(text_score_10, "SCORE10:%d\n", score_9);
sprintf(text_score_11, "SCORE11:%d\n", score_10);
sprintf(text_score_12, "SCORE12:%d\n", score_11);
sprintf(text_score_13, "SCORE13:%d\n", score_12);
sprintf(text_score_14, "SCORE14:%d\n", score_13);
//fseek(file_progress, 0, SEEK_SET);
fclose(file_progress);
file_progress = fopen(text_path_to_save_high_scores, "w");
fputs(text_score_0, file_progress); //Score 0.
fputs(text_score_1, file_progress); //Score 1.
fputs(text_score_2, file_progress); //Score 2.
fputs(text_score_3, file_progress); //Score 3.
fputs(text_score_4, file_progress); //Score 4.
fputs(text_score_5, file_progress); //Score 5.
fputs(text_score_6, file_progress); //Score 6.
fputs(text_score_7, file_progress); //Score 7.
fputs(text_score_8, file_progress); //Score 8.
fputs(text_score_9, file_progress); //Score 9.
fputs(text_score_10, file_progress); //Score 10.
fputs(text_score_11, file_progress); //Score 11.
fputs(text_score_12, file_progress); //Score 12.
fputs(text_score_13, file_progress); //Score 13.
fputs(text_score_14, file_progress); //Score 14.

score = 0;
}

//Devtest.
/*
printf("%d\n", score_0);
printf("%d\n", score_1);
printf("%d\n", score_2);
printf("%d\n", score_3);
printf("%d\n", score_4);
printf("%d\n", score_5);
printf("%d\n", score_6);
printf("%d\n", score_7);
printf("%d\n", score_8);
printf("%d\n", score_9);
*/
/*
printf("%s\n", text_score_0);
printf("%s\n", text_score_1);
printf("%s\n", text_score_2);
printf("%s\n", text_score_3);
printf("%s\n", text_score_4);
printf("%s\n", text_score_5);
printf("%s\n", text_score_6);
printf("%s\n", text_score_7);
printf("%s\n", text_score_8);
printf("%s\n", text_score_9);
*/

}


//Closing file.
if (current_cutscene_part == -1) {
fclose(file_progress);
}



}