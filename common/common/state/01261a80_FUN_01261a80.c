// addr: 0x01261a80
// name: FUN_01261a80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01261a80(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  void *unaff_EBP;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_EDI;
  int iVar7;
  char unaff_retaddr;
  undefined1 local_3c [4];
  void *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puStack_8 = &LAB_0165cef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_38 = (void *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_4 = (int *)0x2;
  (**(code **)(*param_2 + 0xd0))(local_2c,local_3c,param_3,DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  puVar5 = local_34;
  if (local_30 < local_34) {
    FUN_00d83c2d();
  }
  do {
    puVar1 = local_30;
    iVar7 = 0;
    if (local_30 < local_34) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar1) {
      puVar5 = unaff_EBX;
      if (unaff_EBX != (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      do {
        if (unaff_EBX != (undefined4 *)0x0) {
          FUN_00d83c2d();
        }
        if (puVar5 == (undefined4 *)0x0) {
          cVar2 = (**(code **)(*param_2 + 0x124))(0x1ae03);
          if (cVar2 != '\0') {
            uVar3 = PlayElement_getId(0xffffffff,&DAT_018cba88,1);
            FUN_0125a860(local_c,uVar3);
          }
          if ((unaff_retaddr != '\0') && (unaff_EDI != 0)) {
            piVar6 = (int *)FUN_01340340();
            iVar7 = *piVar6;
            uVar3 = PlayElement_getId(unaff_EDI);
            uVar3 = (**(code **)(*param_2 + 0x28))(uVar3);
            (**(code **)(iVar7 + 0x22c))(uVar3);
          }
          local_14 = CONCAT31(local_14._1_3_,1);
          if (unaff_EBP != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(unaff_EBP);
          }
          local_14 = (uint)local_14._1_3_ << 8;
          if (local_38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_38);
          }
          ExceptionList = pvStack_1c;
          return;
        }
        FUN_00d83c2d();
        uVar3 = FUN_01321f20();
        iVar7 = PackedActionId_getHighBits(uVar3);
        if (iVar7 == 0x532e) {
          FUN_00d83c2d();
          FUN_01321f20();
        }
        FUN_00d83c2d();
        uVar3 = FUN_01321f20();
        iVar7 = 0;
        piVar6 = &DAT_018cbad0;
        do {
          iVar4 = PackedActionId_getHighBits(uVar3);
          if (iVar4 == *piVar6) {
            FUN_00d83c2d();
            uVar3 = PlayElement_getId(*puVar5,0);
            FUN_0125a4e0(puStack_8,uVar3);
            break;
          }
          iVar7 = iVar7 + 1;
          piVar6 = &DAT_018cbad0 + iVar7;
        } while ((&DAT_018cbad0)[iVar7] != 0);
        FUN_00d83c2d();
        puVar5 = puVar5 + 1;
        param_2 = local_4;
      } while( true );
    }
    if (local_30 <= puVar5) {
      FUN_00d83c2d();
    }
    uVar3 = FUN_01321f20();
    iVar4 = PackedActionId_getHighBits(uVar3);
    if (iVar4 == 0x532e) {
      if (local_30 <= puVar5) {
        FUN_00d83c2d();
      }
      FUN_01321f20();
    }
    if (local_30 <= puVar5) {
      FUN_00d83c2d();
    }
    uVar3 = FUN_01321f20();
    piVar6 = &DAT_018cbad0;
    do {
      iVar4 = PackedActionId_getHighBits(uVar3);
      if (iVar4 == *piVar6) {
        if (local_30 <= puVar5) {
          FUN_00d83c2d();
        }
        uVar3 = PlayElement_getId(*puVar5,1);
        FUN_0125a4e0(puStack_8,uVar3);
        break;
      }
      iVar7 = iVar7 + 1;
      piVar6 = &DAT_018cbad0 + iVar7;
    } while ((&DAT_018cbad0)[iVar7] != 0);
    if (local_30 <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
    param_2 = local_4;
  } while( true );
}

