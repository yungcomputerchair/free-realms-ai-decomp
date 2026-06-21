// addr: 0x008eab60
// name: GameTimeTimeline_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameTimeTimeline_ctor(void * this) */

void * __fastcall GameTimeTimeline_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameTimeTimeline, invokes a base/timeline initializer, installs
                       its vtable, and initializes a SoeUtil::List<GameTimeEventInfo>. Vtable
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015878a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeepParticle_Timeline_ctor(this);
  *(undefined ***)this = GameTimeTimeline::vftable;
  *(undefined ***)((int)this + 0x548) = SoeUtil::List<GameTimeEventInfo,-1>::vftable;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0;
  *(undefined4 *)((int)this + 0x550) = 0;
  ExceptionList = local_c;
  return this;
}

