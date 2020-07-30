//header

int	ft_list_size(t_list	*begin_list)
{
	t_list	*tmp;
	int	count;

	count = 0;
	while (begin_list->next != NULL)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

