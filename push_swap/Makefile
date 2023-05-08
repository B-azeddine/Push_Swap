
INC = push_swap.h
INC_BONUS = push_swap_bonus.h
NAME = push_swap
NAME_BONUS = checker

SRCS = push_swap.c libft/ft_atoi.c libft/ft_isdigit.c libft/ft_strdup.c libft/ft_puts.c libft/ft_split.c libft/ft_strjoin.c \
		instructions/ra.c instructions/rb.c instructions/rr.c instructions/rra.c instructions/rrb.c instructions/rrr.c instructions/sa.c instructions/sb.c instructions/pa.c instructions/pb.c instructions/ss.c \
		sorts/sorts.c sorts/sort_helper.c stack_manipulation.c rank_stack.c range.c 

SRCS_BONUS = ./bonus/checker.c ./bonus/checker_utils.c ./bonus/checker_utils2.c ./bonus/get_next_line/get_next_line.c ./bonus/get_next_line/get_next_line_utils.c \
		 		./bonus/libft_bonus/ft_atoi_bonus.c ./bonus/libft_bonus/ft_isdigit_bonus.c ./bonus/libft_bonus/ft_strdup_bonus.c ./bonus/libft_bonus/ft_puts_bonus.c ./bonus/libft_bonus/ft_split_bonus.c ./bonus/libft_bonus/ft_strjoin_bonus.c ./bonus/libft_bonus/ft_strequal_bonus.c ./bonus/libft_bonus/ft_strcmp_bonus.c \
				./bonus/instructions_bonus/ra.c ./bonus/instructions_bonus/rb.c ./bonus/instructions_bonus/rr.c ./bonus/instructions_bonus/rra.c ./bonus/instructions_bonus/rrb.c ./bonus/instructions_bonus/rrr.c ./bonus/instructions_bonus/sa.c ./bonus/instructions_bonus/sb.c ./bonus/instructions_bonus/pa.c ./bonus/instructions_bonus/pb.c ./bonus/instructions_bonus/ss.c \


OBJECTS = ${SRCS:.c=.o}

OBJECTS_BONUS = ${SRCS_BONUS:.c=.o}

CFLAGS = -Wall -Wextra -Werror
CC = cc

all :  ${NAME}

bonus : ${NAME_BONUS}

${NAME} : ${OBJECTS} $(INC) 
	${CC} $(CFLAGS) ${OBJECTS}  -o ${NAME}

${NAME_BONUS} : ${OBJECTS_BONUS}  
	${CC} $(CFLAGS) ${OBJECTS_BONUS}  -o ${NAME_BONUS}

clean :
	rm  -rf ${OBJECTS} ${OBJECTS_BONUS}
fclean : clean
	rm -rf ${NAME} ${NAME_BONUS}

re : fclean all

.PHONY : all bonus clean fclean re