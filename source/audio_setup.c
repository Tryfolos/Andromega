//Reserving audio samples. Also creating default mixer.
al_reserve_samples(64);


//Loading sample data.
ALLEGRO_SAMPLE * sample_player_fire = al_load_sample("audio/player_fire.wav"); //Player shooting.
ALLEGRO_SAMPLE * sample_enemy_shooting = al_load_sample("audio/enemy_bullet.wav"); //Enemy shooting (regular bullets).
ALLEGRO_SAMPLE * sample_small_explosion = al_load_sample("audio/small_explosion.wav"); //The explosion you hear when a small enemy dies.
ALLEGRO_SAMPLE * sample_big_explosion = al_load_sample("audio/big_explosion.wav"); //The explosion you hear when a big enemy or the player dies.
ALLEGRO_SAMPLE * sample_select = al_load_sample("audio/select.wav"); //Sound that plays in meny when changing sounds.
ALLEGRO_SAMPLE * sample_laser_short = al_load_sample("audio/laser_short.wav"); //Laser attack when no powerup is active.
ALLEGRO_SAMPLE * sample_laser_long = al_load_sample("audio/laser_long.wav"); //Laser attack when the powerup is active.
ALLEGRO_SAMPLE * sample_pickup = al_load_sample("audio/pickup.wav"); //Powerup pickup sound.
ALLEGRO_SAMPLE * sample_pick_name_music = al_load_sample("audio/pick_name_music.wav"); //The music that plays when you pick the name.
ALLEGRO_SAMPLE * sample_change_option = al_load_sample("audio/change_option.wav"); //Change option in menu.
ALLEGRO_SAMPLE * sample_tazer = al_load_sample("audio/tazer.wav"); //When the tazer enemy shoots.
ALLEGRO_SAMPLE * sample_player_hurt = al_load_sample("audio/player_hurt.wav"); //When the player takes damage.
ALLEGRO_SAMPLE * sample_choose_option = al_load_sample("audio/choose_option.wav"); //When you choose an option in the menu.
ALLEGRO_SAMPLE * sample_space_dust_404 = al_load_sample("audio/space_dust_404.wav"); //The music that plays in the main menu.
ALLEGRO_SAMPLE * sample_delete_user = al_load_sample("audio/delete_user.wav"); //Sound that plays when you are about to delete a user (while you are holding the delete key).
ALLEGRO_SAMPLE * sample_achievement_unlocked = al_load_sample("audio/achievement_unlocked.wav"); //Sound that plays when you unlock an achievement.
ALLEGRO_SAMPLE * sample_charge_energy = al_load_sample("audio/charge_energy.wav");
ALLEGRO_SAMPLE * sample_unlocked_upgrade = al_load_sample("audio/unlocked_upgrade.wav");
ALLEGRO_SAMPLE * sample_press_any_key = al_load_sample("audio/press_any_key.wav"); //When you press any button on the title screen. 
ALLEGRO_SAMPLE * sample_invitation_void = al_load_sample("audio/invitation_void.wav");
ALLEGRO_SAMPLE * sample_enemy_hurt = al_load_sample("audio/enemy_hurt.wav");
ALLEGRO_SAMPLE * sample_enter = al_load_sample("audio/enter.wav");
ALLEGRO_SAMPLE * sample_move_select = al_load_sample("audio/move_select.wav");


//Creating array of sample instances.
ALLEGRO_SAMPLE_INSTANCE * array_sample_instance[1024];

//Creating array of unsigned ints that remebers where in the playback we were so when we resume the game after a pause the instances will continue playing where they left off.
unsigned int * array_playback_position = malloc(sizeof(unsigned int)*1024); 

//Creating instances in array.
array_sample_instance[0] = al_create_sample_instance(sample_player_fire);
array_sample_instance[1] = al_create_sample_instance(sample_player_fire);
array_sample_instance[2] = al_create_sample_instance(sample_player_fire);
array_sample_instance[3] = al_create_sample_instance(sample_player_fire);
array_sample_instance[4] = al_create_sample_instance(sample_player_fire);
array_sample_instance[5] = al_create_sample_instance(sample_player_fire);
array_sample_instance[6] = al_create_sample_instance(sample_player_fire);
array_sample_instance[7] = al_create_sample_instance(sample_player_fire);
array_sample_instance[8] = al_create_sample_instance(sample_player_fire);

array_sample_instance[9] = al_create_sample_instance(sample_player_fire);
array_sample_instance[10] = al_create_sample_instance(sample_player_fire);
array_sample_instance[11] = al_create_sample_instance(sample_player_fire);
array_sample_instance[12] = al_create_sample_instance(sample_player_fire);
array_sample_instance[13] = al_create_sample_instance(sample_player_fire);
array_sample_instance[14] = al_create_sample_instance(sample_player_fire);
array_sample_instance[15] = al_create_sample_instance(sample_player_fire);

array_sample_instance[16] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[17] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[18] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[19] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[20] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[21] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[22] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[23] = al_create_sample_instance(sample_enemy_shooting);

