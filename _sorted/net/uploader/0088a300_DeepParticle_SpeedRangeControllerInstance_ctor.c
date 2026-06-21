// addr: 0x0088a300
// name: DeepParticle_SpeedRangeControllerInstance_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepParticle_SpeedRangeControllerInstance_ctor(void * this) */

void * __thiscall DeepParticle_SpeedRangeControllerInstance_ctor(void *this)

{
  uint uVar1;
  void *in_stack_00000004;
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepParticle_SpeedRangeControllerInstance object: runs its base
                       constructor, installs the DeepParticle_SpeedRangeControllerInstance vtable,
                       and initializes owned fields. It seeds/stores a randomized value from the
                       owning particle system RNG. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01578368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeepParticle_ParticleControllerInstance_ctor(this,in_stack_00000004,in_stack_00000008);
  *(undefined ***)this = DeepParticle::SpeedRangeControllerInstance::vftable;
  uVar1 = *(int *)((int)in_stack_00000004 + 0x88) * 0x7ff8a3ed + 0x2aa01d31;
  *(uint *)((int)in_stack_00000004 + 0x88) = uVar1;
  *(uint *)((int)this + 0x20) = ~uVar1;
  ExceptionList = local_c;
  return this;
}

