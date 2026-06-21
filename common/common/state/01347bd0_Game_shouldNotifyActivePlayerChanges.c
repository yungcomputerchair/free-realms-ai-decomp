// addr: 0x01347bd0
// name: Game_shouldNotifyActivePlayerChanges
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall Game_shouldNotifyActivePlayerChanges(int param_1)

{
                    /* Returns the byte flag at offset 0x118. setActivePlayer checks this flag
                       before notifying the game service of an active-player change. */
  return *(undefined1 *)(param_1 + 0x118);
}

