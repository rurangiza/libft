# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 13:53:56 by arurangi          #+#    #+#              #
#    Updated: 2022/12/15 10:56:58 by Arsene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROGRAM
NAME	=	libft.a

# SOURCE FILES
SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_strchr.c ft_strdup.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_tolower.c ft_toupper.c \
			ft_substr.c ft_split.c ft_strjoin.c ft_strtrim.c \
			ft_putchar.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c \
			ft_split_fd.c ft_putstr.c \
			ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
			success_msg.c error_msg.c info_msg.c \
			get_next_line.c get_next_line_utils.c \
			
#SRCSB				

# VARIABLES
FLAGS		=	-Wall -Wextra -Werror 
COMPILER	=	gcc ${FLAGS}
RM			=	rm -f

OBJS	=	${SRCS:.c=.o}
OBJSB	=	${SRCSB:.c=.o}
${NAME}:	${OBJS}
				@${COMPILER} -c ${SRCS}
				@ar rcs ${NAME} ${OBJS}

%.o: 		%.c
				@$(COMPILER) $(C_FLAGS) -Imlx -c $< -o $@

# RULES
all:		${NAME}

bonus:		${OBJS} ${OBJSB}
				@ar rcs ${NAME} ${OBJS} ${OBJSB}

clean:
				@${RM} ${OBJS} $(OBJSB)

fclean:		clean
				@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
