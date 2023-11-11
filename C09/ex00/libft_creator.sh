# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 22:15:23 by youmoukh          #+#    #+#              #
#    Updated: 2023/08/30 10:29:07 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
find . -type f -name "*.c" -exec gcc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
find . -type f -name "*.o" -delete
