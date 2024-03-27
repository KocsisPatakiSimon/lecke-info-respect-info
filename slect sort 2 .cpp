 for (i=0; i< n-1; i++)
        {
            for (j=i+1; j< n; j++)
            {
                //ha a tomb elso feleben valamelyik elem nagyobb, mint a tomb masodik feleben, csereld ki oket
                if ( v[i]> v[j])
                {
                    aux= v[j];
                    v[j]= v[i];
                    v[i]=aux;
                }
            }
        }
