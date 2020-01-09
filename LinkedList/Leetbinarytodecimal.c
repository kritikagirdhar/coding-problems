int getDecimalValue(struct ListNode* head){
    struct ListNode *ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        struct ListNode *ptr1=head;
        long p=1;
        int c,n=0;
        while(ptr1!=NULL)
        {
            p=1;
            c=count;
            if(ptr1->val==1)
            {
                if(count-1==0)
                {
                    p=1;
                }
                while(count-1>0)
                {
                    p=p*2;
                    count--;
                }
               n=n+p;  
               //printf("%d\n",n);
            }
           
            count=c-1;
            ptr1=ptr1->next;
        }
   // printf("%d",n);
    return n;
}