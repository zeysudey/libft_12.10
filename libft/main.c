/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:54:21 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/12 17:12:39 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(){
    char arr[] ="aa";
    char ar[]="bb";
    
    printf("%zu",ft_strlcat( arr,ar,4));
}