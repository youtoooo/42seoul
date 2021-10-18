/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:42:24 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/15 00:51:35 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	int num = 42;
	int *ptr = &num;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	*********nbr = &ptr8;
}
