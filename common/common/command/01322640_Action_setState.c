// addr: 0x01322640
// name: Action_setState
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Action_setState(void * this, int state) */

void __thiscall Action_setState(void *this,int state)

{
                    /* Thin virtual wrapper that writes/sets selector 1 through vtable slot 0x54;
                       InstallActionMap uses it to set state value 5 before broadcasting the action
                       install. */
  (**(code **)(*(int *)this + 0x54))(1,state);
  return;
}

