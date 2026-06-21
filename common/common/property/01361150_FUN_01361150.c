// addr: 0x01361150
// name: FUN_01361150
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_eraseIfPresent(void * actionDb, uint key_) */

void __fastcall ActionDB_eraseIfPresent(void *actionDb,uint key_)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 *extraout_EAX;
  undefined1 local_8 [8];
  
                    /* Looks up an action key in the ActionDB tree and removes it if a matching node
                       is present. */
  this = (void *)((int)actionDb + 0x1f0);
  ActionDB_ActionTree_lowerBound(this,local_8,(int *)&stack0x00000004);
  iVar1 = extraout_EAX[1];
  iVar2 = *(int *)((int)actionDb + 500);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar2) {
    ActionDB_removeActionKey(this,(uint)&stack0x00000004);
  }
  return;
}

