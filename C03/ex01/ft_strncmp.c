/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:57:12 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/12 00:23:39 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) // s1 ve s2 adında iki string ve n adında bir integer alır
{
    unsigned int i; // i adında bir değişken tanımla

    i = 0;
    while (i < n && (s1[i] || s2[i])) // n kadar kontrol yap
    {
        if (s1[i] != s2[i]) // eğer s1 ve s2 nin i. indexleri eşit değilse
        {
            return (s1[i] - s2[i]); // s1 nin i. indexi ile s2 nin i. indexini çıkar ve sonucu döndür
        }
        i++; // i yi arttır
    }
    return (0); // eğer hiçbir şey dönmediyse 0 döndür
}

int main()
{
    printf("1 => %d\n", ft_strncmp("Hellb", "Hilla", 5)); // 101 - 105 = -4
    printf("2 => %d\n", ft_strncmp("Hillb", "Hella", 5)); // 105 - 101 = 4
    printf("3 => %d\n", ft_strncmp("aec", "abc", 2)); // 101 - 98 = 3
    printf("4 => %d\n", ft_strncmp("", "abc", 2)); // 0 - 97 = -97 
}
// "" boş girildi ise \0 olarak kabul edilir. Ascii de 0 olduğu için 0 - 97 = -97 döner.

// Burada n, karşılaştırma yapılacak maksimum karakter sayısını belirtir. Bu yüzden 5 sayısı, karşılaştırmanın ilk 5 karakterle sınırlı olduğunu belirtir. Eğer diziler 5 karakterden daha kısa ise, dizinin tamamı karşılaştırılır.
