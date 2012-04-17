
/* File: properties.cc
 * Name: R4T5
 * Date: 15 Apr 12
 * Rev: v0.1
 */

/* Constructor & Destructor */
Properties :: Properties()
{
	Entry t1;
	const int t1.owner = 0;	// 0 is banker

	t1.name = "Go";
	list.insert(t1);
}

Properties :: ~Properties()
{

}

/* Accessor */
Entry Properties :: getInfo(Position p);
{

}

/* Mutator */
void Properties :: changeOwner(Player p1, Position p)
{
	Entry t1 = list.get(p);
	t1.owner = p1;
	list.replace(t1,p);
}
