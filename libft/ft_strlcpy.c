/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:59:07 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/08 12:58:31 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    
    size_t i;
    i=0;
    if( dstsize > 0){
        
        
        while((i< dstsize-1) && src[i]!='\0' )
        {
            dst[i] = src[i];
            i++;
        }
        dst[i]='\0';
         
    }
    return ft_strlen(src);
}

