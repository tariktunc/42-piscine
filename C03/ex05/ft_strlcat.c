/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:26:58 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/12 01:30:51 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    j = 0;
    k = 0;
    while (dest[i] != '\0') // dest dizisinin i değerindeki indeksi boşluğa eşit değilse bu koşula giriyoruz.
        i++;
    while (src[j] != '\0') // src dizisinin j değerindeki indeksi boşluğa eşit değilse bu koşula giriyoruz.
        j++;
    if (size <= i) // size değeri i değerinden küçükse bu koşula giriyoruz.
        j += size;
    else // size değeri i değerinden büyükse bu koşula giriyoruz.
        j += i;
    while (src[k] != '\0' && i + 1 < size) // src dizisinin k değerindeki indeksi boşluğa eşit değilse ve i değerine 1 eklenmiş hali size değerinden küçükse bu koşula giriyoruz.
    {
        dest[i] = src[k]; // dest dizisinin i değerindeki indeksine src dizisinin k değerindeki indeksini atıyoruz.
        i++; 
        k++;
    }
    dest[i] = '\0'; // dest dizisinin i değerindeki indeksine boşluk atıyoruz.
    return (j); // j değerini döndürüp ekrana yazdırıyoruz.
}

int main()
{
    char dest[] = "Hello";
    char src[] = "World";
    unsigned int size = 10;
    printf("%d", ft_strlcat(dest, src, size)); 
}

// Bu fonksiyon, dest dizisine src dizisini ekler. Eğer dest dizisi size değerinden küçükse, dest dizisinin sonuna src dizisini ekler. Eğer dest dizisi size değerinden büyükse, dest dizisinin sonuna src dizisini ekler ve size değerini döndürür.

// ft_strlcat işlevi, bir karakter dizisine başka bir karakter dizisinin belirli bir uzunluktaki bir kısmını güvenli bir şekilde eklemek için kullanılır. Bu işlev, karakter dizilerini birleştirirken bellek taşmalarını önlemek için tasarlanmıştır. Hedef karakter dizisinin boyutunu kontrol eder ve taşma riski olduğunda bir uyarı işaret eder. Bu işlev, strncat işlevinin daha güvenli bir alternatifidir ve modern C kütüphanelerinde genellikle bulunur.