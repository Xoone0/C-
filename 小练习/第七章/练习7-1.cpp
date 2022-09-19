//明解C语言
//练习7-1
//具体内容看书中图例,我没看懂,就直接从网上抄了
int main()
{
    int n;
    printf("sizeof 1:                %u\n",sizeof 1);            
    printf("sizeof -1:               %u\n",sizeof +1);            
    printf("sizeof +1:               %u\n",sizeof -1);           
    printf("sizeof(unsigned) - 1:    %u\n",sizeof(unsigned) - 1); 
    printf("sizeof(double) - 1:      %u\n",sizeof(double) - 1);   
    printf("sizeof((double) - 1):    %u\n",sizeof((double) - 1)); 
    printf("sizeof n + 2:            %u\n",sizeof n + 2);        
    printf("sizeof (n + 2):          %u\n",sizeof (n + 2));      
    printf("sizeof (n + 2.0):        %u\n",sizeof (n + 2.0));    

    return 0;

