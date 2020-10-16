int distance(int restaurant, int location, int price) 
{
//	jawa = 0;
//	sumatera = 1;
//	kalimantan = 2;
//	sulawesi =3;
//	papua = 4;

	if (restaurant==location) 
	{
		return 10000;
	}
	else if (restaurant==0&&location==1||restaurant==1&&location==0)
	{
		return 20000;
	}
	else if (restaurant==0&&location==2||restaurant==2&&location==0)
	{
		return 25000;
	}
	else if (restaurant==0&&location==3||restaurant==3&&location==0)
	{
		return 30000;
	}
	else if (restaurant==0&&location==4||restaurant==4&&location==0)
	{
		return 35000;
	}

	else if (restaurant==1&&location==2||restaurant==2&&location==1)
	{
		return 25000;
	}
	else if (restaurant==1&&location==3||restaurant==3&&location==1)
	{
		return 30000;
	}
	else if (restaurant==1&&location==4||restaurant==4&&location==1)
	{
		return 35000;
	}
	else if (restaurant==2&&location==3||restaurant==3&&location==2)
	{
		return 20000;
	}
	else if (restaurant==2&&location==4||restaurant==4&&location==2)
	{
		return 30000;
	}
	else if (restaurant==3&&location==4||restaurant==4&&location==3)
	{
		return 25000;
	} 
	else
	{
		return price;
	}
	
}


