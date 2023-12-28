//Updating the volume level of every instance based on volume level.
master_volume = (float)audio_menu_option_0_option/5;


//Setting volume level of every instance in the game.
f = 0;
while (f < instance_count) {
al_set_sample_instance_gain(array_sample_instance[f], master_volume);
f += 1;
}


//Pausing all the instances if game is paused and in gameplay mode.
if (game_paused == 0) {
if (current_cutscene_part == -1) {
if (input_pause() == 1) {
f = 0;
while (f < instance_count) {
array_playback_position[f] = al_get_sample_instance_position(array_sample_instance[f]);
al_set_sample_instance_playing(array_sample_instance[f], 0);
f += 1;
}
}
}
}

//Resuming playback of instances if game is un paused.
if (game_paused == 1) {
if (input_pause() == 1) {
f = 0;
while (f < instance_count) {
if (array_playback_position[f] > 0) {
al_set_sample_instance_position(array_sample_instance[f], array_playback_position[f]);
al_set_sample_instance_playing(array_sample_instance[f], 1);
}
f += 1;
}
}
}


//If instance is not playing. Set playback position to 0;