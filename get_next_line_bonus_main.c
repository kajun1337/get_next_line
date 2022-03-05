/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:43:55 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/05 11:43:55 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line_bonus.h"

char	*get_next_line(int fd); 


//------------BONUS 1------------------- (2 dosyadan veri çeker ve 3. bir dosyaya çektğiği veriyi aktarır)

int main(void)  
{
	char *yer;
	int fd = open("bonus1test1" ,O_RDONLY);
	int fd2 = open("bonus1test2" ,O_RDONLY);
	int fd3 = open("bonus1test3",O_RDWR);
	yer = get_next_line(fd);
	write(fd3,yer,ft_strlen(yer));
	yer = get_next_line(fd2);
	write(fd3,yer,ft_strlen(yer));
	yer = get_next_line(fd);
	write(fd3,yer,ft_strlen(yer));
	yer = get_next_line(fd2);
	write(fd3,yer,ft_strlen(yer));
	return 0;
}

// -------------BONUS 2-----------  (2 dosyadan veri çeker ve sırayla bir ondan bir ondan yazdırır)
/* 
int main(void)
{
	char *yer;
	int fd = open("bonus2testfile1" ,O_RDWR);
    int fd2 = open("bonus2testfile2" ,O_RDWR);
	yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd2);
	printf("%s" ,yer);
    yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd2);
	printf("%s" ,yer);
    yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd2);
	printf("%s" ,yer);
    yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd2);
	printf("%s" ,yer);
    yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd2);
	printf("%s" ,yer);
	return 0;
} */