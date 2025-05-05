int  main(void)
{
  int  printf;
  int  ft_printf;
  ft_printf("===== Test 1 =====\n");
  ft_printf = ft_printf("ftprif: Le code ASCII de %c est %d\n", 'a', 'a');
  printf = printf("printf: Le code ASCII de %c est %d\n", 'a', 'a');
  if (printf != ft_printf)
    printf("\033[1;31mError.\n len(ft_printf) = %d alors que len(printf) = %d\033[0m\n", ft_printf, printf);
  ft_printf("===== Test 2 =====\n");
  ft_printf("ftprif: %s {%s}, comment tu vas ?\n", "Salut", NULL);
  printf("printf: %s {%s}, comment tu vas ?\n", "Salut", NULL);
  if (printf != ft_printf)
    printf("\033[1;31mError.\n len(ft_printf) = %d alors que len(printf) = %d\033[0m\n", ft_printf, printf);
  ft_printf("===== Test 3 =====\n");
}
