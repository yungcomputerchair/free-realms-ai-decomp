// addr: 0x00776310
// name: ActorModelMaterialEmitter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorModelMaterialEmitter_ctor(void * this, void * owner) */

void * __thiscall ActorModelMaterialEmitter_ctor(void *this,void *owner)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActorModelMaterialEmitter from ActorEffectEmitter base, clearing
                       the material pointer and defaulting its enabled flag true. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01557ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectEmitter_ctor(this,(int)owner,in_stack_00000008,in_stack_0000000c);
  *(undefined ***)this = ActorModelMaterialEmitter::vftable;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0xa4) = 1;
  ExceptionList = local_c;
  return this;
}

