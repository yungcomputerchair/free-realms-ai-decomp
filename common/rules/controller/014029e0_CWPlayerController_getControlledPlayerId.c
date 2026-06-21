// addr: 0x014029e0
// name: CWPlayerController_getControlledPlayerId
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CWPlayerController_getControlledPlayerId(void * this) */

int __fastcall CWPlayerController_getControlledPlayerId(void *this)

{
                    /* Returns the integer at offset +4, used by player hooks to check whether the
                       event's player id is controlled by this CWPlayerController. */
  return *(int *)((int)this + 4);
}

