#include <stdio.h>
#include <stdlib.h>
int main()
{
    int uzunlik;
    printf("x-0 ning uzunligini kiriting kiriting(3 kiritsangiz bu 3x3 degani): ");
    scanf("%d", &uzunlik);
    if(uzunlik>2 && uzunlik<8){
        int sonlar[uzunlik*uzunlik];
        int yutish=1;
        int yutish_o=1;
        int ketma_ket_ch_o;
        int ketma_ket_ch_o_o;
        int ketma_ket_t_p;
        int ketma_ket_g;
        int gal=1;
        int x_lar[32];
        int o_lar[32];
        int x_index=0;
        int o_index=0;
        int x_o_index;
        int nusxa;
        for(int i=0; i<uzunlik*uzunlik; i++){
            sonlar[i]=i+1;
        }
        yangi:
            
            for(int i=0; i<uzunlik*uzunlik; i++){
                //qator tashash
                if(i%uzunlik==0){
                    printf("\n\n");
                    ketma_ket_ch_o=uzunlik;
                    ketma_ket_ch_o_o=uzunlik;
                }
                //indexlar bosh bosa sonlarni ciqarado
                if(x_index==0){
                    printf("%2d  ", sonlar[i]);
                } else {
                    //x va sonlarni chiqaradi
                    for(int q=0; q<x_index; q++){
                        if(sonlar[i] == x_lar[q]){
                            printf(" x  ");
                            ketma_ket_ch_o--;
                            if(ketma_ket_ch_o==0){
                                yutish--;
                            }
                            break;
                        } else if(sonlar[i] == o_lar[q]){
                            printf(" 0  ");
                            break;
                        } else if(q==x_index-1){
                            printf("%2d  ", sonlar[i]);
                        }
                    }
                    for(int q=0; q<o_index; q++){
                        if(sonlar[i] == o_lar[q]){
                            ketma_ket_ch_o_o--;
                            if(ketma_ket_ch_o_o==0){
                                yutish_o--;
                            }
                            break;
                        }
                    }
                }
            }
            
            for(int w=0; w<uzunlik; w++){
                ketma_ket_t_p=uzunlik;
                nusxa=w;
                for(nusxa ; nusxa<uzunlik*uzunlik ; nusxa+=uzunlik){
                    for(int q=0; q<x_index; q++){
                        if(sonlar[nusxa] == x_lar[q]){
                            ketma_ket_t_p--;
                            if(ketma_ket_t_p==0){
                                yutish--;
                            }
                            break;
                        }
                    }
                }
                
            }
            for(int w=0; w<uzunlik; w++){
                ketma_ket_t_p=uzunlik;
                nusxa=w;
                for(nusxa ; nusxa<uzunlik*uzunlik ; nusxa+=uzunlik){
                    for(int q=0; q<o_index; q++){
                        if(sonlar[nusxa] == o_lar[q]){
                            ketma_ket_t_p--;
                            if(ketma_ket_t_p==0){
                                yutish_o--;
                            }
                            break;
                        }
                    }
                }
                
            }
            
            
            
            
            
            ketma_ket_g=uzunlik;
            for(int w=0; w<uzunlik*uzunlik; w=w+uzunlik+1){
                for(int q=0; q<x_index; q++){
                        if(sonlar[w] == x_lar[q]){
                            ketma_ket_g--;
                            if(ketma_ket_g==0){
                                yutish--;
                            }
                            break;
                        }
                    }
            }
            
            ketma_ket_g=uzunlik;
            for(int w=0; w<uzunlik*uzunlik; w=w+uzunlik+1){
                for(int q=0; q<o_index; q++){
                        if(sonlar[w] == o_lar[q]){
                            ketma_ket_g--;
                            if(ketma_ket_g==0){
                                yutish_o--;
                            }
                            break;
                        }
                    }
            }
            
            
            
            
            ketma_ket_g=uzunlik;
            for(int w=uzunlik-1; w<uzunlik*uzunlik; w =w+uzunlik-1 ){
                for(int q=0; q<x_index; q++){
                        if(sonlar[w] == x_lar[q]){
                            ketma_ket_g--;
                            if(ketma_ket_g==0){
                                yutish--;
                            }
                            break;
                        }
                    }
            }
            ketma_ket_g=uzunlik;
            for(int w=uzunlik-1; w<uzunlik*uzunlik; w =w+uzunlik-1 ){
                for(int q=0; q<o_index; q++){
                        if(sonlar[w] == o_lar[q]){
                            ketma_ket_g--;
                            if(ketma_ket_g==0){
                                yutish_o--;
                            }
                            break;
                        }
                    }
            }
        
            
            
            if( yutish==0){
                printf("\nx yutdi!!!");
            } else if(yutish_o==0){
                printf("\n0 yutdi!!!");
            } else {
                if(gal){
                    printf("\nx ning indexini(qaysi raqamning o'rniga qo'yilishi) kiriting: ");
                    scanf("%d", &x_o_index);
                    if(x_index>0){
                        for(int q=0; q<x_index; q++){
                            if(x_o_index == x_lar[q]){
                                break;
                            } else if (q==x_index-1){
                                x_lar[x_index]=x_o_index;
                                x_index++;
                                gal--;
                            }
                        }
                    }else{
                        x_lar[x_index]=x_o_index;
                        x_index++;
                        gal--;
                    }
                } else {
                    printf("\n0 ning indexini(qaysi raqamning o'rniga qo'yilishi) kiriting: ");
                    scanf("%d", &x_o_index);
                    if(o_index>0){
                        for(int q=0; q<x_index; q++){
                            if(x_o_index == x_lar[q]){
                                break;
                            } else if (q==x_index-1){
                                for(int q=0; q<o_index; q++){
                                    if(x_o_index == o_lar[q]){
                                        break;
                                    } else if (q==o_index-1){
                                        o_lar[o_index]=x_o_index;
                                        o_index++;
                                        gal++;
                                    }
                                }
                            }
                        }
                        
                    }else{
                        o_lar[o_index]=x_o_index;
                        o_index++;
                        gal++;
                    }
                }
        
            system("clear");
            goto yangi;
        }
        
        
    } else {
        printf("uzunlikni xato kiritidingiz: ");
    }
    return 0;
}



