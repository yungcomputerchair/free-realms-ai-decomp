// addr: 0x01394b10
// name: Card_getActionByID
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Card_getActionByID(void * this, int actionId_) */

void * __fastcall Card_getActionByID(void *this,int actionId_)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int unaff_retaddr;
  undefined4 uVar5;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Finds an action by id on the card, falling back to the action database and
                       logging if the card-local lookup fails. */
  puStack_8 = &LAB_016844b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*(int *)this + 200))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  piVar1 = local_18;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  piVar4 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) {
      Game_logGeneralFormatted
                (*(undefined4 *)((int)this + 0x30),
                 "couldn\'t get action %d card.getActionByID, looking in action db",unaff_retaddr);
      uVar5 = *(undefined4 *)((int)this + 0x5c);
      ActionDB_ensureSingleton();
      pvVar3 = (void *)ActionDB_getAction(unaff_retaddr,uVar5);
      puStack_8 = (undefined1 *)0xffffffff;
      if (local_1c == (int *)0x0) {
        ExceptionList = local_10;
        return pvVar3;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (local_18 <= piVar4) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)*piVar4;
    if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_01321f20(), iVar2 == unaff_retaddr)) break;
    if (local_18 <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c == (int *)0x0) {
    ExceptionList = local_10;
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}

