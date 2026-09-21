#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 5
#define NAME_LEN 30
#define FILE_NAME "highscores.txt"

typedef struct
{
    char name[NAME_LEN];
    int score;
} Entry;

// Write the default leaderboard to a new file
void createDefault(const char *filename)
{
    FILE *f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Cannot create %s\n", filename);
        return;
    }

    fprintf(f, "Diana,15600\n");
    fprintf(f, "Bob,12300\n");
    fprintf(f, "Eve,9800\n");
    fprintf(f, "Alice,8500\n");
    fprintf(f, "Charlie,7200\n");

    fclose(f);
}

// Read entries from file
// Return the number of entries loaded
int loadScores(const char *filename, Entry list[])
{
    FILE *f = fopen(filename, "r");

    if (f == NULL)
    {
        return 0;
    }

    int count = 0;
    char line[64];

    while (count < MAX_ENTRIES &&
           fgets(line, sizeof(line), f) != NULL)
    {

        if (sscanf(line, "%29[^,],%d",
                   list[count].name,
                   &list[count].score) == 2)
        {
            count++;
        }
    }

    fclose(f);

    return count;
}

// Save leaderboard to file
void saveScores(
    const char *filename,
    const Entry list[],
    int count)
{
    FILE *f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Cannot write %s\n", filename);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(
            f,
            "%s,%d\n",
            list[i].name,
            list[i].score);
    }

    fclose(f);
}

// Display leaderboard
void showLeaderboard(
    const Entry list[],
    int count)
{
    printf("=== High Scores ===\n");

    for (int i = 0; i < count; i++)
    {
        printf(
            "%d. %-12s %6d\n",
            i + 1,
            list[i].name,
            list[i].score);
    }

    printf("===================\n");
}

// Insert into sorted list (descending)
// Return 1 if the entry made top-5
int addScore(
    Entry list[],
    int *count,
    const char *name,
    int score)
{
    int pos = *count;

    // Find position for new score
    for (int i = 0; i < *count; i++)
    {
        if (score > list[i].score)
        {
            pos = i;
            break;
        }
    }

    // Score is not high enough for top 5
    if (pos >= MAX_ENTRIES)
    {
        return 0;
    }

    // Shift entries down
    int last =
        (*count < MAX_ENTRIES)
            ? *count
            : MAX_ENTRIES - 1;

    for (int i = last; i > pos; i--)
    {
        list[i] = list[i - 1];
    }

    // Insert new entry
    strncpy(
        list[pos].name,
        name,
        NAME_LEN - 1);

    list[pos].name[NAME_LEN - 1] = '\0';
    list[pos].score = score;

    if (*count < MAX_ENTRIES)
    {
        (*count)++;
    }

    return 1;
}

int main()
{
    Entry list[MAX_ENTRIES];

    // 1. Load file
    // Create default if missing
    int count = loadScores(FILE_NAME, list);

    if (count == 0)
    {
        printf(
            "%s not found. Creating default file...\n",
            FILE_NAME);

        createDefault(FILE_NAME);
        count = loadScores(FILE_NAME, list);
    }

    // 2. Show current leaderboard
    showLeaderboard(list, count);

    // 3. Keep asking for scores
    // until user types q
    char name[NAME_LEN];
    int score;

    while (1)
    {

        printf("Enter name (q to quit): ");

        if (scanf("%29s", name) != 1 ||
            strcmp(name, "q") == 0)
        {
            break;
        }

        printf("Enter score: ");

        if (scanf("%d", &score) != 1)
        {

            // Clear invalid input
            int c;

            while ((c = getchar()) != '\n' &&
                   c != EOF)
            {
            }

            printf("Invalid score\n");
            continue;
        }

        // 4. Add score if it reaches top 5
        if (addScore(
                list,
                &count,
                name,
                score))
        {

            printf(
                "Congratulations! You made the top %d!\n",
                MAX_ENTRIES);

            saveScores(
                FILE_NAME,
                list,
                count);
        }
        else
        {

            printf(
                "Score too low for the top %d.\n",
                MAX_ENTRIES);
        }

        // Show updated leaderboard
        showLeaderboard(list, count);
    }

    printf("Goodbye!\n");

    return 0;
}