//At this h.file are stored fieled and figures

#define ROWS 20
#define COLS 10

static unsigned char game_field[ROWS][COLS]
	{ {0} };
static constexpr unsigned char square[2][2]                                 // ##
	{                                                                   // ##
		{1,1},
		{1,1}
	};
static constexpr unsigned char line_figure[4][4]                            // ####
	{
		{0,0,0,0},
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};
static constexpr unsigned char t_figure[3][3]                               //  #
	{                                                                   // ###
		{0,1,0},
		{1,1,1},
		{0,0,0}
	};
static constexpr unsigned char l_figure[3][3]                               //   #
	{                                                                   // ###
		{0,0,1},
		{1,1,1},
		{0,0,0}
	};
static constexpr unsigned char j_figure[3][3]                               // #
	{                                                                   // ###
		{1,0,0},
		{1,1,1},
		{0,0,0}
	};
static constexpr unsigned char s_figure[3][3]                               //  ##
	{                                                                   // ##
		{0,1,1},
		{1,1,0},
		{0,0,0}
	};
static constexpr unsigned char z_figure[3][3]                               // ##
	{                                                                   //  ##
		{1,1,0},
		{0,1,1},
		{0,0,0}
	};
