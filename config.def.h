/* user and group to drop privileges to */
static const char *user  = "rs";
static const char *group = "rs";

static const char *colorname[NUMCOLS] = {
	[BG] =     "black",     /* background */
	[INIT] =   "#1d1c19",   /* after initialization */
	[INPUT] =  "#c4b28a",   /* during input */
	[FAILED] = "#c4746e",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
* Shapes:
* 0: square
* 1: circle
*/
static const int shape = 0;
/* size of square in px */
static const int shapesize = 40;
static const int shapegap = 30;
