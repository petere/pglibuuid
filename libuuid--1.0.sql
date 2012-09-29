CREATE FUNCTION uuid_generate() RETURNS uuid VOLATILE STRICT LANGUAGE C AS 'MODULE_PATHNAME', 'pg_uuid_generate';
CREATE FUNCTION uuid_generate_random() RETURNS uuid VOLATILE STRICT LANGUAGE C AS 'MODULE_PATHNAME', 'pg_uuid_generate_random';
CREATE FUNCTION uuid_generate_time() RETURNS uuid VOLATILE STRICT LANGUAGE C AS 'MODULE_PATHNAME', 'pg_uuid_generate_time';
