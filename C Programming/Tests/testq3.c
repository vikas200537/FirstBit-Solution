//3. Develop a program to manage a music library. Define a structure to
//store song details (song ID, title, artist, and duration). Create a menu-
//driven program to add new songs and display the song library. Use
//functions to handle these operations.
#include<stdio.h>
typedef struct musiclib{
	int song_id;
	char title[100];
	char artist[20];
	int duration;
}musiclib;
void addsongs(musiclib m[],int *count);
void display(musiclib m[], int count);
void main(){
	int max=10;
	musiclib m[max];
	int count=0;
	int choice=0;
	while(choice!=3){
	
	printf("---Menu for music Library---");
	printf("\n1.Add New Songs");
	printf("\n2.Display");
	printf("\n3.Exit");
	 printf("\nEnter your choice: ");
    scanf("%d", &choice);
	
	switch(choice){
		case 1:addsongs(m,&count);
		break;
		case 2:display(m,count);
		break;
		case 3:printf("Exit");
		break;
		default:printf("Enter invalid choice");
		break;
	}
}
}
void addsongs(musiclib m[],int *count){
	printf("\nEnter Song ID: ");
    scanf("%d", &m[*count].song_id);

    printf("Enter Song Title: ");
    scanf(" %[^\n]", m[*count].title);

    printf("Enter Artist Name: ");
    scanf(" %[^\n]", m[*count].artist);

    printf("Enter Duration: ");
    scanf("%d", &m[*count].duration);

    (*count)++;

    printf("Song added successfully!\n");
}

void display(musiclib m[], int count) {
    int i;

    if(count == 0) {
        printf("\nNo songs in library!\n");
        return;
    }

    printf("\n--- Music Library ---\n");
    for(i = 0; i < count; i++) {
       
        printf("\nSong ID   : %d", m[i].song_id);
        printf("\nTitle     : %s", m[i].title);
        printf("\nArtist    : %s", m[i].artist);
        printf("\nDuration  : %d", m[i].duration);
    }
}
