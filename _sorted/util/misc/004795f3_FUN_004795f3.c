// addr: 0x004795f3
// name: FUN_004795f3
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_004795f3(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_54 [6];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
                    /* Reads a single pixel/texel-sized value from a graphics/surface resource using
                       vtable calls after bounds and transform checks; returns 0 on failure. No
                       class/file evidence, so left unnamed. */
  if ((((*(int *)(param_1 + 0x44) != 0) && ((*(byte *)(param_1 + 0x10) & 8) == 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(*(int *)(param_1 + 0x20) + 4) != 0)) {
    iVar3 = *(int *)(param_1 + 0x44);
    param_3 = param_3 + *(int *)(iVar3 + 0x94);
    uVar6 = (int)param_2 + *(int *)(iVar3 + 0x90);
    if ((*(int *)(iVar3 + 0x98) == 0) || (cVar2 = FUN_004f7eb9(uVar6,param_3), cVar2 != '\0')) {
      FUN_00479514();
      iVar3 = (**(code **)**(undefined4 **)(param_1 + 0x20))();
      local_10 = *(undefined4 **)(iVar3 + 4);
      piVar1 = (int *)local_10[4];
      piVar5 = *(int **)(*(int *)(param_1 + 0x20) + 4);
      (**(code **)(*piVar5 + 0x30))(piVar5,local_54);
      if ((uVar6 < local_3c) && (param_3 < local_38)) {
        local_8 = (int *)0x0;
        local_c = (int *)0x0;
        param_2 = (int *)0x0;
        iVar3 = (**(code **)(*piVar1 + 0x5c))(piVar1,1,1,1,1,local_54[0],0,&local_8,0);
        if (-1 < iVar3) {
          iVar4 = (**(code **)(*piVar1 + 0x90))(piVar1,1,1,local_54[0],2,&param_2,0);
          iVar3 = *local_8;
          piVar5 = local_8;
          if (-1 < iVar4) {
            iVar3 = (**(code **)(iVar3 + 0x48))(local_8,0,&local_c);
            if (-1 < iVar3) {
              local_30 = param_3;
              local_2c = uVar6 + 1;
              local_28 = param_3 + 1;
              local_1c = 1;
              local_18 = 1;
              local_24 = 0;
              local_20 = 0;
              param_3 = 0;
              local_34 = uVar6;
              if (local_10[0x1f] != 0) {
                (**(code **)(*piVar1 + 0xa8))(piVar1);
              }
              iVar3 = (**(code **)(*piVar1 + 0x88))
                                (piVar1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),&local_34,
                                 local_c,&local_24,0);
              uVar7 = param_3;
              if (((-1 < iVar3) &&
                  (iVar3 = (**(code **)(*piVar1 + 0x80))(piVar1,local_c,param_2), uVar7 = param_3,
                  -1 < iVar3)) &&
                 (iVar3 = (**(code **)(*param_2 + 0x34))(param_2,local_14,&local_24,0x10),
                 uVar7 = param_3, -1 < iVar3)) {
                uVar7 = *local_10;
                (**(code **)(*param_2 + 0x38))(param_2);
              }
              (**(code **)(*param_2 + 8))(param_2);
              (**(code **)(*local_c + 8))(local_c);
              (**(code **)(*local_8 + 8))(local_8);
              return uVar7;
            }
            (**(code **)(*local_8 + 8))(local_8);
            iVar3 = *param_2;
            piVar5 = param_2;
          }
          (**(code **)(iVar3 + 8))(piVar5);
        }
      }
    }
  }
  return 0;
}

