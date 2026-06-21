// addr: 0x01383c10
// name: CommandObject_getActionFromEnvironment
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_getActionFromEnvironment(void * this) */

void * __fastcall CommandObject_getActionFromEnvironment(void *this)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  
                    /* Reads integer property id 2 from the command environment and resolves it
                       through the action database. Used by CommandObject duration handling and many
                       command constructors/doCommand paths. */
  uVar3 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
  uVar1 = FUN_01383460(2);
  ActionDB_ensureSingleton();
  pvVar2 = (void *)ActionDB_getAction(uVar1,uVar3);
  return pvVar2;
}

