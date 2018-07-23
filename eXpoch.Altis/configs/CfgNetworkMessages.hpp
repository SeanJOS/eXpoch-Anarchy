class createPlayerResponse
{
	module = "object_player";
	parameters[] = {"OBJECT","STRING","STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","ARRAY","SCALAR","ARRAY"};
};
class loadPlayerResponse
{
	module = "object_player";
	parameters[] = {"STRING","STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","ARRAY","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","ARRAY","ARRAY"};
};
class updateStatsRequest
{
	module = "object_player";
	parameters[] = {"STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","ARRAY","ARRAY","SCALAR","SCALAR"};
};
class createPlayerRequest
{
	module = "object_player";
	parameters[] = {"ARRAY"};
};
class swapConstructionRequest
{
	module = "object_construction";
	parameters[] = {"STRING","STRING","ARRAY","ARRAY"};
};
class moderationClanRequest
{
	module = "system_clan";
	parameters[] = {"STRING"};
};
class updateClanInfoFull
{
	module = "system_clan";
	parameters[] = {"STRING","STRING","ARRAY","ARRAY","ARRAY","GROUP","ARRAY"};
};