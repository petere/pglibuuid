PostgreSQL wrapper for libuuid
==============================

This PostgreSQL extension module provides functions to create UUIDs,
using the C library libuuid as its backing implementation.

Examples:

    SELECT uuid_generate();
    SELECT uuid_generate_random();
    SELECT uuid_generate_time();

See [uuid_generate(3)](http://linux.die.net/man/3/uuid_generate) for
details on these functions.
