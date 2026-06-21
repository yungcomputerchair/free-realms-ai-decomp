// addr: 0x014bb940
// name: FUN_014bb940
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_014bb940(void * this) */

void __thiscall sub_014bb940(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps another command labeled Change Lobby display Lobby Command and then
                       emits account-scoped fields. */
  FUN_01241650("Change Lobby display Lobby Command\n",0x23);
  AccountCommand_dump(this,in_stack_00000004);
  return;
}

