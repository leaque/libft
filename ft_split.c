//1- Kelime sayısı için 1 fonksiyon / Done.
//2- String için malloc / Done
//3- Kelime uzunluğu için 1 fonksiyon / Done
//4- Kelimeler için 1 malloc. / Done
//5- Kelimeleri kopyala yapıştır. / Done
//6- Manual inputla kontrol et. 
//7- Freele? /Çokoya yaz 


//We just keep marching further, we know it will all get better!

#include <stdlib.h>
#include <stdio.h>

void    ft_free_local_2m(char **data)
{
    int    i;

    if (!data)
        return ;
    i = -1;
    while (data[++i])
        free(data[i]);
    free(data);
}

int word_counter(char *string_for_counter, char delimiter_for_counter)
{
    int count;
    int is_word;
    int i;

    i = 0;
    is_word = 0;
    count = 0;

    while(string_for_counter[i] != '\0')
    {
        if ((string_for_counter[i] != delimiter_for_counter) && is_word == 0) //Cümleye girince countu 1 kere arttırıyoruz, is_word 1'de kalıyor.
        {
            count++;
            is_word = 1;
        }
        else if ((string_for_counter[i] == delimiter_for_counter) && is_word == 1) //Cümleden çıkarken is_word 1'de kalmaya devam ediyor, delimitera denk gelindiğinde is_word reset.
            is_word = 0;
        i++;
    }

    return (count);
}

char *split_words(char *string_for_splitter, int start_for_splitter, int end_for_splitter)
{
    int word_length;
    int i;
    int j;
    char *mallocd_char_for_splitter;
    
    i = start_for_splitter;
    j = 0;

    word_length = end_for_splitter - start_for_splitter;
    mallocd_char_for_splitter = malloc((word_length + 1) * sizeof(char));
    while(i < end_for_splitter)
    {
        mallocd_char_for_splitter[j] = string_for_splitter[i];
        j++;
        i++;
    }
    mallocd_char_for_splitter[j] = '\0'; //İstenen yeri kapatıyoruz. '\0' idi, NULL'a çevirdim.

    return (mallocd_char_for_splitter);
}

char **ft_split(char *string, char delimiter)
{
    int i = 0;
    int j = 0;
    int start = 0;
    int end = 0;
    int word_count;
    char **mallocd_string;

    word_count = word_counter(string, delimiter);
    mallocd_string = malloc((word_count + 1) * sizeof(char*));
    if (!mallocd_string)
        return NULL;

    while (string[i] != '\0')
    {
        if (string[i] != delimiter)
        {
            start = i;
            while (string[i] != '\0' && string[i] != delimiter)
                i++;
            end = i;
            mallocd_string[j] = split_words(string, start, end);
            if (!mallocd_string[j])
            {
                ft_free_local_2m(mallocd_string);
                return NULL;
            }
            j++;
        }
        else
            i++;
    }
    mallocd_string[j] = NULL; 

    return (mallocd_string);
}

/*
int main()
{
    char *patates = "a,sad,fasd,fasd,fgsad,ffads,f";
    

    char **yavhe;

    yavhe = ft_split(patates, ',');


    int i = -1;
    while (yavhe[++i])
    printf("%s ", yavhe[i]);
    printf("\n");

    return (0);
}
*/