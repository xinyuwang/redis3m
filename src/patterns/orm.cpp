#include <redis3m/patterns/orm.h>

using namespace redis3m::patterns;

script_exec orm::save_script("data/lua/save.lua", true);
script_exec orm::remove_script("data/lua/remove.lua", true);
