#ifndef FOO_DOT_H    /* This is an "include guard" */
#define FOO_DOT_H    /* prevents the file from being included twice. */
                     /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/

#define limit 10
#define  b 70 
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f

struct add
{
    char name[50];
    float salary;
}; 

float food;
float mobile;
float outing;
float bike;
float paybills;
float sal;

float multi;
int i,n;
float totalcredit;
float totaldebit;
float total_amount;
char name[b];
char month[b];


void show();
void data();
void align();

void analyse();



#endif
