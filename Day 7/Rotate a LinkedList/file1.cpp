//Coding Ninjas

Node *rotate(Node *head, int k) {
      if(head==NULL ||head->next==NULL)
            return head;
    int count=0;
        Node* demo=head;
        
        while(demo!=NULL)
        {
            demo=demo->next;
            count++;
        }
        
        int c=k%count;
        
        if(c==0)
        {
            return head;
        }
        
        demo=head;
        vector<int> vec2;
        int d=count-c;
       while(d)
       {
           vec2.push_back(demo->data);
           demo=demo->next;
           d--;
       }
        
        
       vector<int> vec1;
        
        while(demo!=NULL)
        {
            vec1.push_back(demo->data);
            demo=demo->next;
        }
            
        for(int i=0;i<vec2.size();i++)
        {
            vec1.push_back(vec2[i]);
        }
        
        demo=head;
        int i=0;
        while(demo!=NULL)
        {
            demo->data=vec1[i++];
            demo=demo->next;   
        }
        demo=NULL;
        return head;
}
