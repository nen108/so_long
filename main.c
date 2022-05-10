#include	"mlx/mlx.h"
#include	"mlx/mlx_int.h"
#include "libft/ft_printf.h"


# define KEY_ESC 65307


void	map_read(char *filename)
{   
	   char str[14];
    int fd = open(filename, O_RDWR);
    read(fd, str, 14);
    str[13] = 0;
    printf("%d : %s\n", fd, str);
	  read(fd, str, 14);
    str[13] = 0;
    printf("%d : %s\n", fd, str);
    close(fd);
	// while(tmp>0)
	// {
	// 	str[5] = 0;
   	// 	 printf("%d : %s\n%d", fd, str,tmp);
    // 	tmp =read(fd, str, 1);
	// }

	// int  fd;
	// int tmp;
	// char line;
	// fd = open(filename, O_WRONLY);
	// if (fd <= 0)
	// 	printf("File open fail.\n");
	// tmp= read(fd, &line, 1);
	// while(tmp>0)
	// {
	// 	ft_putchar_fd(line, 1);
	// 	printf("%d\n", tmp);
	// }

	// close(fd);
}

int	key_hook(int keycode)
{
	if (keycode == KEY_ESC)
		exit(0);
	if (keycode == 100)
	{
		map_read("maps/basic.ber");
		printf("Hello from key_hook! %d\n",keycode);
	}
	return (0);
}

int	close_win()
{
	 exit(0);
}



int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "So_long MLX");
	mlx_key_hook(mlx_win, key_hook, NULL);

	mlx_hook(mlx_win, 17,0, close_win, 0);
	mlx_loop(mlx);
}


// int	main(void)
// {
// 	void	*mlx;
// 	void	*mlx_win;
// 	void *img;
// 	void *img2;
// 	void *img3;
// 	void *img4;

// 	void *img6;
// 	void *img7;
// 	int		img_width=20;
// 	int		img_height=20;



// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, 500, 500, "So_long MLX");
// 	img = mlx_xpm_file_to_image(mlx, "images/land.xpm", &img_width, &img_height);
// 	img2 = mlx_xpm_file_to_image(mlx, "images/wall.xpm", &img_width, &img_height);
// 	img3 = mlx_xpm_file_to_image(mlx, "images/chara.xpm", &img_width, &img_height);
// 	img4 = mlx_xpm_file_to_image(mlx, "images/chest.xpm", &img_width, &img_height);

// 	img6 = mlx_xpm_file_to_image(mlx, "images/rune.xpm", &img_width, &img_height);
// 	img7 = mlx_xpm_file_to_image(mlx, "images/rune2.xpm", &img_width, &img_height);
// 	mlx_put_image_to_window(mlx, mlx_win, img, 0, 0);
// 	mlx_put_image_to_window(mlx, mlx_win, img2, 64, 0);
// 	mlx_put_image_to_window(mlx, mlx_win, img3, 128, 0);
// 	mlx_put_image_to_window(mlx, mlx_win, img4, 192, 64);
// 	mlx_put_image_to_window(mlx, mlx_win, img6, 64, 64);
// 	mlx_put_image_to_window(mlx, mlx_win, img7, 128, 64);
// 	mlx_loop(mlx);
// }