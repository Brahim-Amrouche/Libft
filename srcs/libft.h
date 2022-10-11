/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:15:10 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/11 15:17:29 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#   include <stdio.h>
#   include <unistd.h>
#   include <string.h>
#   include <stdlib.h>

/* row 1*/
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *b,int c, size_t len);
void ft_bzero(void *s,size_t n);
void *ft_memcpy(void *restrict dst , const void *restrict src, size_t n);
void *ft_memmove(void *dst,const void *src,size_t len);
size_t ft_strlcpy(char *restrict dst , const char * restrict src , size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

/* row 2*/
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s,int c);
char *ft_strrchr(const char*s,int c);
int ft_strncmp(const char *s1, const char *s2,size_t n);
void *ft_memchr(const void *s , int c, size_t n);
int ft_memcmp(const void *s1,const void *s2, size_t n);
char *ft_strstr(const char *haystack,const char *needle);
int ft_atoi(const char *str);

/* advanced functions */


/* Bonus functions */

#endif