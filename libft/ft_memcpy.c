/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:20:30 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/12 17:29:28 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n){
    int i;

    i = 0;
    if(dst == NULL && src == NULL)
        return 0;
    while(i<n){
        *((unsigned char *)dst) = *((unsigned char *)src);
        i++;
    }
    return dst;
}