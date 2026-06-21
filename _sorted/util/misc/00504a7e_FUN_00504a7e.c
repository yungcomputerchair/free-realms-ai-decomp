// addr: 0x00504a7e
// name: FUN_00504a7e
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00504a7e(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  int local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar5 = -(uint)(param_1 != -0x1c) & param_1 + 0x34U;
  cVar1 = FUN_004c8488(uVar5,*(undefined4 *)(param_1 + 0xc0));
  if (cVar1 == '\0') {
LAB_00504aa7:
    uVar3 = 0;
  }
  else {
    iVar6 = param_1 + 0xb8;
    local_8 = iVar6;
    FUN_004d01b1(**(undefined4 **)(param_1 + 0xbc),iVar6);
    local_18 = local_28;
    uVar3 = *(undefined4 *)(param_1 + 0xbc);
    local_14 = local_24;
    while( true ) {
      FUN_004d01b1(uVar3,iVar6);
      cVar1 = FUN_004ce47b(&local_28);
      if (cVar1 != '\0') break;
      puVar2 = (undefined4 *)FUN_004d01d5();
      FUN_004c8488(uVar5,*puVar2);
      FUN_004d01d5();
      uVar3 = FUN_004ce330();
      cVar1 = FUN_004c8488(uVar5,uVar3);
      if (cVar1 == '\0') goto LAB_00504aa7;
      iVar4 = FUN_004d01d5();
      FUN_004d08b8(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x14),*(int *)(iVar4 + 4) + 0x10);
      iVar4 = FUN_004d01d5();
      FUN_004d08b8(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x18),*(int *)(iVar4 + 4) + 0x10);
      cVar1 = FUN_004cf6f9(local_20);
      while (cVar1 == '\0') {
        puVar2 = (undefined4 *)FUN_004d08e8();
        FUN_004c8653(uVar5,*puVar2);
        iVar6 = FUN_004d08e8();
        if (*(char *)(iVar6 + 4) == '\0') {
          iVar6 = FUN_004d08e8();
          uVar3 = *(undefined4 *)(iVar6 + 8);
        }
        else {
          uVar3 = 0;
        }
        iVar6 = FUN_004d08e8();
        cVar1 = FUN_004c8690(uVar5,uVar3,*(undefined1 *)(iVar6 + 4));
        if (cVar1 == '\0') goto LAB_00504aa7;
        iVar6 = FUN_004d08e8();
        if ((*(char *)(iVar6 + 4) == '\0') && (iVar6 = FUN_004d08e8(), *(int *)(iVar6 + 8) == 0x13))
        {
          iVar6 = FUN_004d08e8();
          cVar1 = FUN_004c8488(uVar5,*(undefined4 *)(iVar6 + 0xc));
          if (cVar1 == '\0') goto LAB_00504aa7;
        }
        FUN_004d0909();
        iVar6 = FUN_004d01d5();
        FUN_004d08b8(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x18),*(int *)(iVar6 + 4) + 0x10);
        cVar1 = FUN_004cf6f9(local_20);
        iVar6 = local_8;
      }
      FUN_004e073e();
      uVar3 = *(undefined4 *)(iVar6 + 4);
    }
    uVar3 = 1;
  }
  return uVar3;
}

