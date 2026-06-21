// addr: 0x01394c70
// name: ActionProvider_getPrimaryOrDefaultAction
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ActionProvider_getPrimaryOrDefaultAction(void * this) */

int __fastcall ActionProvider_getPrimaryOrDefaultAction(void *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_20;
  int local_1c [2];
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns an action selected from a virtual list when present, otherwise falls
                       back to action id 0x2711 through ActionDB_getAction after a preparation call.
                       Evidence is ActionDB_getAction, FUN_012bddf0(0x2711,...), and the virtual
                       call filling an action id list. */
  puStack_8 = &LAB_016844e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c[1] = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  (**(code **)(*(int *)this + 0x114))(local_1c,1,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  if ((pvStack_20 != (void *)0x0) && (local_1c[0] - (int)pvStack_20 >> 2 != 0)) {
    piVar1 = (int *)FUN_01392dd0(0);
    iVar2 = *piVar1;
    if (iVar2 != 0) goto LAB_01394cf7;
  }
  uVar4 = *(undefined4 *)((int)this + 0x5c);
  uVar3 = 0x2711;
  ActionDB_ensureSingleton();
  iVar2 = ActionDB_getAction(uVar3,uVar4);
LAB_01394cf7:
  local_c = (void *)0xffffffff;
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  ExceptionList = local_14;
  return iVar2;
}

