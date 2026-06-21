// addr: 0x012ec420
// name: Utility_TokenBuilder_getTokenAsLong
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: long Utility_TokenBuilder_getTokenAsLong(void * this, uint tokenIndex_, long
   defaultValue_) */

long __thiscall Utility_TokenBuilder_getTokenAsLong(void *this,uint tokenIndex_,long defaultValue_)

{
  int iVar1;
  long lVar2;
  
                    /* Returns the selected token converted with atol, or the supplied default value
                       if the index is out of range. */
  if (*(int *)((int)this + 8) != 0) {
    if (tokenIndex_ < (uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c)) {
      if ((*(int *)((int)this + 8) == 0) ||
         ((uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c) <= tokenIndex_)) {
        FUN_00d83c2d();
      }
      iVar1 = *(int *)((int)this + 8) + tokenIndex_ * 0x1c;
      if (0xf < *(uint *)(*(int *)((int)this + 8) + 0x18 + tokenIndex_ * 0x1c)) {
        lVar2 = _atol(*(char **)(iVar1 + 4));
        return lVar2;
      }
      lVar2 = _atol((char *)(iVar1 + 4));
      return lVar2;
    }
  }
  return defaultValue_;
}

