SUBDIRS = src
DISTCLEAN = buildsys.mk config.log config.status

include buildsys.mk


buildsys.mk:
	@echo "You need to run ./configure first."
	@exit 1
