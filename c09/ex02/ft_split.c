/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:11:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 14:14:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char *charset, char c)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int	get_words_count(char *str, char *charset)
{
	int	i;
	int	words_count;

	i = 0;
	words_count = 0;
	while (str[i])
	{
		if (is_in_charset(charset, str[i]))
			++i;
		else
		{
			++words_count;
			while (str[i] && !is_in_charset(charset, str[i]))
				++i;
		}
	}
	return (words_count);
}

int	word_len(char *str, int i, char *charset)
{
	while (str[i] && !is_in_charset(charset, str[i]))
		++i;
	return (i + 1);
}

int	split_str(char **str_arr, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = -1;
	while (str[i])
	{
		if (is_in_charset(charset, str[i]))
			++i;
		else
		{
			str_arr[++j] = malloc(sizeof(char) * word_len(str, i, charset));
			if (!str_arr[j])
				return (0);
			k = -1;
			while (str[i] && !is_in_charset(charset, str[i]))
			{
				str_arr[j][++k] = str[i];
				++i;
			}
			str_arr[j][k + 1] = '\0';
		}
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		words_count;
	char	**str_arr;

	words_count = get_words_count(str, charset);
	str_arr = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!str_arr)
		return (NULL);
	str_arr[words_count] = NULL;
	if (!split_str(str_arr, str, charset))
		return (NULL);
	return (str_arr);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	char **matrix = ft_split(argv[1], "0123456789 ");

	int i = -1;
	while (matrix[++i])
		printf("%s\n", matrix[i]);
}
*/