// addr: 0x01383840
// name: CommandObject_registerPropertyAction
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_registerPropertyAction(void * this) */

void __fastcall CommandObject_registerPropertyAction(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Reads an integer property value, uses it as an ActionDB id with the DB
                       pointer at owner+0x20, and ensures the action is loaded/registered. It is one
                       of a series of CommandObject property-action helpers. */
  uVar2 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
  uVar1 = FUN_01383460(3);
  ActionDB_ensureSingleton();
  ActionDB_getAction(uVar1,uVar2);
  return;
}

