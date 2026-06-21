// addr: 0x010b71a0
// name: WorldParticleEmitterEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldParticleEmitterEvent_ctor(void * this) */

void * __thiscall WorldParticleEmitterEvent_ctor(void *this)

{
  int iVar1;
  void *in_stack_00000004;
  void *in_stack_00000008;
  int *in_stack_0000000c;
  uint in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a WorldParticleEmitterEvent object: installs the class vtable/base
                       state and initializes owned fields. It stores and AddRefs the supplied
                       particle emitter asset. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01648358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WorldEffectEvent_ctor(this,in_stack_00000004,in_stack_00000008,in_stack_00000010);
  local_4 = 0;
  *(undefined ***)this = WorldParticleEmitterEvent::vftable;
  *(undefined ***)((int)this + 0x44) = WorldParticleEmitterEvent::vftable;
  *(int **)((int)this + 0x90) = in_stack_0000000c;
  *(undefined4 *)((int)this + 0x94) = 0;
  iVar1 = in_stack_0000000c[2];
  in_stack_0000000c[2] = iVar1 + 1;
  if (iVar1 == 0) {
    (**(code **)(*in_stack_0000000c + 0x24))();
  }
  ExceptionList = local_c;
  return this;
}

