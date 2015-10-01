# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/17 13:58:47 by esusseli          #+#    #+#              #
#    Updated: 2015/10/01 16:03:41 by esusseli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CXX = clang
CXXFLAGS = -Wall -Wextra -Werror
LDFLAGS = -rdynamic
LDLIBS = -lft -lmlx -framework OpenGL -framework AppKit
LIBDIRS = $(SUBDIRS) 
SUBDIRS = libft minilibx
SRCS = main.c
INCS = fractol.h mlx.h
SRCDIR = src
INCDIR = include minilibx
OBJDIR = obj
VPATH := $(INCDIR) $(addsuffix /$(INCDIR),$(SUBDIRS))
OBJS := $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))
CPPFLAGS := $(addprefix -I,$(VPATH))
LDFLAGS := $(addprefix -L,$(LIBDIRS))

all: $(SUBDIRS) $(NAME)

$(SUBDIRS):
	@$(MAKE) -C $@

$(NAME): $(OBJS)
	make -C minilibx/
	$(CXX) $(LDFLAGS) $(OUTPUT_OPTION) $^ $(LDLIBS)

$(OBJS): Makefile | $(OBJDIR)

$(OBJDIR):
	mkdir -p $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCS)
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) $(OUTPUT_OPTION) $<

clean:
	$(RM) -R $(OBJDIR)

fclean: clean
	$(RM) -R $(NAME)

re: fclean all

.PHONY: clean $(SUBDIRS)
