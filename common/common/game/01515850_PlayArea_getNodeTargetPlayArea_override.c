// addr: 0x01515850
// name: PlayArea_getNodeTargetPlayArea_override
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayArea_getNodeTargetPlayArea_override(void * this, int nodeId_) */

void * __thiscall PlayArea_getNodeTargetPlayArea_override(void *this,int nodeId_)

{
  void *pvVar1;
  
                    /* Overrides PlayArea target lookup for a special node id 0x1ae01, returning the
                       pointer at this+0x54; all other ids delegate to
                       PlayArea_getNodeTargetPlayArea. */
  if (nodeId_ != 0x1ae01) {
    pvVar1 = PlayArea_getNodeTargetPlayArea(this,nodeId_);
    return pvVar1;
  }
  return *(void **)((int)this + 0x54);
}

