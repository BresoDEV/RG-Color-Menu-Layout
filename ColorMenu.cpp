namespace CorMenu
{

	 //Variaveis que retornam as cores
	int R, G, B;

	//Index de navegação
	int index = 1;

	//Ponteiro do Timer
	int timer = 1;

	//Delay do scrool de opcoes
	int delay = 10;

	 
	//Void que aplica as cores
	void ReturnColor(int r, int g, int b)
	{
		R = r;
		G = g;
		B = b;
	}

	//Aplica as cores em variaveis diferentes desse namespace
	void AplicarCor_emVariaveis(int novaVariavelR, int novaVariavelG, int novaVariavelB)
	{
		novaVariavelR = R;
		novaVariavelG = G;
		novaVariavelB = B;
	}


	void DRAW_COLOR_PALLET(bool precisaClicarNacorPraSelecionar, float X, float Y, float XS, float YS, int outR = 0, int outG = 0, int outB = 0)
	{

		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);//shop_box_blank
		}
		else
		{
			//fund0
			GRAPHICS::DRAW_RECT(X, Y, XS, YS, 0, 0, 0, 170);

			//Primeira Fileira
			/*1*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0, 0, 0, 255);//Index 
			/*2*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 255, 0, 0, 255);//Index 
			/*3*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0, 255, 0, 255);//Index 
			/*4*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0, 0, 255, 255);//Index 
			/*5*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - 0.260000, XS - 0.211020, YS - 0.5900000, 255, 255, 0, 255);//Index 
			/*6*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0, 255, 255, 255);//Index 
			/*7*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - 0.260000, XS - 0.211020, YS - 0.5900000, 255, 0, 255, 255);//Index 

			//Segunda Fileira
			/*9*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 31, 14, 10, 255);//Index 
			/*9*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 44, 29, 26, 255);//Index 
			/*10*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 55, 34, 29, 255);//Index 
			/*11*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 69, 43, 37, 255);//Index 
			/*12*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - 0.210000, XS - 0.211020, YS - 0.5900000, 92, 56, 48, 255);//Index 
			/*13*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - 0.210000, XS - 0.211020, YS - 0.5900000, 124, 77, 65, 255);//Index 
			/*14*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - 0.210000, XS - 0.211020, YS - 0.5900000, 179, 110, 93, 255);//Index 

			//Terceira Fileira
			/*15*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 61, 44, 44, 255);//Index 
			/*16*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 98, 70, 70, 255);//Index 
			/*17*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 130, 93, 93, 255);//Index 
			/*18*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 158, 113, 133, 255);//Index 
			/*19*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - 0.160000, XS - 0.211020, YS - 0.5900000, 183, 128, 128, 255);//Index 
			/*20*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - 0.160000, XS - 0.211020, YS - 0.5900000, 200, 150, 150, 255);//Index 
			/*21*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - 0.160000, XS - 0.211020, YS - 0.5900000, 252, 177, 177, 255);//Index 

			//Quarta Fileira
			/*22*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0, 0, 0, 255);//Index 
			/*23*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 40, 40, 40, 255);//Index 
			/*24*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 50, 50, 50, 255);//Index 
			/*25*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 100, 100, 100, 255);//Index 
			/*26*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - 0.110000, XS - 0.211020, YS - 0.5900000, 160, 160, 160, 255);//Index 
			/*27*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - 0.110000, XS - 0.211020, YS - 0.5900000, 180, 180, 180, 255);//Index 
			/*28*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - 0.110000, XS - 0.211020, YS - 0.5900000, 255, 255, 255, 255);//Index 

			//Quinta Fileira
			/*29*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 41, 71, 71, 255);//Index 
			/*30*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 46, 100, 100, 255);//Index 
			/*31*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 40, 120, 120, 255);//Index 
			/*32*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 38, 140, 140, 255);//Index 
			/*33*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - 0.060000, XS - 0.211020, YS - 0.5900000, 14, 170, 170, 255);//Index 
			/*34*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - 0.060000, XS - 0.211020, YS - 0.5900000, 17, 214, 214, 255);//Index 
			/*35*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0, 255, 255, 255);//Index 

			//Sexta Fileira
			/*36*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 36, 52, 66, 255);//Index 
			/*37*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 38, 64, 87, 255);//Index 
			/*38*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 20, 68, 100, 255);//Index 
			/*39*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 5, 78, 139, 255);//Index 
			/*40*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - 0.010000, XS - 0.211020, YS - 0.5900000, 4, 97, 176, 255);//Index 
			/*41*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - 0.010000, XS - 0.211020, YS - 0.5900000, 7, 117, 210, 255);//Index 
			/*42*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0, 138, 255, 255);//Index 

			//Setima Fileira
			/*43*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 50, 0, 255);//Index 
			/*44*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 70, 0, 255);//Index 
			/*45*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 100, 0, 255);//Index 
			/*46*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 130, 0, 255);//Index 
			/*47*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 169, 0, 255);//Index 
			/*48*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 197, 0, 255);//Index 
			/*49*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0, 255, 0, 255);//Index 

			//Oitava Fileira
			/*50*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 50, 255);//Index 
			/*51*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 70, 255);//Index 
			/*52*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 98, 255);//Index 
			/*53*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 127, 255);//Index 
			/*54*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 170, 255);//Index 
			/*55*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 200, 255);//Index 
			/*56*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0, 0, 255, 255);//Index 

			//Nonca Fileira
			/*57*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 50, 0, 0, 255);//Index 
			/*58*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 70, 0, 0, 255);//Index 
			/*59*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 98, 0, 0, 255);//Index 
			/*60*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 127, 0, 0, 255);//Index 
			/*61*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 170, 0, 0, 255);//Index 
			/*62*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 200, 0, 0, 255);//Index 
			/*63*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 255, 0, 0, 255);//Index 


			//Decima Fileira
			/*64*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 40, 0, 255);//Index 
			/*65*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 61, 0, 255);//Index 
			/*66*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 89, 0, 255);//Index 
			/*67*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 130, 0, 255);//Index 
			/*68*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 159, 0, 255);//Index 
			/*69*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 200, 0, 255);//Index 
			/*70*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 255, 255, 0, 255);//Index 


			//Decima primeira Fileira
			/*71*/GRAPHICS::DRAW_RECT(X - 0.090000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 59, 0, 59, 255);//Index 
			/*72*/GRAPHICS::DRAW_RECT(X - 0.060000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 89, 0, 89, 255);//Index 
			/*73*/GRAPHICS::DRAW_RECT(X - 0.030000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 139, 0, 139, 255);//Index 
			/*74*/GRAPHICS::DRAW_RECT(X - 0.000000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 168, 0, 168, 255);//Index 
			/*75*/GRAPHICS::DRAW_RECT(X - (-0.030000), Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 200, 0, 200, 255);//Index 
			/*76*/GRAPHICS::DRAW_RECT(X - (-0.060000), Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 218, 0, 218, 255);//Index 
			/*77*/GRAPHICS::DRAW_RECT(X - (-0.090000), Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 255, 0, 255, 255);//Index 




			switch (index)
			{
			case 1: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 0); break;
			case 2: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 0, 0); break;
			case 3: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 255, 0); break;
			case 4: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 255); break;
			case 5: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 255, 0); break;
			case 6: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 255, 255); break;
			case 7: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - 0.260000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 0, 255); break;
			case 8: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(31, 14, 10); break;
			case 9: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(44, 29, 26); break;
			case 10: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(55, 34, 29); break;
			case 11: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(69, 43, 37); break;
			case 12: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(92, 56, 48); break;
			case 13: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(124, 77, 65); break;
			case 14: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - 0.210000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(179, 110, 93); break;
			case 15: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(61, 44, 44); break;
			case 16: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(98, 70, 70); break;
			case 17: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(130, 93, 93); break;
			case 18: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(158, 113, 133); break;
			case 19: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(183, 128, 128); break;
			case 20: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(200, 150, 150); break;
			case 21: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - 0.160000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(252, 177, 177); break;
			case 22: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 0); break;
			case 23: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(40, 40, 40); break;
			case 24: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(50, 50, 50); break;
			case 25: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(100, 100, 100); break;
			case 26: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(160, 160, 160); break;
			case 27: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(180, 180, 255); break;
			case 28: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - 0.110000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 255, 255); break;
			case 29: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(41, 71, 71); break;
			case 30: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(46, 100, 100); break;
			case 31: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(40, 120, 120); break;
			case 32: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(38, 140, 140); break;
			case 33: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(14, 170, 170); break;
			case 34: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(17, 214, 214); break;
			case 35: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - 0.060000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 255, 255); break;
			case 36: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(36, 52, 66); break;
			case 37: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(38, 64, 87); break;
			case 38: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(20, 68, 100); break;
			case 39: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(5, 78, 139); break;
			case 40: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(4, 97, 176); break;
			case 41: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(7, 117, 210); break;
			case 42: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - 0.010000, XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 138, 255); break;
			case 43: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 50, 0); break;
			case 44: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 70, 0); break;
			case 45: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 100, 0); break;
			case 46: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 130, 0); break;
			case 47: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 169, 0); break;
			case 48: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 197, 0); break;
			case 49: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - (-0.04000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 255, 0); break;
			case 50: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 50); break;
			case 51: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 70); break;
			case 52: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 98); break;
			case 53: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 127); break;
			case 54: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 170); break;
			case 55: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 200); break;
			case 56: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - (-0.09000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(0, 0, 255); break;
			case 57: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(50, 0, 0); break;
			case 58: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(70, 0, 0); break;
			case 59: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(98, 0, 0); break;
			case 60: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(127, 0, 0); break;
			case 61: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(170, 0, 0); break;
			case 62: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(200, 0, 0); break;
			case 63: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - (-0.14000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 0, 0); break;
			case 64: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 40, 0); break;
			case 65: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 61, 0); break;
			case 66: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 89, 0); break;
			case 67: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 130, 0); break;
			case 68: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 159, 0); break;
			case 69: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 200, 0); break;
			case 70: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - (-0.19000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 255, 0); break;
			case 71: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.090000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(59, 0, 59); break;
			case 72: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.060000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(89, 0, 89); break;
			case 73: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.030000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(139, 0, 139); break;
			case 74: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - 0.000000, Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(168, 0, 168); break;
			case 75: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.030000), Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(200, 0, 200); break;
			case 76: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.060000), Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(218, 0, 218); break;
			case 77: GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_box_blank", X - (-0.090000), Y - (-0.24000), XS - 0.211020, YS - 0.5900000, 0.0, 255, 255, 255, 255); ReturnColor(255, 0, 255); break;

			}


			if (timer == delay)
			{
				if (GetAsyncKeyState(VK_DOWN))
				{
					switch (index)
					{
					case 71: index = 1; break;
					case 72: index = 2; break;
					case 73: index = 3; break;
					case 74: index = 4; break;
					case 75: index = 5; break;
					case 76: index = 6; break;
					case 77: index = 7; break;
					default: index += 7; break;
					}
					timer = 0;
				}

				if (GetAsyncKeyState(VK_UP))
				{
					switch (index)
					{
					case 1: index = 71; break;
					case 2: index = 72; break;
					case 3: index = 73; break;
					case 4: index = 74; break;
					case 5: index = 75; break;
					case 6: index = 76; break;
					case 7: index = 77; break;
					default: index -= 7; break;
					}
					timer = 0;
				}


				if (GetAsyncKeyState(VK_RIGHT))
				{
					switch (index)
					{
					case 7: index = 1; break;
					case 14: index = 8; break;
					case 21: index = 15; break;
					case 28: index = 22; break;
					case 35: index = 29; break;
					case 42: index = 36; break;
					case 49: index = 43; break;
					case 56: index = 50; break;
					case 63: index = 57; break;
					case 70: index = 64; break;
					case 77: index = 71; break;
					default: index++; break;
					}
					timer = 0;
				}

				if (GetAsyncKeyState(VK_LEFT))
				{
					switch (index)
					{
					case 1: index = 7; break;
					case 8: index = 14; break;
					case 15: index = 21; break;
					case 22: index = 28; break;
					case 29: index = 35; break;
					case 36: index = 42; break;
					case 43: index = 49; break;
					case 50: index = 56; break;
					case 57: index = 63; break;
					case 64: index = 70; break;
					case 71: index = 77; break;
					default: index--; break;
					}
					timer = 0;
				}
				

				if (precisaClicarNacorPraSelecionar)
				{
					if (GetAsyncKeyState(VK_RETURN))
					{
						switch (index)
						{
						case 1: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 0); break;
						case 2: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 0, 0); break;
						case 3: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 255, 0); break;
						case 4: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 255); break;
						case 5: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 255, 0); break;
						case 6: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 255, 255); break;
						case 7: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 0, 255); break;
						case 8: AplicarCor_emVariaveis(outR, outG, outB); break; //31, 14, 10); break;
						case 9: AplicarCor_emVariaveis(outR, outG, outB); break; //44, 29, 26); break;
						case 10: AplicarCor_emVariaveis(outR, outG, outB); break; //55, 34, 29); break;
						case 11: AplicarCor_emVariaveis(outR, outG, outB); break; //69, 43, 37); break;
						case 12: AplicarCor_emVariaveis(outR, outG, outB); break; //92, 56, 48); break;
						case 13: AplicarCor_emVariaveis(outR, outG, outB); break; //124, 77, 65); break;
						case 14: AplicarCor_emVariaveis(outR, outG, outB); break; //179, 110, 93); break;
						case 15: AplicarCor_emVariaveis(outR, outG, outB); break; //61, 44, 44); break;
						case 16: AplicarCor_emVariaveis(outR, outG, outB); break; //98, 70, 70); break;
						case 17: AplicarCor_emVariaveis(outR, outG, outB); break; //130, 93, 93); break;
						case 18: AplicarCor_emVariaveis(outR, outG, outB); break; //158, 113, 133); break;
						case 19: AplicarCor_emVariaveis(outR, outG, outB); break; //183, 128, 128); break;
						case 20: AplicarCor_emVariaveis(outR, outG, outB); break; //200, 150, 150); break;
						case 21: AplicarCor_emVariaveis(outR, outG, outB); break; //252, 177, 177); break;
						case 22: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 0); break;
						case 23: AplicarCor_emVariaveis(outR, outG, outB); break; //40, 40, 40); break;
						case 24: AplicarCor_emVariaveis(outR, outG, outB); break; //50, 50, 50); break;
						case 25: AplicarCor_emVariaveis(outR, outG, outB); break; //100, 100, 100); break;
						case 26: AplicarCor_emVariaveis(outR, outG, outB); break; //160, 160, 160); break;
						case 27: AplicarCor_emVariaveis(outR, outG, outB); break; //180, 180, 255); break;
						case 28: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 255, 255); break;
						case 29: AplicarCor_emVariaveis(outR, outG, outB); break; //41, 71, 71); break;
						case 30: AplicarCor_emVariaveis(outR, outG, outB); break; //46, 100, 100); break;
						case 31: AplicarCor_emVariaveis(outR, outG, outB); break; //40, 120, 120); break;
						case 32: AplicarCor_emVariaveis(outR, outG, outB); break; //38, 140, 140); break;
						case 33: AplicarCor_emVariaveis(outR, outG, outB); break; //14, 170, 170); break;
						case 34: AplicarCor_emVariaveis(outR, outG, outB); break; //17, 214, 214); break;
						case 35: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 255, 255); break;
						case 36: AplicarCor_emVariaveis(outR, outG, outB); break; //36, 52, 66); break;
						case 37: AplicarCor_emVariaveis(outR, outG, outB); break; //38, 64, 87); break;
						case 38: AplicarCor_emVariaveis(outR, outG, outB); break; //20, 68, 100); break;
						case 39: AplicarCor_emVariaveis(outR, outG, outB); break; //5, 78, 139); break;
						case 40:  AplicarCor_emVariaveis(outR, outG, outB); break; //4, 97, 176); break;
						case 41:  AplicarCor_emVariaveis(outR, outG, outB); break; //7, 117, 210); break;
						case 42:  AplicarCor_emVariaveis(outR, outG, outB); break; //0, 138, 255); break;
						case 43: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 50, 0); break;
						case 44: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 70, 0); break;
						case 45: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 100, 0); break;
						case 46: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 130, 0); break;
						case 47: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 169, 0); break;
						case 48: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 197, 0); break;
						case 49: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 255, 0); break;
						case 50: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 50); break;
						case 51: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 70); break;
						case 52: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 98); break;
						case 53: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 127); break;
						case 54: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 170); break;
						case 55: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 200); break;
						case 56: AplicarCor_emVariaveis(outR, outG, outB); break; //0, 0, 255); break;
						case 57: AplicarCor_emVariaveis(outR, outG, outB); break; //50, 0, 0); break;
						case 58: AplicarCor_emVariaveis(outR, outG, outB); break; //70, 0, 0); break;
						case 59: AplicarCor_emVariaveis(outR, outG, outB); break; //98, 0, 0); break;
						case 60: AplicarCor_emVariaveis(outR, outG, outB); break; //127, 0, 0); break;
						case 61: AplicarCor_emVariaveis(outR, outG, outB); break; //170, 0, 0); break;
						case 62: AplicarCor_emVariaveis(outR, outG, outB); break; //200, 0, 0); break;
						case 63: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 0, 0); break;
						case 64: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 40, 0); break;
						case 65: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 61, 0); break;
						case 66: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 89, 0); break;
						case 67: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 130, 0); break;
						case 68: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 159, 0); break;
						case 69: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 200, 0); break;
						case 70: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 255, 0); break;
						case 71: AplicarCor_emVariaveis(outR, outG, outB); break; //59, 0, 59); break;
						case 72: AplicarCor_emVariaveis(outR, outG, outB); break; //89, 0, 89); break;
						case 73: AplicarCor_emVariaveis(outR, outG, outB); break; //139, 0, 139); break;
						case 74: AplicarCor_emVariaveis(outR, outG, outB); break; //168, 0, 168); break;
						case 75: AplicarCor_emVariaveis(outR, outG, outB); break; //200, 0, 200); break;
						case 76: AplicarCor_emVariaveis(outR, outG, outB); break; //218, 0, 218); break;
						case 77: AplicarCor_emVariaveis(outR, outG, outB); break; //255, 0, 255); break;

						}
						timer = 0;
					}
				}
			}
			else
			{
				timer++;
			}
		}
		 
	}
}
