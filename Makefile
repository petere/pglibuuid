PG_CONFIG ?= pg_config

MODULE_big = libuuid
OBJS = libuuid.o
SHLIB_LINK += -luuid

EXTENSION = libuuid
DATA = libuuid--1.0.sql

REGRESS = test

PGXS = $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
