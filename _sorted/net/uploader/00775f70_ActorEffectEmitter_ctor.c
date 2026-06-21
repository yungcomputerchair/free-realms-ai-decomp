// addr: 0x00775f70
// name: ActorEffectEmitter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorEffectEmitter_ctor(void * this, int arg1_, int arg2_, int arg3_)
    */

void * __thiscall ActorEffectEmitter_ctor(void *this,int arg1_,int arg2_,int arg3_)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* Constructs an ActorEffectEmitter, initializes several IString members to
                       empty, copies default data into a fixed block, and stores constructor
                       arguments/state fields. */
  *(int *)((int)this + 0x10) = arg1_;
  *(undefined ***)this = ActorEffectEmitter::vftable;
  *(int *)((int)this + 0x14) = arg2_;
  *(undefined ***)((int)this + 0x18) = SoeUtil::IString<char>::vftable;
  *(undefined1 **)((int)this + 0x1c) = &DAT_01bdfda8;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)((int)this + 0x28) = SoeUtil::IString<char>::vftable;
  *(undefined1 **)((int)this + 0x2c) = &DAT_01bdfda8;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)((int)this + 0x38) = SoeUtil::IString<char>::vftable;
  *(undefined1 **)((int)this + 0x3c) = &DAT_01bdfda8;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  puVar2 = &DAT_01bc2660;
  puVar3 = (undefined4 *)((int)this + 0x50);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)((int)this + 0x90) = arg3_;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return this;
}

