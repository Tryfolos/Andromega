//Struct representing laser particle.
struct laser_particle {

int x, y; //Position of particle on screen.
int enabled; //Is the particle enabled/existing or not.
int direction; //What direction on the y axis will the particle move.
int timer_despawn; //The particle will despawn after this long.
int side; //What side of the beam did the particle spawn on.

};


//Creating array of laser particles.
struct laser_particle * array_laser_particles = malloc(sizeof(struct laser_particle) * 10000);


//Setting default values in array.
f = 0;
while (f < 10000) {
array_laser_particles[f].enabled = 0;
f += 1;
}