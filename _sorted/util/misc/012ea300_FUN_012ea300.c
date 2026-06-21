// addr: 0x012ea300
// name: FUN_012ea300
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012ea300(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uStack_50;
  void *pvStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Looks up or creates a Preferences entry for an object-provided key, using the
                       preferences map and string temporary management. No exact method name
                       evident. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_01672ea0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != (int *)0x0) {
    uStack_50 = (**(code **)(*param_2 + 4))();
    FUN_012e79a0();
    pvStack_4c = *(void **)(param_1 + 0x60);
    if ((iStack_40 == 0) || (iStack_40 != param_1 + 0x5c)) {
      FUN_00d83c2d();
    }
    if ((void *)iStack_3c == pvStack_4c) {
      pvStack_4c = (void *)0x0;
      uStack_48 = 0;
      uStack_44 = 0;
      iStack_4 = 0;
      FUN_012e8fa0();
      FUN_012e8980(&uStack_50);
      iStack_4._0_1_ = 1;
      uVar3 = (**(code **)(*param_2 + 4))();
      iStack_4._0_1_ = 0;
      FUN_012e9840(auStack_20,uVar3);
      iStack_4._0_1_ = 2;
      FUN_012e8df0();
      iStack_4._0_1_ = 3;
      FUN_012ea080();
      iStack_4._0_1_ = 2;
      FUN_012e7c90();
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_012e7c20();
      iStack_4 = 0xffffffff;
      if (pvStack_4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_4c);
      }
    }
    else {
      if (iStack_40 == 0) {
        FUN_00d83c2d();
      }
      if (iStack_3c == *(int *)(iStack_40 + 4)) {
        FUN_00d83c2d();
      }
      puVar5 = *(undefined4 **)(iStack_3c + 0x14);
      if (*(undefined4 **)(iStack_3c + 0x18) < puVar5) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar1 = *(undefined4 **)(iStack_3c + 0x18);
        if (puVar1 < *(undefined4 **)(iStack_3c + 0x14)) {
          FUN_00d83c2d();
        }
        if (puVar5 == puVar1) {
          FUN_012e8fa0();
          ExceptionList = local_c;
          return;
        }
        if (*(undefined4 **)(iStack_3c + 0x18) <= puVar5) {
          FUN_00d83c2d();
        }
        piVar2 = (int *)*puVar5;
        uStack_50 = (**(code **)(*param_2 + 0xc))();
        uVar4 = (**(code **)(*piVar2 + 0xc))();
        if (uVar4 < uStack_50) break;
        if (*(undefined4 **)(iStack_3c + 0x18) <= puVar5) {
          FUN_00d83c2d();
        }
        puVar5 = puVar5 + 1;
      }
      FUN_012e8a60();
    }
  }
  ExceptionList = local_c;
  return;
}

