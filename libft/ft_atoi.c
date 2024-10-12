/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:31:18 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/12 15:07:33 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str){
    int result;
    int sign;

    result = 0;
    sign = 1;
    while(*str ==32 || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    while(*str == '+' || *str == '-'){
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while(*str >= '0' && *str <= '9'){
        result = result * 10 + *str - 48;
		str++;
    }
    return(sign * result);
}