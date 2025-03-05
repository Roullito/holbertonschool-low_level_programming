#include "main.h"
/**
 * is_prime_number_i - Fonction pour tester un diviseur
 * @n: variable transmise par is_prime_number
 * @i: variable permettant de verifier si n est entier
 * Return: 0 ou 1
 */
int is_prime_number_i(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);

	if (i * i > n)
		return (1);

	return (is_prime_number_i(n, i + 1));
}

/**
 * is_prime_number - Fonction pour vérifié l'autre en trasmettant n et i
 * @n: variable transmise par main
 * Return: 0 ou 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number_i(n, 2));
}