array_sample_instance[24] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[25] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[26] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[27] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[28] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[29] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[30] = al_create_sample_instance(sample_enemy_shooting);
array_sample_instance[31] = al_create_sample_instance(sample_enemy_shooting);

array_sample_instance[32] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[33] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[34] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[35] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[36] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[37] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[38] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[39] = al_create_sample_instance(sample_small_explosion);

array_sample_instance[40] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[41] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[42] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[43] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[44] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[45] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[46] = al_create_sample_instance(sample_small_explosion);
array_sample_instance[47] = al_create_sample_instance(sample_small_explosion);

array_sample_instance[48] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[49] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[50] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[51] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[52] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[53] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[54] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[55] = al_create_sample_instance(sample_big_explosion);

array_sample_instance[56] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[57] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[58] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[59] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[60] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[61] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[62] = al_create_sample_instance(sample_big_explosion);
array_sample_instance[63] = al_create_sample_instance(sample_big_explosion);

array_sample_instance[64] = al_create_sample_instance(sample_select);
array_sample_instance[65] = al_create_sample_instance(sample_select);
array_sample_instance[66] = al_create_sample_instance(sample_select);
array_sample_instance[67] = al_create_sample_instance(sample_select);
array_sample_instance[68] = al_create_sample_instance(sample_select);
array_sample_instance[69] = al_create_sample_instance(sample_select);
array_sample_instance[70] = al_create_sample_instance(sample_select);
array_sample_instance[71] = al_create_sample_instance(sample_select);

array_sample_instance[72] = al_create_sample_instance(sample_laser_short);
array_sample_instance[73] = al_create_sample_instance(sample_laser_short);

array_sample_instance[74] = al_create_sample_instance(sample_laser_long);
array_sample_instance[75] = al_create_sample_instance(sample_laser_long);

array_sample_instance[76] = al_create_sample_instance(sample_pickup);
array_sample_instance[77] = al_create_sample_instance(sample_pickup);
array_sample_instance[78] = al_create_sample_instance(sample_pickup);
array_sample_instance[79] = al_create_sample_instance(sample_pickup);
array_sample_instance[80] = al_create_sample_instance(sample_pickup);
array_sample_instance[81] = al_create_sample_instance(sample_pickup);
array_sample_instance[82] = al_create_sample_instance(sample_pickup);
array_sample_instance[83] = al_create_sample_instance(sample_pickup);

array_sample_instance[84] = al_create_sample_instance(sample_pick_name_music);

array_sample_instance[85] = al_create_sample_instance(sample_change_option);
array_sample_instance[86] = al_create_sample_instance(sample_change_option);
array_sample_instance[87] = al_create_sample_instance(sample_change_option);
array_sample_instance[88] = al_create_sample_instance(sample_change_option);
array_sample_instance[89] = al_create_sample_instance(sample_change_option);
array_sample_instance[90] = al_create_sample_instance(sample_change_option);
array_sample_instance[91] = al_create_sample_instance(sample_change_option);
array_sample_instance[92] = al_create_sample_instance(sample_change_option);

array_sample_instance[93] = al_create_sample_instance(sample_tazer);
array_sample_instance[94] = al_create_sample_instance(sample_tazer);
array_sample_instance[95] = al_create_sample_instance(sample_tazer);
array_sample_instance[96] = al_create_sample_instance(sample_tazer);
array_sample_instance[97] = al_create_sample_instance(sample_tazer);
array_sample_instance[98] = al_create_sample_instance(sample_tazer);
array_sample_instance[99] = al_create_sample_instance(sample_tazer);
array_sample_instance[100] = al_create_sample_instance(sample_tazer);

array_sample_instance[101] = al_create_sample_instance(sample_tazer);
array_sample_instance[102] = al_create_sample_instance(sample_tazer);
array_sample_instance[103] = al_create_sample_instance(sample_tazer);
array_sample_instance[104] = al_create_sample_instance(sample_tazer);

array_sample_instance[105] = al_create_sample_instance(sample_choose_option);
array_sample_instance[106] = al_create_sample_instance(sample_choose_option);
array_sample_instance[107] = al_create_sample_instance(sample_choose_option);
array_sample_instance[108] = al_create_sample_instance(sample_choose_option);

array_sample_instance[109] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[110] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[111] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[112] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[113] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[114] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[115] = al_create_sample_instance(sample_player_hurt);
array_sample_instance[116] = al_create_sample_instance(sample_player_hurt);

array_sample_instance[117] = al_create_sample_instance(sample_space_dust_404);

array_sample_instance[118] = al_create_sample_instance(sample_delete_user);

array_sample_instance[119] = al_create_sample_instance(sample_achievement_unlocked);

array_sample_instance[120] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[121] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[122] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[123] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[124] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[125] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[126] = al_create_sample_instance(sample_charge_energy);
array_sample_instance[127] = al_create_sample_instance(sample_charge_energy);

array_sample_instance[128] = al_create_sample_instance(sample_unlocked_upgrade);
array_sample_instance[129] = al_create_sample_instance(sample_unlocked_upgrade);

