# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/17 13:58:47 by esusseli          #+#    #+#              #
#    Updated: 2015/10/22 14:25:54 by esusseli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CXX = clang
CXXFLAGS = -Wall -Wextra -Werror -g3
LDFLAGS = -rdynamic

ifeq ($(shell uname),Darwin)
	LDLIBS = -lft -lmlx -framework OpenGL -framework AppKit -lm
else
	LDLIBS = -lft -lmlx -lXext -lX11 -lm -lbsd
endif

LIBDIRS = $(SUBDIRS) 
SUBDIRS = libft
SRCS = main.c hook.c ft_image_color.c ft_image_create.c ft_image_destroy.c \
	ft_image_pixel_put.c ft_bswap_32.c
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
