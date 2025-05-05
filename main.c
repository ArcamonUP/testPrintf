/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <kbaridon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:48:07 by kbaridon          #+#    #+#             */
/*   Updated: 2025/05/05 10:56:46 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

//cc -Wall -Wextra -Werror ft_printf.c

int	main(void)
{
	int		l_true;
	int		l_false;
	char	*str;
	char	*str2;

	str = malloc(1);
	if (!str)
		return (printf("Memory allocation failed\n"), 1);
	str2 = NULL;
	ft_printf("===== Test 1 =====\n");
	l_false = ft_printf("ftprif: Le code ASCII de %c est %d\n", 'a', 'a');
	l_true = printf("printf: Le code ASCII de %c est %d\n", 'a', 'a');
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 2 =====\n");
	l_false = ft_printf("ftprif: %s {%s}, comment tu vas ?\n", "Salut", str2);
	l_true = printf("printf: %s {%s}, comment tu vas ?\n", "Salut", str2);
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 3 =====\n");
	l_false = ft_printf("ftprif: %p {%p}\n", str, str2);
	l_true = printf("printf: %p {%p}\n", str, str2);
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 4 =====\n");
	l_false = ft_printf("ftprif: %d %d %d %d %d\n", 42, -42, 0, 2147483647, -2147483647);
	l_true = printf("printf: %d %d %d %d %d\n", 42, -42, 0, 2147483647, -2147483647);
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 5 =====\n");
	l_false = ft_printf("ftprif: %u %u %u %u %u\n", 42, -42, 0, 2147483647, -2147483647);
	l_true = printf("printf: %u %u %u %u %u\n", 42, -42, 0, 2147483647, -2147483647);
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 6 =====\n");
	l_false = ft_printf("ftprif: %x %x %x %x %x\n", 42, -42, 0, 2147483647, -2147483647);
	l_true = printf("printf: %x %x %x %x %x\n", 42, -42, 0, 2147483647, -2147483647);
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 7 =====\n");
	l_false = ft_printf("ftprif: %X %X %X %X %X\n", 42, -42, 0, 2147483647, -2147483647);
	l_true = printf("printf: %X %X %X %X %X\n", 42, -42, 0, 2147483647, -2147483647);
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	ft_printf("===== Test 8 =====\n");
	l_false = ft_printf("ftprif: 90%% du test est passe.\n");
	l_true = printf("printf: 90%% du test est passe.\n");
	if (l_false != l_true)
		printf("\033[1;31mError.\n len(ft_printf) = %d \
			 alors que len(printf) = %d\033[0m\n", l_false, l_true);
	return (free(str), 0);
}
