 for(i=0;i<=l;i++){
        for(j=i+1;j<=l;j++){
             // use if statement to check duplicate element
            if(a[i]==a[j]){
                 // delete the current position of the duplicate element
                 
                for(k=j;k<=l;k++){
                    a[k]=a[k+1];
                }
                // decrease the size of array after removing duplicate element

                l--;
                // if the position of the elements is changz 
                j--;
            }
        }