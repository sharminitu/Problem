// #include<stdio.h>
// int main()
// {
//     char a[10];
//     char b[10];
//     char c[10];

//     scanf("%s %s %s",&a,&b,&c);

//     if (a== "vertebrado")
//     {
//         if (b == "ave")
//         {
//             if(c=="carnivoro"){
//                 printf("aguia\n");
//             }
//             else{
//                 printf("pomba\n");
//             }
//         }
//         else{
//             if(c=="onivoro"){
//                 printf("homem\n");
//             }
//             else{
//                 printf("vaca\n");
//             }
//         }
//     }
//     else{
//         if (b=="inseto")
//         {
//             if (c=="hematofago")
//             {
//                 printf("pugla\n");
//             }
//             else
//             {
//                 printf("lagarta\n");
//             }
//         }
//         else
//         {
//             if (c=="homatofago")
//             {
//                 printf("sanguessuga\n");
//             }
//             else
//             {
//                 printf("minhoca\n");
//             }
//         }
//     }
//     return 0;

// }
#include<stdio.h>
int main()
{
    char a[10];
    char b[10];
    char c[10];

        scanf("%s %s %s",&a,&b,&c);

    if(a[0]=="vertebrado"&& b=="ave"&&c=="carnivoro"){
        printf("aguia\n");
    }
     else if (a == "vertebrado" && b == "ave" && c == "onivora"){
        printf("pomba\n");
    }
     else if (a == "vertebrado" && b == "mamifero" && c == "onivora"){
        printf("homem\n");
    }
    else if (a == "vertebado" && b == "manifero" && c == "herbivora"){
        printf("vaca\n");
    }
    else if (a == "invertebrado" && b == "inseto" && c == "hematofago"){
        printf("pulga\n");
    }
    else if (a == "invertebrado" && b == "inseto" && c == "herbivora"){
        printf("lagarta\n");
    }
    else if (a == "invertebrado" && b == "anelideo" && c == "hematofago"){
        printf("sanguessuga\n");
    }
    else if (a == "invertebrado" && b == "anelido" && c == "onivora"){
        printf("minhoca\n");
    }

    return 0;
}