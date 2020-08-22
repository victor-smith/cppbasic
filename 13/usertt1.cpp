#include <cpph.h>
#include "tabtenn1.h"

int main()
{
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

	rplayer1.Name();
	if(rplayer1.HasTable())
		cout<<": has a table\n";
	else
		cout<<": does not habe a table\n";

	player1.Name();
	if(player1.HasTable())
		cout<<": has a table\n";
	else
		cout<<": does not habe a table\n";

	rplayer1.Name();
	cout<<": Rating:"<<rplayer1.Rating()<<endl;

	RatedPlayer rplayer2(1212, player1);
	rplayer2.Name();
	cout<<": Rating:"<<rplayer2.Rating()<<endl;

	return 0;
}
