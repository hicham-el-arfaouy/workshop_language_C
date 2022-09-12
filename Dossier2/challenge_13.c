#include <stdio.h>
#include <string.h>

void main(){
    int Mx, My, Nx, Ny, Ex, Ey, RESx, RESy;
    int EMx, MNx, ENx, EMy, MNy, ENy;
    printf("Point M : ");
    scanf("%d%d", &Mx, &My);

    printf("Point N : ");
    scanf("%d%d", &Nx, &Ny);

    printf("Point E : ");
    scanf("%d%d", &Ex, &Ey);

    EMx = Ex - Mx;
    EMy = Ey - My;
    ENx = Ex - Nx;
    ENy = Ey - Ny;
    MNx = Nx - Mx;
    MNy = Ny - My;

    RESx = ((MNx * EMx) / (MNx * MNx)) * MNx;
    RESy = ((MNy * EMy) / (MNy * MNy)) * MNy;

    printf("res : %d - %d", RESx, RESy);

}