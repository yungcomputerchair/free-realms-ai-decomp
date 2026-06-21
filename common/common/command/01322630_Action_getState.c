// addr: 0x01322630
// name: Action_getState
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Action_getState(void * this) */

int __fastcall Action_getState(void *this)

{
  int iVar1;
  
                    /* Thin virtual wrapper that queries vtable slot 0x50 with selector 1; callers
                       compare the returned state against 5 when deciding whether to clear installed
                       action entries. */
  iVar1 = (**(code **)(*(int *)this + 0x50))(1);
  return iVar1;
}

