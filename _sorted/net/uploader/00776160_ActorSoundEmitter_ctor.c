// addr: 0x00776160
// name: ActorSoundEmitter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorSoundEmitter_ctor(void * this, void * owner) */

void * __thiscall ActorSoundEmitter_ctor(void *this,void *owner)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActorSoundEmitter from ActorEffectEmitter base and clears
                       sound-emitter state fields/flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01557aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectEmitter_ctor(this,(int)owner,in_stack_00000008,in_stack_0000000c);
  *(undefined ***)this = ActorSoundEmitter::vftable;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  ExceptionList = local_c;
  return this;
}

