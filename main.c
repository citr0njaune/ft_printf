/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:46:37 by chphan            #+#    #+#             */
/*   Updated: 2024/12/10 14:46:38 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//printf("%d]\n", ft_printf(" %p\n %p\n ", 0, 0));
	//printf("%d]\n", ft_printf(" NULL %s NULL \n", NULL));
	//printf("%d)\n",ft_printf("%p\n", 2147483648));
	printf("%d)\n",ft_printf("%p\n", 4294967295));
	//printf("%d)\n",ft_printf("%x\n", at4oi(v[1])));
	//printf("%d)",printf("%x\n", atoi(v[1])));
	return (0);
}
