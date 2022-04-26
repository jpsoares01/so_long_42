/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-s < jpedro-s@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:32:05 by jpedro-s          #+#    #+#             */
/*   Updated: 2022/04/26 22:46:50 by jpedro-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_mapa
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*floor;
	void	*wall;
	int		width;
	char	mapa[width];
	int		eixo_x;
	int		eixo_y;
	int		index;
}	t_mapa;

int main(void)
{

}
