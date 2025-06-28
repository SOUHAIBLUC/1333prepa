/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:01:27 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 14:01:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c)
{
write(1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
    char    i;

    i = 'z';
    while (i >= 'a')
    {
        ft_putchar(i);
        i--;
    }
}