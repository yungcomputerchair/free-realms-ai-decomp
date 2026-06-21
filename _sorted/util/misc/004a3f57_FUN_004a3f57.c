// addr: 0x004a3f57
// name: FUN_004a3f57
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_004a3f57(int param_1,int param_2,int *param_3,uint param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar4 = FUN_004a3cf0(param_2,param_4);
  if (iVar4 != 0) {
    iVar1 = iVar4 + 0x1c;
    param_4 = FUN_00482da0();
    if (param_4 != 0) {
      param_2 = (*(int *)(param_2 + 4) - *(int *)(param_1 + 0xd0)) - *(int *)(iVar4 + 8);
      FUN_004833a2(*(undefined4 *)(iVar4 + 0x24),iVar1);
      FUN_004833a2(*(undefined4 *)(iVar4 + 0x20),iVar1);
      puVar5 = (undefined4 *)
               FUN_004a1a31(local_1c,local_14,local_10,local_c,local_8,&param_2,&LAB_00481165);
      local_14 = *puVar5;
      local_10 = puVar5[1];
      FUN_004833a2(*(undefined4 *)(iVar4 + 0x20),iVar1);
      uVar6 = FUN_00482f46(&local_c);
      if (param_4 <= uVar6) {
        uVar6 = param_4 - 1;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar6;
      }
      piVar7 = (int *)FUN_00482db3(uVar6);
      piVar7 = (int *)*piVar7;
      if (param_3 != (int *)0x0) {
        iVar1 = piVar7[2];
        param_3[3] = piVar7[3];
        param_3[2] = iVar1;
        iVar1 = *(int *)(iVar4 + 8);
        iVar2 = piVar7[1];
        iVar3 = *(int *)(param_1 + 0xd0);
        *param_3 = *(int *)(param_1 + 0xcc) + *piVar7 + *(int *)(iVar4 + 4);
        param_3[1] = iVar3 + iVar1 + iVar2;
        param_3[4] = piVar7[9] + *(int *)(iVar4 + 0x14);
      }
    }
  }
  return;
}

