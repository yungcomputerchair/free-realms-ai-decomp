// addr: 0x012ec5e0
// name: Utility_TokenBuilder_tokenStringMatches
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Utility_TokenBuilder_tokenStringMatches(void * this, uint tokenIndex_,
   void * text) */

bool __thiscall Utility_TokenBuilder_tokenStringMatches(void *this,uint tokenIndex_,void *text)

{
  int iVar1;
  
                    /* Tests a provided string value against TokenBuilder state when the requested
                       token index is in range; returns false if there are no tokens or index is out
                       of range. */
  if (*(int *)((int)this + 8) != 0) {
    if (tokenIndex_ < (uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c)) {
      if ((*(int *)((int)this + 8) == 0) ||
         ((uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c) <= tokenIndex_)) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)text + 0x18) < 0x10) {
        iVar1 = (int)text + 4;
      }
      else {
        iVar1 = *(int *)((int)text + 4);
      }
      iVar1 = FUN_01231320(iVar1,0,*(undefined4 *)((int)text + 0x14));
      return (bool)('\x01' - (iVar1 != 0));
    }
  }
  return false;
}

