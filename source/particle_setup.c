//Struct for particles.

struct particle {

int x, y; //Position, duh.
int enabled; //Is it enabled or not.
int x_speed, y_speed; //Speed in both directions.
int r, g, b; //How bright will the particles be.

};


//Making a list of particles.
struct particle * array_particle = malloc(sizeof(struct particle)*100000);
//struct particle array_particle[10000];

//Setting default values in particle array.
f = 0;
while (f < 100000) {
array_particle[f].enabled = 0;

f += 1;
}