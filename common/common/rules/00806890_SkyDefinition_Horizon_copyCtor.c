// addr: 0x00806890
// name: SkyDefinition_Horizon_copyCtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkyDefinition_Horizon_copyCtor(void * thisObj, void * source) */

void __thiscall SkyDefinition_Horizon_copyCtor(void *this,void *thisObj,void *source)

{
  int *piVar1;
  
                    /* Copy-constructs a SkyDefinition::Horizon, copying the inherited TintedTexture
                       fields, AddRef-ing the texture/resource pointer, then copying
                       horizon-specific fields. */
  *(undefined ***)this = SkyDefinition::TintedTexture::vftable;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)thisObj + 0x10);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)thisObj + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)thisObj + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)thisObj + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)thisObj + 0x2c);
  if (*(int *)((int)this + 0x10) != 0) {
    piVar1 = (int *)(*(int *)((int)this + 0x10) + 4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined ***)this = SkyDefinition::Horizon::vftable;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)thisObj + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)thisObj + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)thisObj + 0x38);
  return;
}

