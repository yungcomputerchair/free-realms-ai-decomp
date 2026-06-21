// addr: 0x0141b9d0
// name: GetTargetState_getTargetStateID
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GetTargetState_getTargetStateID(void * this) */

int __fastcall GetTargetState_getTargetStateID(void *this)

{
                    /* Returns the GetTargetState state id at offset 0x124.
                       GameCommandFinishMultiaction logs it as gtsGetTargetState and compares it
                       against the command's mGetTargetStateID. */
  return *(int *)((int)this + 0x124);
}

