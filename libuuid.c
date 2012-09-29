#include <postgres.h>
#include <fmgr.h>
#include <utils/uuid.h>

#include <uuid/uuid.h>

PG_MODULE_MAGIC;


Datum pg_uuid_generate(PG_FUNCTION_ARGS);
Datum pg_uuid_generate_random(PG_FUNCTION_ARGS);
Datum pg_uuid_generate_time(PG_FUNCTION_ARGS);

PG_FUNCTION_INFO_V1(pg_uuid_generate);
PG_FUNCTION_INFO_V1(pg_uuid_generate_random);
PG_FUNCTION_INFO_V1(pg_uuid_generate_time);


static Datum
pg_uuid_generate_generic(PG_FUNCTION_ARGS, void (*func)(uuid_t))
{
	uuid_t out;
	char *pgout;

	func(out);
	pgout = palloc(16);
	memcpy(pgout, out, 16);

	PG_RETURN_UUID_P(pgout);
}


Datum
pg_uuid_generate(PG_FUNCTION_ARGS)
{
	return pg_uuid_generate_generic(fcinfo, uuid_generate);
}

Datum
pg_uuid_generate_random(PG_FUNCTION_ARGS)
{
	return pg_uuid_generate_generic(fcinfo, uuid_generate_random);
}

Datum
pg_uuid_generate_time(PG_FUNCTION_ARGS)
{
	return pg_uuid_generate_generic(fcinfo, uuid_generate_time);
}
