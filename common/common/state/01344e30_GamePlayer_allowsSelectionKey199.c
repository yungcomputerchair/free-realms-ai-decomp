// addr: 0x01344e30
// name: GamePlayer_allowsSelectionKey199
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __fastcall GamePlayer_allowsSelectionKey199(int param_1)

{
  int iVar1;
  
                    /* Returns true if the player's object at offset 0x30 is absent, otherwise asks
                       its virtual method at 0x15c about key 0x199. Used while checking whether a
                       player can be selected/targeted. */
  if (*(int *)(param_1 + 0x30) == 0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x15c))(0x199,0);
  return iVar1 != 0;
}

