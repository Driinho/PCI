#include <stdio.h>

int main() {

    int d1, d2;

    printf("Digite os dois dias: ");
    scanf("%i %i", &d1, &d2);

    //Domingo, X
    if(d1==1 && d2==1){
        printf("[Domingo, Domingo]");
    }
    else if(d1==1 && d2==2){
        printf("[Domingo, Segunda]");
    }
    else if(d1==1 && d2==3){
        printf("[Domingo, Terca]");
    }
    else if(d1==1 && d2==4){
        printf("[Domingo, Quarta]");
    }
    else if(d1==1 && d2==5){
        printf("[Domingo, Quinta]");
    }
    else if(d1==1 && d2==6){
        printf("[Domingo, Sexta]");
    }
    
        //Segunda, X
        else if(d1==2 && d2==1){
            printf("[Segunda, Domingo]");
        }
        else if(d1==2 && d2==2){
            printf("[Segunda, Segunda]");
        }
        else if(d1==2 && d2==3){
            printf("[Segunda, Terca]");
        }
        else if(d1==2 && d2==4){
            printf("[Segunda, Quarta]");
        }
        else if(d1==2 && d2==5){
            printf("[Segunda, Quinta]");
        }
        else if(d1==2 && d2==6){
            printf("[Segunda, Sexta]");
        }
        else if(d1==2 && d2==7){
            printf("[Segunda, Sabado]");
        }
        
            //Terca, X
            else if(d1==3 && d2==1){
                printf("[Terca, Domingo]");
            }
            else if(d1==3 && d2==2){
                printf("[Terca, Segunda]");
            }
            else if(d1==3 && d2==3){
                printf("[Terca, Terca]");
            }
            else if(d1==3 && d2==4){
                printf("[Terca, Quarta]");
            }
            else if(d1==3 && d2==5){
                printf("[Terca, Quinta]");
            }
            else if(d1==3 && d2==6){
                printf("[Terca, Sexta]");
            }
            else if(d1==3 && d2==7){
                printf("[Terca, Sabado]");
            }
            
                //Quarta, X
                else if(d1==4 && d2==1){
                    printf("[Quarta, Domingo]");
                }
                else if(d1==4 && d2==2){
                    printf("[Quarta, Segunda]");
                }
                else if(d1==4 && d2==3){
                    printf("[Quarta, Terca]");
                }
                else if(d1==4 && d2==4){
                    printf("[Quarta, Quarta]");
                }
                else if(d1==4 && d2==5){
                    printf("[Quarta, Quinta]");
                }
                else if(d1==4 && d2==6){
                    printf("[Quarta, Sexta]");
                }
                else if(d1==4 && d2==7){
                    printf("[Quarta, Sabado]");
                }
                
                    //Quinta, X
                    else if(d1==5 && d2==1){
                        printf("[Quinta, Domingo]");
                    }
                    else if(d1==5 && d2==2){
                        printf("[Quinta, Segunda]");
                    }
                    else if(d1==5 && d2==3){
                        printf("[Quinta, Terca]");
                    }
                    else if(d1==5 && d2==4){
                        printf("[Quinta, Quarta]");
                    }
                    else if(d1==5 && d2==5){
                        printf("[Quinta, Quinta]");
                    }
                    else if(d1==5 && d2==6){
                        printf("[Quinta, Sexta]");
                    }
                    else if(d1==5 && d2==7){
                        printf("[Quinta, Sabado]");
                    }
                    
                        //Sexta, X
                        else if(d1==6 && d2==1){
                            printf("[Sexta, Domingo]");
                        }
                        else if(d1==6 && d2==2){
                            printf("[Sexta, Segunda]");
                        }
                        else if(d1==6 && d2==3){
                            printf("[Sexta, Terca]");
                        }
                        else if(d1==6 && d2==4){
                            printf("[Sexta, Quarta]");
                        }
                        else if(d1==6 && d2==5){
                            printf("[Sexta, Quinta]");
                        }
                        else if(d1==6 && d2==6){
                            printf("[Sexta, Sexta]");
                        }
                        else if(d1==6 && d2==7){
                            printf("[Sexta, Sabado]");
                        }

                            //Sabado, X
                            else if(d1==7 && d2==1){
                                printf("[Sabado, Domingo]");
                            }
                            else if(d1==7 && d2==2){
                                printf("[Sabado, Segunda]");
                            }
                            else if(d1==7 && d2==3){
                                printf("[Sabado, Terca]");
                            }
                            else if(d1==7 && d2==4){
                                printf("[Sabado, Quarta]");
                            }
                            else if(d1==7 && d2==5){
                                printf("[Sabado, Quinta]");
                            }
                            else if(d1==7 && d2==6){
                                printf("[Sabado, Sexta]");
                            }
                            else if(d1==7 && d2==7){
                                printf("[Sabado, Sabado]");
                            }
                            
                                //Invalido, X
                                else if((d1<1 || d1>7) && d2==1){
                                    printf("[Invalido, Domingo]");
                                }
                                else if((d1<1 || d1>7) && d2==2){
                                    printf("[Invalido, Segunda]");
                                }
                                else if((d1<1 || d1>7) && d2==3){
                                    printf("[Invalido, Terca]");
                                }
                                else if((d1<1 || d1>7) && d2==4){
                                    printf("[Invalido, Quarta]");
                                }
                                else if((d1<1 || d1>7) && d2==5){
                                    printf("[Invalido, Quinta]");
                                }
                                else if((d1<1 || d1>7) && d2==6){
                                    printf("[Invalido, Sexta]");
                                }
                                else if((d1<1 || d1>7) && d2==7){
                                    printf("[Invalido, Sabado]");
                                }

                                    //X, Invalido
                                    else if(d1==1 && (d2<1 || d2>7)){
                                        printf("[Domingo, Invalido]");
                                    }
                                    else if(d1==2 && (d2<1 || d2>7)){
                                        printf("[Segunda, Invalido]");
                                    }
                                    else if(d1==3 && (d2<1 || d2>7)){
                                        printf("[Terca, Invalido");
                                    }
                                    else if(d1==4 && (d2<1 || d2>7)){
                                        printf("[Quarta, Invalido");
                                    }
                                    else if(d1==5 && (d2<1 || d2>7)){
                                        printf("[Quinta, Invalido]");   
                                    }
                                    else if(d1==6 && (d2<1 || d2>7)){
                                        printf("[Sexta, Invalido]");
                                    }
                                    else if(d1==7 && (d2<1 || d2>7)){
                                        printf("[Sabado, Invalido]");
                                    }
                                    else if((d1<1 || d1>7) && (d2<1 || d2>7)){
                                        printf("[Invalido, Invalido]");
                                    }
    return 0;
}