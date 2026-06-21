// addr: 0x01404e80
// name: FUN_01404e80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __fastcall FUN_01404e80(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int rhsKind_;
  int rhsOrder_;
  uint uVar6;
  int extraout_EDX;
  undefined4 *puVar7;
  bool bVar8;
  int *unaff_retaddr;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01691258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x228))(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  puStack_18 = (undefined4 *)0x0;
  uStack_14 = 0;
  pvStack_10 = (void *)0x0;
  uStack_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x144))(&puStack_1c);
  puVar7 = puStack_1c;
  if (puStack_18 < puStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar2 = puStack_18;
    if (puStack_18 < puStack_1c) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar2) goto LAB_01405088;
    if (puStack_18 <= puVar7) {
      FUN_00d83c2d();
    }
    piVar1 = (int *)*puVar7;
    iVar5 = (**(code **)(*piVar1 + 0x28))();
    if ((iVar5 == (iVar4 != 2) + 1) &&
       (cVar3 = (**(code **)(*piVar1 + 0x1c0))(0x22633), cVar3 != '\0')) break;
    if (puStack_18 <= puVar7) {
      FUN_00d83c2d();
    }
    puVar7 = puVar7 + 1;
  }
  if ((unaff_retaddr == (int *)0x0) || (iVar4 = FUN_0138a380(), iVar4 != 0x5f63045)) {
LAB_01405088:
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
  }
  else {
    iVar4 = (**(code **)(*unaff_retaddr + 0x15c))(0x22974,0);
    iVar5 = (**(code **)(*unaff_retaddr + 0x15c))(0x22973,0);
    rhsKind_ = (**(code **)(*piVar1 + 0x15c))(0x22974,0);
    rhsOrder_ = (**(code **)(*piVar1 + 0x15c))(0x22973,0);
    uVar6 = compare_action_priority(iVar4,iVar5,rhsKind_,rhsOrder_);
    if (uVar6 == 1) {
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_1c == (undefined4 *)0x0) {
        ExceptionList = pvStack_10;
        return false;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
    if ((rhsKind_ != 0x222e7) && ((rhsKind_ != 0x222e6 || (iVar5 <= extraout_EDX)))) {
      uVar6 = _rand();
      uVar6 = uVar6 & 0x80000001;
      bVar8 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar8 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
      }
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_1c == (undefined4 *)0x0) {
        ExceptionList = pvStack_10;
        return bVar8;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
  }
  ExceptionList = pvStack_10;
  return true;
}

