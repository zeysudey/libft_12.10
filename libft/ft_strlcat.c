/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:08:38 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/12 14:06:50 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t d;
    size_t s;
    size_t n;
    int i;

    i=0;
    d=ft_strlen(dst);
    s= ft_strlen(src);
    n=dstsize;
    
    if(n <= d){
        return(n+s);// buffer yetersiz olduğundan
    }
    while (src[i] != '\0' && d+i+1<n)
    {
        dst[i+d]=src[i];
        i++;
    }
    dst[i+d] = '\0';
    return(d+s);
}