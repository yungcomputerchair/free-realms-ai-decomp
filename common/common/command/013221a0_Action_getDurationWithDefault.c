// addr: 0x013221a0
// name: Action_getDurationWithDefault
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Action_getDurationWithDefault(void * action) */

int __fastcall Action_getDurationWithDefault(void *action)

{
  int iVar1;
  
                    /* Calls the action object's virtual method at slot 0x50 with constant 10, used
                       by CommandObject_getDuration and CommandObject_InstallActionMap_getDuration
                       to obtain a duration. The exact class is inferred from callers, so confidence
                       is medium. */
  iVar1 = (**(code **)(*(int *)action + 0x50))(10);
  return iVar1;
}

