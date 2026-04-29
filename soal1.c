/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 3 - Structures and Dynamic Arrays
 *   Hari dan Tanggal    : Rabu, 29 April 2026
 *   Nama (NIM)          : Fayyadh Ramadhan (13224077)
 *   Nama File           : soal1.c
 *   Deskripsi           : 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Artefak {
    char nama[50];
    char kategori[50];
    int tahun;
    int nilai;
} Artefak;

void sortTahun(Artefak data[], int N)
{
    for(int i=0;i<N-1;i++)
    {
        if(strcmp(data[i].kategori, data[i+1].kategori) == 0)
        {
            if (data[i].tahun > data[i+1].tahun)
            {
                Artefak temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
    
    
}

void sortKategori(struct Artefak data[], int N) {
    int i, j;
    struct Artefak temp;
    
    for(i = 0; i < N - 1; i++) {
        for(j = i + 1; j < N; j++) {
            if(strcmp(data[i].kategori, data[j].kategori) > 0) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
            // else if(strcmp(data[i].kategori, data[j].kategori) == 0)
            // {
            //     sortTahun(data, i, j);
            // }
        }
    }
}

// void sortTahun(Artefak data[], int bawah, int atas)
// {
//     for (int i = bawah; i < atas - 1; i++)
//     {
//         for (int j = 0; j < atas - i - 1; j++)
//         {
//             if (data[j].tahun > data[j+1].tahun)
//             {
//                 int temp = data[i].tahun;
//                 data[i].tahun = data[j].tahun;
//                 data[j].tahun = temp;
//             }
//         }
//     }
// }

void sortNama(struct Artefak data[], int N)
{
    int i, j;
    struct Artefak temp;
    
    for(i = 0; i < N - 1; i++) {
        for(j = i + 1; j < N; j++) {
            if(strcmp(data[i].nama, data[j].nama) > 0) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
            // else if(strcmp(data[i].nama, data[j].nama) == 0)
            // {
            //     sortTahun(data, i, j);
            // }
        }
    }
}


int main()
{
    int N, i;

    scanf("%d", &N);

    Artefak data[N];

    for(i=0;i<N;i++)
    {
        scanf(" %s %s %d %d", &data[i].nama, &data[i].kategori, &data[i].tahun, &data[i].nilai);
    }

    sortKategori(data, N);
    sortTahun(data, N);

    for(i=0;i<N;i++)
    {
        printf("\n%s %s %d %d", data[i].nama, data[i].kategori, data[i].tahun, data[i].nilai);
    }
    // printf("%s %s %s %s", data[0].nama, data[1].nama, data[2].nama, data[3].nama);
}