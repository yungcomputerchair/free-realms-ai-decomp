// addr: 0x0142aee0
// name: CommandObject_getDuration
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CommandObject_getDuration(void * this) */

int __fastcall CommandObject_getDuration(void *this)

{
  int iVar1;
  void *action;
  
                    /* Returns an explicit duration property when present, otherwise resolves the
                       command action and asks it for duration id 10. Returns 0 when duration data
                       is unavailable or disabled. */
  if (*(char *)((int)this + 0x81) != '\0') {
    iVar1 = FUN_01383620();
    if (iVar1 != 0) {
      iVar1 = FUN_01383620();
      return iVar1;
    }
    action = CommandObject_getActionFromEnvironment((void *)((int)this + 0x84));
    if (action != (void *)0x0) {
      iVar1 = Action_getDurationWithDefault(action);
      return iVar1;
    }
  }
  return 0;
}

