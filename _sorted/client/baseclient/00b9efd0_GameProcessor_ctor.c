// addr: 0x00b9efd0
// name: GameProcessor_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameProcessor_ctor(void * this, void * owner) */

void __thiscall GameProcessor_ctor(void *this,void *owner)

{
                    /* Constructs a GameProcessor, storing the owner pointer, installing
                       GameProcessor::vftable, setting sentinel ids to -1, and initializing an
                       IString array member. */
  *(void **)((int)this + 4) = owner;
  *(undefined ***)this = GameProcessor::vftable;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)((int)this + 0x18) = SoeUtil::Array<SoeUtil::IString<char>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}

