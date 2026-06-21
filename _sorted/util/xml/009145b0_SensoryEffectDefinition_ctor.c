// addr: 0x009145b0
// name: SensoryEffectDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SensoryEffectDefinition_ctor(void * this, void * owner) */

void __thiscall SensoryEffectDefinition_ctor(void *this,void *owner)

{
                    /* Base constructor for sensory/actor effect definitions; installs
                       SensoryEffectDefinition::vftable and initializes id/name/string members and
                       default integer fields. */
  *(undefined ***)this = SensoryEffectDefinition::vftable;
  *(void **)((int)this + 4) = owner;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)((int)this + 0xc) = SoeUtil::IString<char>::vftable;
  *(undefined4 **)((int)this + 0x10) = &DAT_01be48fc;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}

