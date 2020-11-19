/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:44:48 by cmarty            #+#    #+#             */
/*   Updated: 2020/11/19 18:17:50 by cmarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i])
            count++;
        while (s[i] != c && s[i])
            i++;
    }
    return (count);
}

static int		len_str_split(char *s, char c)
{
    size_t	count;

    count = 0;
    while (s[count] != c && s[count])
        count++;
    return (count);
}

static void		**ft_free(char **str)
{
    char **tmp;

    tmp = str;
    while (*str)
    {
        free(*str);
        str++;
    }
    free(tmp);
    return (NULL);
}

static char 		**engine(char *ss, int n_words, char c, char **str)
{
    int	run_arr;
    int run_word;
    int len_splited;

    run_arr = -1;
    while (++run_arr < n_words)
    {
        while (*ss == c)
            ss++;
        len_splited = len_str_split(ss, c);
        if (!(str[run_arr] = (char *)malloc(sizeof(*ss) * (len_splited + 1))))
            return (char **)(ft_free(str));
        run_word = 0;
        while (run_word < len_splited)
            str[run_arr][run_word++] = *ss++;
        str[run_arr][run_word] = '\0';
    }
    str[run_arr] = NULL;
    return (str);
}

char			**ft_split(char const *s, char c)
{
    char	**str;
    char	*ss;
    int		n_words;

    if (!s || !(str = (char **)malloc(sizeof(s)
                                      * (count_words(s, c) + 1))))
        return (NULL);
    n_words = count_words(s, c);
    ss = (char *)s;
    str = (char **)engine(ss, n_words, c, str);
    return (str);
}