array_sample_instance[130] = al_create_sample_instance(sample_press_any_key);

array_sample_instance[131] = al_create_sample_instance(sample_invitation_void);

array_sample_instance[132] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[133] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[134] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[135] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[136] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[137] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[138] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[139] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[140] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[141] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[142] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[143] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[144] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[145] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[146] = al_create_sample_instance(sample_enemy_hurt);
array_sample_instance[147] = al_create_sample_instance(sample_enemy_hurt);

array_sample_instance[148] = al_create_sample_instance(sample_move_select);
array_sample_instance[149] = al_create_sample_instance(sample_move_select);
array_sample_instance[150] = al_create_sample_instance(sample_move_select);
array_sample_instance[151] = al_create_sample_instance(sample_move_select);

array_sample_instance[152] = al_create_sample_instance(sample_enter);
array_sample_instance[153] = al_create_sample_instance(sample_enter);
array_sample_instance[154] = al_create_sample_instance(sample_enter);
array_sample_instance[155] = al_create_sample_instance(sample_enter);

//Attaching every sample to mixer in loop. 
f = 0;
while (f < instance_count) {

al_attach_sample_instance_to_mixer(array_sample_instance[f], al_get_default_mixer()); // Attaching instance to default mixer.

f += 1;
}


///// INSTANCE ARRAY RANGE DOCUMENTATION.

//INSTANCES 0 - 15 is player shooting/firing sound. 16 Samples.
//INSTANCES 16 - 31 are enemy bullets. 16 Samples.
//INSTANCES 32 - 47 are small explosions. 16 Samples.
//INSTANCES 48 - 63 are big explosions. 16 Samples.
//INSTANCES 64 - 71 are selection sounds. 8 Samples.
//INSTANCES 72 - 73 are laser short instances. 2 Samples.
//INSTANCES 74 - 75 are laser long instances. 2 Samples.
//INSTANCES 76 - 83 are pickups/powerups. 8 Samples.
//INSTANCE 84 is music that plays while you pick a name.
//INSTANCES 85 - 92 are for when you change an option in the meny. Other than the audio option.
//INSTANCES 101-104 are for tazer shots.
//INSTANCES 105 - 108 are for when you choose an option in a menu.
//INSTANCES 109 - 116 are for when the player gets hurt/shot.
//INSTANCE 117 is the main menu music known as "Space Dust 404".
//INSTANCE 118 is the sound that plays when you are about to delete a user. 
//INSTANCE 119 is the sound for unlocking an achievement.
//INSTANCES 120 - 127 are for when you charge energy.
//INSTANCES 128-129 is for when you unlock an upgrade.
//INSTANCE 130 is for when you press the play button on the title screen. 
//INSTANCE 131 is the in game gameplay music.
//INSTANCES 132 - 148 are for when an enemy gets shot or hurt. 
//INSTANCES 148 - 151 are for when you change letter in choose name screen.
//INSTANCES 152 - 155 are for when you select/choose a symbol in the choose name screen.

//Setting playmode.
al_set_sample_instance_playmode(array_sample_instance[118], ALLEGRO_PLAYMODE_LOOP);
al_set_sample_instance_playmode(array_sample_instance[131], ALLEGRO_PLAYMODE_LOOP);

/////Macros that are used to play certain sounds.

#define play_sound_change_option                                     \
d = 85;                                                              \
while (d < 93) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) { \
al_play_sample_instance(array_sample_instance[d]);                   \
break;                                                               \
}                                                                    \
d += 1;                                                              \
}                                                                    \


#define play_sound_choose_option                                      \
d = 105;                                                              \
while (d < 109) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {  \
al_play_sample_instance(array_sample_instance[d]);                    \
break;                                                                \
}                                                                     \
d += 1;                                                               \
}                                                                     \


#define play_sound_player_hurt                                        \
d = 109;                                                              \
while (d < 117) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {  \
al_play_sample_instance(array_sample_instance[d]);                    \
break;                                                                \
}                                                                     \
d += 1;                                                               \
}                                                                     \


#define play_sound_charge_energy                                      \
d = 120;                                                              \
while (d < 128) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {  \
al_play_sample_instance(array_sample_instance[d]);                    \
break;                                                                \
}                                                                     \
d += 1;                                                               \
}                                                                     \


#define play_sound_enemy_hurt                                         \
d = 132;                                                              \
while (d < 148) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {  \
al_play_sample_instance(array_sample_instance[d]);                    \
break;                                                                \
}                                                                     \
d += 1;                                                               \
}    

#define play_sound_move_select                                         \
d = 148;                                                              \
while (d < 152) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {  \
al_play_sample_instance(array_sample_instance[d]);                    \
break;                                                                \
}                                                                     \
d += 1;                                                               \
}  

#define play_sound_enter                                         \
d = 152;                                                              \
while (d < 156) {                                                     \
if (al_get_sample_instance_playing(array_sample_instance[d]) == 0) {  \
al_play_sample_instance(array_sample_instance[d]);                    \
break;                                                                \
}                                                                     \
d += 1;                                                               \
}   