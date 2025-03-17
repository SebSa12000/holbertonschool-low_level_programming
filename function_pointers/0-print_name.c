/**
 * print_name - Affiche en appelant une fonction 
 * @name: Chaine a afficher
 * @f: pointeur sur fonction 
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
