// addr: 0x00887d60
// name: DeepParticle_OffsetWaveControllerInstance_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepParticle_OffsetWaveControllerInstance_ctor(void * this) */

void * __thiscall DeepParticle_OffsetWaveControllerInstance_ctor(void *this)

{
  int iVar1;
  void *in_stack_00000004;
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepParticle_OffsetWaveControllerInstance object: runs its base
                       constructor, installs the DeepParticle_OffsetWaveControllerInstance vtable,
                       and initializes owned fields. It initializes an array sized from the particle
                       count for offset wave data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01577d43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeepParticle_ParticleControllerInstance_ctor(this,in_stack_00000004,in_stack_00000008);
  *(undefined ***)this = DeepParticle::OffsetWaveControllerInstance::vftable;
  *(undefined ***)((int)this + 0x20) = SoeUtil::Array<float,0,1>::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_4 = 1;
  iVar1 = *(int *)((int)in_stack_00000004 + 0x98) * 4 >> 0x11;
  if (*(int *)((int)this + 0x28) < iVar1) {
    if (*(int *)((int)this + 0x2c) < iVar1) {
      FUN_007d7250(iVar1,1);
    }
    *(int *)((int)this + 0x28) = iVar1;
  }
  else {
    *(int *)((int)this + 0x28) = iVar1;
  }
  ExceptionList = local_c;
  return this;
}

