#include "string.h"
/*****************************************************************************************************************/
// memchr implementation
void *Mo_memchr(const void *str, char character, int n)
{
    char *str_ptr=str;
    if(str_ptr==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {
        while(n--)
        {
            if(*str_ptr==character)
            {
                return str_ptr;
            }
            else
            {
                str_ptr++;
            }


        }
    }


}
/*****************************************************************************************************************/
// memcmp implementation
int Mo_memcmp(const void *str1, const void *str2, int n)
{
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    int return_value;
    if(str1_ptr==NULL || str2_ptr==NULL)
    {
        printf("NULL pointer !!\n");
    }
    else{
        return_value=0;
        for(int i=0;i<n;i++)
        {
            if((*str1_ptr)>(*str2_ptr))
            {
                return_value =1;
                break;
            }
            else if((*str1_ptr)<(*str2_ptr))
            {
                return_value =-1;
                break;

            }
            str1_ptr++;
            str2_ptr++;
        }

    }
    return return_value;
}
/*****************************************************************************************************************/
// memcpy implementation
void *Mo_memcpy(void *dest, const void * src, int n)
{
    char *src_ptr=src;
    char *dest_ptr=dest;
    if(dest==NULL || src==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {
        while(n--)
        {
            *dest_ptr ++=*src_ptr++;
        }
    }
    return dest;
}
/*****************************************************************************************************************/
// memmove implementation
void *Mo_memmove(void *str1, const void *str2, int n)
{

    int *str1_ptr=str1;
    int *str2_ptr=str2;
    if(str1_ptr==NULL || str2_ptr==NULL)
    {
        printf("NULL pointer !! \n");
    }
    else
    {
        while(n--)
        {
            *str1_ptr++=*str2_ptr++;
        }

    }
    return str1;
}
/*****************************************************************************************************************/
// memset implementation
void *Mo_memset(void *str, char value, int from,int to)
{
    char *str_ptr=str;
    if(str_ptr==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {
        str_ptr+=(from-1);
        for(int index=from;index<=to;index++)
        {
            *str_ptr++=value;
        }
    }
    return str;
}
/*****************************************************************************************************************/
// strcat implementation
char *Mo_strcat(char *dest, const char *src)
{
    char *dest_ptr=dest;
    char *src_ptr=src;
    int src_len,dest_len;

    if(dest==NULL || src==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {
        src_len=strlen(src_ptr);
        dest_len= strlen(dest_ptr);
        dest_ptr+=dest_len;
        while(src_len--)
        {
            *dest_ptr++=*src_ptr++;
        }
        *dest_ptr++='\0';//Add a null terminator at the end

    }
    return dest_ptr;
}
/*****************************************************************************************************************/
// strchr implementation
char *Mo_strchr(const char *str, char character)
{
    char *str_ptr=str;
    if(str==NULL)
    {
        printf("NULL pointer !!\n");
    }
    else
    {
        int len=strlen(str_ptr);
        while(len--)
        {
            if(character==*str_ptr)
            {
                return str_ptr;
            }
            else
            {
                str_ptr++;
            }
        }
    }
}
/*****************************************************************************************************************/
// strcmp implementation
int Mo_strcmp(const char *str1, const char *str2)
{
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    int return_value=0;
    if(str1==NULL || str2==NULL)
    {
        printf("NULL pointer !!\n");
        return_value=1000;
    }
    else
    {
        int str1_len=sizeof(str1_ptr);
        int str2_len=sizeof(str2_ptr);
        while(str2_len--)
        {
            if(*str1_ptr>*str2_ptr)
            {
                return_value=1;
                break;
            }
            else if(*str1_ptr<*str2_ptr)
            {
                return_value=-1;
                break;
            }
            str1_ptr++;
            str2_ptr++;
        }
    }
    return return_value;
}
/*****************************************************************************************************************/
// strcoll implementation
int Mo_strcoll(const char *str1, const char *str2)
{
    char *str1_ptr = str1;
    char *str2_ptr = str2;
    int return_value = 0;
    if (str1 == NULL || str2 == NULL) {
        printf("NULL pointer !!\n");
        return_value = 1000;
    } else {
        int str1_len = sizeof(str1_ptr);
        int str2_len = sizeof(str2_ptr);
        while (str2_len--) {
            if (*str1_ptr > *str2_ptr) {
                return_value = 1;
                break;
            } else if (*str1_ptr < *str2_ptr) {
                return_value = -1;
                break;
            }
            str1_ptr++;
            str2_ptr++;
        }
    }
    return return_value;
}
/*****************************************************************************************************************/
// strcpy implementation
char *Mo_strcpy(char *dest, const char *src)
{
    char *src_ptr=src;
    char *dest_ptr=dest;
    if(dest==NULL || src==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {
        int src_len=strlen(src);
        while(src_len--)
        {
            *dest_ptr++=*src_ptr++;
        }
        *dest_ptr='\0';
    }
    return dest;

}
/*****************************************************************************************************************/
// strcspn implementation
int Mo_strcspn(const char *str1, const char *str2)
{
    int count =0;
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    if(str1_ptr==NULL || str2_ptr==NULL)
    {
        printf("NULL pointer");

    }
    else
    {
        int str1_len= strlen(str1);
        int str2_len= strlen(str2);
        for(int i=0;i<str1_len;i++)
        {
            str2_ptr=str2;
            for(int j=0;j<str2_len;j++)
            {
                if(*str1_ptr!=*str2_ptr)
                {
                    count++;
                }
                else
                {
                    count=0;
                    break;
                }
                *str1_ptr++=*str2_ptr++;
            }
            if(count==0){
                count=i+1;
                break;
            }
            else
            {
                count=i+1;
            }
        }
    }

    return count;

}
/*****************************************************************************************************************/
// strlen implementation
int Mo_strlen(const char *str)
{
    char *str_ptr=str;
    int len=0;
    if(str==NULL)
    {
        printf("NULL pointer");;
    }
    else
    {
        while(*str_ptr!='\0')
        {
            len++;
            str_ptr++;
        }
    }
    return len;
}
/*****************************************************************************************************************/
// strncat implementation
char *Mo_strncat(char *dest, const char *src, int src_len)
{
    char *dest_ptr=dest;
    char *src_ptr=src;
    if(dest==NULL || src==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {
        dest_ptr+=strlen(dest);
        while(src_len--)
        {
            *dest_ptr++=*src++;
        }
        *dest_ptr='\0';
    }
    return dest_ptr;
}
/*****************************************************************************************************************/
// strncmp implementation
int Mo_strncmp(const char *str1, const char *str2, int n)
{
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    int return_value=0;
    if(str1==NULL || str2==NULL)
    {
        printf("NULL pointer !!\n");
        return_value=1000;
    }
    else
    {
        int str1_len=sizeof(str1_ptr);
        int str2_len=sizeof(str2_ptr);
        while(n--)
        {
            if(*str1_ptr>*str2_ptr)
            {
                return_value=1;
                break;
            }
            else if(*str1_ptr<*str2_ptr)
            {
                return_value=-1;
                break;
            }
            str1_ptr++;
            str2_ptr++;
        }
    }
    return return_value;
}
/*****************************************************************************************************************/
// strncpy implementation
char *Mo_strncpy(char *dest, const char *src, int n)
{
    char *src_ptr=src;
    char *dest_ptr=dest;
    if(dest==NULL || src==NULL)
    {
        printf("NULL pointer\n");
    }
    else
    {

        while(n--)
        {
            *dest_ptr++=*src_ptr++;
        }
        *dest_ptr='\0';
    }
    return dest;

}
/*****************************************************************************************************************/
// strpbrk implementation
char *Mo_strpbrk(const char *str1, const char *str2)
{
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    char ch='\0';
    if(str1==NULL || str2==NULL)
    {
        printf("NULL pointer\n");
        return NULL;
    }
    else
    {
        for(int i=0;i<strlen(str1);i++)
        {
            str2_ptr=str2;
            for(int j=0;j<strlen(str2);j++)
            {
                if(*str1_ptr==*str2_ptr)
                {
                    return str1_ptr;
                }
                str2_ptr++;
            }
            str1_ptr++;
        }
    }
    return NULL;
}
/*****************************************************************************************************************/
// strrchr implementation
char *Mo_strrchr(const char *str, char character)
{
    char *str_ptr=str;
    char *return_ptr=NULL;
    if(str==NULL)
    {
        printf("NULL pointer !!\n");
        return NULL;
    }
    else
    {
        for(int i=0;i<strlen(str);i++)
        {
            if(*str_ptr==character)
            {
                return_ptr=str_ptr;
            }
            str_ptr++;
        }
    }
    return return_ptr;
}
/*****************************************************************************************************************/
// strspn implementation
int Mo_strspn(const char *str1, const char *str2)
{
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    int len=0;
    int found=0;
    if(str1==NULL || str2==NULL )
    {
        printf("NULL pointer !!\n");
        return -1;
    }
    else
    {
        for(int i=0;i<strlen(str1);i++)
        {
            found=0;
            str2_ptr=str2;
            for(int j=0;j<strlen(str2);j++)
            {
                if(*str1_ptr==*str2_ptr)
                {
                    len++;
                    found=1;
                    break;
                }
                str2_ptr++;
            }
            if(found==0)
            {
                break;
            }
            str1_ptr++;
        }

    }
    return len;
}
/*****************************************************************************************************************/
// strstr implementation
char *Mo_strstr(const char *str1, const char *str2)
{
    char *str1_ptr=str1;
    char *str2_ptr=str2;
    char *found=NULL;

    int count=0;
    if(str1==NULL || str2==NULL)
    {
        printf("NULL pointer !!\n");
    }
    else
    {
        int n=strlen(str2);
        for(int i=0;i<strlen(str1);i++)
        {
            for(int j=0;j<strlen(str2);j++)
            {
                if(*str1_ptr==*str2_ptr)
                {
                    if(count==0)
                    {
                        found=str1_ptr;
                    }

                    str2_ptr++;
                    str1_ptr++;
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count==strlen(str2))
            {
                return found;
            }
            else if(count!=0)
            {
                return NULL;
            }
            str1_ptr++;
        }

    }
}
/*****************************************************************************************************************/
// strxfrm implementation
int Mo_strxfrm(char *dest, const char *src, int n)
{
    int len;
    char *dest_ptr=dest;
    char *src_ptr=src;
    if(src==NULL || dest==NULL)
    {
        printf("NULL pointer !!\n");
    }
    else
    {
        len=strlen(src);
        for(int i=0;i<len;i++)
        {
            *dest_ptr++=*src_ptr++;
        }
        *dest_ptr++='\0';
    }
    return len;
}
/*****************************************************************************************************************/
int main(){}