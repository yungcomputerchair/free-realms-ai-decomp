// addr: 0x00776820
// name: ActorCompositeEffectEmitter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorCompositeEffectEmitter_ctor(void * this, void * owner) */

void * __thiscall ActorCompositeEffectEmitter_ctor(void *this,void *owner)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActorCompositeEffectEmitter from ActorEffectEmitter base and
                       clears its composite state field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01557bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectEmitter_ctor(this,(int)owner,in_stack_00000008,in_stack_0000000c);
  *(undefined ***)this = ActorCompositeEffectEmitter::vftable;
  *(undefined4 *)((int)this + 0xa4) = 0;
  ExceptionList = local_c;
  return this;
}

