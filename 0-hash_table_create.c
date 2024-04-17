#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdiuo.h>

typedef struct hash_node_s
{
  char *key:
  char *value;
  stract hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
   unsigned long int size;
   hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int table_size);
usingned long int hash_djbs2(const unsigned char *str);
unsnged long int key_index(const usigned char *key, unsigned long int table_size);
int hash_table_set(hash_table_t *hash_table, const char *key, const char *value);

char *hash_table_get(const hash_table_t *hash_table, const char *key);
void hash_table_print(const hash_table_t *hash_table);
void hash_table_delete(hash_table_t *hash_table);

typedef struct shash_node_s
{ 
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node-s *prev;
	struct shash_node_s *next_sorted;
	struct shash_node_s *prev_sorted;
} shash_node_t;


typedef struct shash_table_s
{ 
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *head_sorted;
	shash_node_t *tail_sorted;
} shash_table_t;

shash_table_t *shash_table_creat(unsigned long int table_size);
int shash_tabe_set(shash_table_t *sorted_hash_table, const char *key, const char *value);
void shash_table_print(const shash_table_t *sorted_hash_table);
char *shash_table_get(const shash _table_t *sorted_hash_table, const char *key);
void shash_table_print_rev(const shash_table_t *sorte_hash_table);
void shash_table_delete(shash_table_t *sorted_hash_table);

#endif 
