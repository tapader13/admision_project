#include <stdio.h>
#include <string.h>

struct exam
{
    char name[50];
    int roll;
    char pass[50];
    int flag;
    int result;
} arr[1000];

int cur = 0;
int now;
int f;
int number;
void regis()
{
    printf("Name: ");
    scanf("%s", arr[cur].name);

    printf("password: ");
    scanf("%s", arr[cur].pass);

    printf("Roll: ");
    scanf("%d", &arr[cur].roll);

    arr[cur].flag = 0;
    arr[cur].result = 0;

    cur++;
}

int log()
{
    char nam[50];
    printf("Your Name: ");
    scanf("%s", nam);

    char pas[50];
    printf("Your Password: ");
    scanf("%s", pas);

    for (int i = 0; i < cur; i++)
    {
        int xx = strcmp(nam, arr[i].name);
        int yy = strcmp(pas, arr[i].pass);
        if (xx == 0 && yy == 0)
        {
            printf("\n");
            puts("Log in Successful!!\n");

            now = i;
            return 1;
        }
    }

    puts("Login Unsuccessful!!\n");
    puts("Registration must be done first\n");
    return 0;
}

int logged()
{
    return f ^ 1;
}

void bio()

{
    puts("...................................................bio......................................................... ");
    int i = 0;

    FILE *ptr;
    char ch;
    ptr = fopen("math.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }
    char c;

    while ((c = fgetc(ptr)) != EOF)
    {
        if (c == '\n')
        {
            printf("%c", c);
            char dd = 'a';

            while (dd <= 'd')
            {
                printf("%c. ", dd);
                while ((c = fgetc(ptr)) != EOF)
                {
                    if (c == '\n')
                    {
                        printf("%c", c);
                        break;
                    }
                    printf("%c", c);
                }
                dd++;
            }
            c = fgetc(ptr);
            int y = c - '0';
            c = fgetc(ptr);
            printf("%c", c);

            int n;
            printf("Enter answer: ");
            scanf("%d", &n);
            if (n == y)
                number++;
        }
        else
            printf("%c", c);
    }
    fclose(ptr);
}

void math()
{
    puts("...................................................Math.......................................................... ");
    int i = 0;

    FILE *ptr;
    char ch;
    ptr = fopen("math.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }
    char c;

    while ((c = fgetc(ptr)) != EOF)
    {
        if (c == '\n')
        {
            printf("%c", c);
            char dd = 'a';

            while (dd <= 'd')
            {
                printf("%c. ", dd);
                while ((c = fgetc(ptr)) != EOF)
                {
                    if (c == '\n')
                    {
                        printf("%c", c);
                        break;
                    }
                    printf("%c", c);
                }
                dd++;
            }
            c = fgetc(ptr);
            int y = c - '0';
            c = fgetc(ptr);
            printf("%c", c);

            int n;
            printf("Enter answer: ");
            scanf("%d", &n);
            if (n == y)
                number++;
        }
        else
            printf("%c", c);
    }
    fclose(ptr);
}

void phy()
{
    puts("..................................................Physics......................................................... ");
    int i = 0;

    FILE *ptr;
    char ch;
    ptr = fopen("phy.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }
    char c;

    while ((c = fgetc(ptr)) != EOF)
    {
        if (c == '\n')
        {
            printf("%c", c);
            char dd = 'a';

            while (dd <= 'd')
            {
                printf("%c. ", dd);
                while ((c = fgetc(ptr)) != EOF)
                {
                    if (c == '\n')
                    {
                        printf("%c", c);
                        break;
                    }
                    printf("%c", c);
                }
                dd++;
            }
            c = fgetc(ptr);
            int y = c - '0';
            c = fgetc(ptr);
            printf("%c", c);

            int n;
            printf("Enter answer: ");
            scanf("%d", &n);
            if (n == y)
                number++;
        }
        else
            printf("%c", c);
    }
    fclose(ptr);
}

void chemis()
{
    puts("...................................................chem.......................................................... ");
    int i = 0;

    FILE *ptr;
    char ch;
    ptr = fopen("math.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }
    char c;

    while ((c = fgetc(ptr)) != EOF)
    {
        if (c == '\n')
        {
            printf("%c", c);
            char dd = 'a';

            while (dd <= 'd')
            {
                printf("%c. ", dd);
                while ((c = fgetc(ptr)) != EOF)
                {
                    if (c == '\n')
                    {
                        printf("%c", c);
                        break;
                    }
                    printf("%c", c);
                }
                dd++;
            }
            c = fgetc(ptr);
            int y = c - '0';
            c = fgetc(ptr);
            printf("%c", c);

            int n;
            printf("Enter answer: ");
            scanf("%d", &n);
            if (n == y)
                number++;
        }
        else
            printf("%c", c);
    }
    fclose(ptr);
}

void takeExam()
{
    if (logged())
    {
        printf("\n");
        puts("Please log in --------->\n");
        return;
    }

    if (arr[now].flag == 4)
    {
        puts("!!!!!!!!!!Exam Done!!!!!!!!!");
        return;
    }

    number = 0;
    bio();
    chemis();
    phy();
    math();
    arr[now].flag = 4;
    arr[now].result = number;
}

void showResult()
{
    puts("................................................ Merit is Here ................................................... ");
    for (int i = 0; i < cur; i++)
    {
        printf("Name: %s , Roll: %d , Mark: %d\n", arr[i].name, arr[i].roll, arr[i].result);
    }
    return;
}

void sort()
{
    for (int i = 0; i < cur; i++)
    {
        for (int j = 0; j < cur - 1; j++)
        {
            if (arr[j].result < arr[j + 1].result)
            {
                struct exam temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    printf("...................................................................................................................\n");
    printf(".....****************.................**********.....................*********....................************......\n");
    printf("...................................................................................................................\n");
    printf("                                                   WELCOME\n");
    printf("                                          SHEIKH HASINA UNIVERSITY\n");
    printf("                               This is our first project using c language\n");
    printf("                               Presented by :\n");
    printf("                                     Minhaj Tapader(Roll-13)\n");
    printf("                                     Abdul Hakim(Roll-20)\n");
    printf("                                     Toukir Ahmed(Roll-28)\n");
    printf("                                     Rafiul Hasan(Roll-29)\n");
    printf("              .........................................................................................\n");
    while (1)
    {

        printf("               1.Registration.....2.Log in.....3.Show Result.....4.Give Exam.....5.Log out.....6.exit\n");
        printf("                  Option number: ");
        int ch;
        scanf("%d", &ch);

        if (ch == 1)
        {
            f = 0;
            regis();
            puts("Now, you should logged in\n");
        }
        else if (ch == 2)
        {
            f = log();
        }
        else if (ch == 3)
        {
            sort();
            showResult();
        }
        else if (ch == 5)
        {
            puts("Log out Successful\n");
            f = 0;
        }
        else if (ch == 6)
        {
            return 0;
        }
        else if (ch == 4)
        {
            takeExam();
        }
        else
            puts("You must be choice Option number (1-6)\n");
    }

    return 0;
}
