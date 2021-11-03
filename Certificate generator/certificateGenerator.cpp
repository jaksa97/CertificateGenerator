#include<iostream>
#include<fstream>
#include<sstream>

typedef unsigned short ushort;
using namespace std;

int main()
{
	ifstream in("listOfStudents.txt");
	string firstName;
	string gender;
	string lastName;
	ushort grade, subgrade;
	int i = 0;

	while (1)
	{
		i++;

		int c = in.peek();

		if (c == EOF)
		{
			break;
		}

		in >> firstName >> lastName;
		in >> gender >> grade >> subgrade;

		ofstream out("../Certificates/" + to_string(grade) + "-" + to_string(subgrade) + firstName + " " + lastName + ".html");

		out << u8"<html>";
		out << endl;
		out << endl;

		out << u8"<head>";
		out << u8"	<meta charset=\"UTF-8\">";
		out << u8"	<link rel=\"stylesheet\" type=\"text/css\" href=\"../HTMLDesign/Styles/style.css\">";
		out << u8"</head>";
		out << endl;
		out << endl;

		out << u8"<body>";

		out << u8"	<div class=\"graph-image graph-7\">";
		out << u8"		<img src=\"../HTMLDesign/Pictures/frame.png\" alt=\"Graph Description\">";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"gsmlogo\">";
		out << u8"		<img src=\"../HTMLDesign/Pictures/GSMLogo.png\">";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"logo\">";
		out << u8"		<center> <img src=\"../HTMLDesign/Pictures/NNBLogo.png\"> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"maja\">";
		out << u8"		<center> <img src=\"../HTMLDesign/Pictures/MajaSignature.png\"> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"maki\">";
		out << u8"		<center> <img src=\"../HTMLDesign/Pictures/MarijanSignature.png\"> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"zaglavlje\">";
		out << u8"		<center> <h2> Гимназија „Светозар Марковић“ <br> додељује </h2> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"zahvalnica\">";
		out << u8"		 <center> <h3> ЗАХВАЛНИЦУ </h3> </center> ";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"ucenik\">";
		out << u8"		<center> <h1>" << firstName << " " << lastName << "</h1> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"skola\">";
		out << u8"		<center> <p>";

		if (gender == u8"m")
			out << u8"ученику ";
		else if (gender == u8"z")
			out << u8"ученици ";

		switch (grade)
		{
		case 1:
			out << u8"првог ";
			break;
		case 2:
			out << u8"другог ";
			break;
		case 3:
			out << u8"трећег ";
			break;
		case 4:
			out << u8"четвртог ";
			break;
		case 5:
			out << u8"петог ";
			break;
		case 6:
			out << u8"шестог ";
			break;
		case 7:
			out << u8"седмог ";
			break;
		case 8:
			out << u8"осмог ";
			break;
		default:
			break;
		}

		out << u8"разреда </p> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"text\">";
		out << u8"		<center> <h2> за учешће на фестивалу „Наук није баук 9“ <br> март - aприл 2017. године </h2> </center>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"line1\">";
		out << u8"		<h5> <br> ___________________ </h5>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"majadj\">";
		out << u8"		<h4> Маја Ђорђевић </h4>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"koordinator\">";
		out << u8"		<h4>  координатор </h4>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"line2\">";
		out << u8"		<h5> <br> ___________________ </h5>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"makim\">";
		out << u8"		<h4> др Маријан Мишић </h4>";
		out << u8"	</div>";
		out << endl;

		out << u8"	<div class=\"direktor\">";
		out << u8"		<h4> директор </h4>";
		out << u8"	</div>";
		out << endl;

		out << u8"</body>";
		out << endl;

		out << u8"</html>";

		out.close();
	}

	in.close();

	return 0;
}