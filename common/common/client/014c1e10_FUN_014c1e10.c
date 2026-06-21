// addr: 0x014c1e10
// name: FUN_014c1e10
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014c1e10(int param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa21b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012cfde0(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  DisplayActionManager_ensureSingleton();
  piVar7 = *(int **)(param_1 + 0xc);
  if (*(int **)(param_1 + 0x10) < piVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 < *(int **)(param_1 + 0xc)) {
      FUN_00d83c2d();
    }
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (piVar7 == piVar1) break;
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (*(int **)(param_1 + 0x10) <= piVar7) {
      FUN_00d83c2d();
    }
    iVar6 = *piVar7;
    if (*(int **)(param_1 + 0x10) <= piVar7) {
      FUN_00d83c2d();
    }
    puVar2 = (undefined4 *)FUN_012cc6b0(*piVar7);
    pvVar8 = (void *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      pvVar3 = Mem_Alloc(0x14);
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        pvVar8 = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(4);
      iVar4 = FUN_01301ed0();
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        FUN_01301ed0();
        iVar4 = FUN_01301f30();
      }
      DisplayActionBuilder_addIntArg(pvVar8,iVar4);
      DisplayActionBuilder_addIntArg(pvVar8,iVar6);
      FUN_012d3550(pvVar8);
      puVar5 = (undefined4 *)FUN_012d0920();
      if (puVar5 == puVar2) {
        iVar6 = FUN_01301ed0();
        if (iVar6 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = (void *)FUN_01301ed0();
        }
        ClientApplication_setLobby(this,pvVar8);
      }
      (**(code **)*puVar2)(1);
    }
    if (*(int **)(param_1 + 0x10) <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  }
  ExceptionList = local_c;
  return 1;
}

