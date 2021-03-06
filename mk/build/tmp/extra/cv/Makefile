#! /usr/bin/make -f

################################################################################
# Copyright (C) 2019	Alejandro Colomar Andrés
# SPDX-License-Identifier:	LGPL-2.0-only
################################################################################
# *AUTHOR*
# FULL NAME	"Alejandro Colomar Andrés"
# EMAIL		"1903716@gmail.com"
################################################################################

################################################################################
# dependencies
OBJ		=							\
		alx.o							\
		core.o							\
		features2d.o						\
		highgui.o						\
		imgproc.o						\
		videoio.o						\
		ximgproc.o

ALX_INC	=								\
		$(INC_DIR)/libalx/extra/cv/core.hpp			\
		$(INC_DIR)/libalx/base/compiler/restrict.hpp		\
		$(INC_DIR)/libalx/base/compiler/size.hpp		\
		$(INC_DIR)/libalx/extra/gsl/rstat/median.hpp		\
		$(INC_DIR)/libalx/extra/gsl/statistics/mean.hpp		\
		$(INC_DIR)/libalx/extra/cv/alx.hpp
ALX_SRC	=								\
		$(SRC_DIR)/extra/cv/alx.cpp

CORE_INC	=							\
		$(INC_DIR)/libalx/base/compiler/restrict.hpp		\
		$(INC_DIR)/libalx/base/stdlib/alloc/mallocarrays.hpp	\
		$(INC_DIR)/libalx/base/stdlib/swap.hpp			\
		$(INC_DIR)/libalx/extra/cv/core.hpp
CORE_SRC	=							\
		$(SRC_DIR)/extra/cv/core.cpp

FEATURES2D_INC	=							\
		$(INC_DIR)/libalx/extra/cv/core.hpp			\
		$(INC_DIR)/libalx/extra/cv/features2d.hpp
FEATURES2D_SRC	=							\
		$(SRC_DIR)/extra/cv/features2d.cpp

HIGHGUI_INC	=							\
		$(INC_DIR)/libalx/extra/cv/core.hpp			\
		$(INC_DIR)/libalx/base/compiler/restrict.hpp		\
		$(INC_DIR)/libalx/base/errno/error.hpp			\
		$(INC_DIR)/libalx/extra/cv/highgui.hpp
HIGHGUI_SRC	=							\
		$(SRC_DIR)/extra/cv/highgui.cpp

IMGPROC_INC	=							\
		$(INC_DIR)/libalx/extra/cv/core.hpp			\
		$(INC_DIR)/libalx/base/compiler/restrict.hpp		\
		$(INC_DIR)/libalx/extra/cv/imgproc.hpp
IMGPROC_SRC	=							\
		$(SRC_DIR)/extra/cv/imgproc.cpp

VIDEOIO_INC	=							\
		$(INC_DIR)/libalx/extra/cv/core.hpp			\
		$(INC_DIR)/libalx/base/compiler/restrict.hpp		\
		$(INC_DIR)/libalx/base/stdlib/alloc/mallocarrays.hpp	\
		$(INC_DIR)/libalx/extra/cv/videoio.hpp
VIDEOIO_SRC	=							\
		$(SRC_DIR)/extra/cv/videoio.cpp

XIMGPROC_INC	=							\
		$(INC_DIR)/libalx/extra/cv/core.hpp			\
		$(INC_DIR)/libalx/base/compiler/restrict.hpp		\
		$(INC_DIR)/libalx/extra/cv/ximgproc.hpp
XIMGPROC_SRC	=							\
		$(SRC_DIR)/extra/cv/ximgproc.cpp

################################################################################
# cflags
CXXFLAGS_A	+= `pkg-config --cflags opencv4`
CXXFLAGS_SO	+= `pkg-config --cflags opencv4`

################################################################################
# target: dependencies
#	action

PHONY := all
all: $(subst .a.o,.a.o ,$(join $(OBJ:.o=.a.o),$(OBJ:.o=.so.o)))


%.a.s:
	@echo	"	CXX	build/tmp/extra/cv/$@"
	$(Q)$(CC) $(CXXFLAGS_A) -S $< -o $@
%.so.s:
	@echo	"	CXX	build/tmp/extra/cv/$@"
	$(Q)$(CC) $(CXXFLAGS_SO) -S $< -o $@
%.o: %.s
	@echo	"	AS	build/tmp/extra/cv/$@"
	$(Q)$(AS) $< -o $@


alx.a.s: $(ALX_SRC) $(ALX_INC)
alx.so.s: $(ALX_SRC) $(ALX_INC)

core.a.s: $(CORE_SRC) $(CORE_INC)
core.so.s: $(CORE_SRC) $(CORE_INC)

features2d.a.s: $(FEATURES2D_SRC) $(FEATURES2D_INC)
features2d.so.s: $(FEATURES2D_SRC) $(FEATURES2D_INC)

highgui.a.s: $(HIGHGUI_SRC) $(HIGHGUI_INC)
highgui.so.s: $(HIGHGUI_SRC) $(HIGHGUI_INC)

imgproc.a.s: $(IMGPROC_SRC) $(IMGPROC_INC)
imgproc.so.s: $(IMGPROC_SRC) $(IMGPROC_INC)

videoio.a.s: $(VIDEOIO_SRC) $(VIDEOIO_INC)
videoio.so.s: $(VIDEOIO_SRC) $(VIDEOIO_INC)

ximgproc.a.s: $(XIMGPROC_SRC) $(XIMGPROC_INC)
ximgproc.so.s: $(XIMGPROC_SRC) $(XIMGPROC_INC)


PHONY += clean
clean:
	$(Q)rm -f *.o *.s

################################################################################
# Declare the contents of the .PHONY variable as phony.
.PHONY: $(PHONY)




################################################################################
######## End of file ###########################################################
################################################################################
