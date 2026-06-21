// addr: 0x012ec4c0
// name: Utility_TokenBuilder_getTokenAsFloat
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: double Utility_TokenBuilder_getTokenAsFloat(void * this, uint tokenIndex_,
   float defaultValue_) */

double __thiscall
Utility_TokenBuilder_getTokenAsFloat(void *this,uint tokenIndex_,float defaultValue_)

{
  int iVar1;
  double dVar2;
  
                    /* Returns the selected token converted with atof, or the supplied default float
                       if the index is out of range. */
  if (*(int *)((int)this + 8) != 0) {
    if (tokenIndex_ < (uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c)) {
      if ((*(int *)((int)this + 8) == 0) ||
         ((uint)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c) <= tokenIndex_)) {
        FUN_00d83c2d();
      }
      iVar1 = *(int *)((int)this + 8) + tokenIndex_ * 0x1c;
      if (0xf < *(uint *)(*(int *)((int)this + 8) + 0x18 + tokenIndex_ * 0x1c)) {
        dVar2 = _atof(*(char **)(iVar1 + 4));
        return dVar2;
      }
      dVar2 = _atof((char *)(iVar1 + 4));
      return dVar2;
    }
  }
  return (double)defaultValue_;
}

