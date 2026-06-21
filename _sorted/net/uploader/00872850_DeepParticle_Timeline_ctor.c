// addr: 0x00872850
// name: DeepParticle_Timeline_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepParticle_Timeline_ctor(void * this) */

void * __thiscall DeepParticle_Timeline_ctor(void *this)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepParticle_Timeline object: runs its base constructor,
                       installs the DeepParticle_Timeline vtable, and initializes owned fields. It
                       initializes timeline containers/helpers and stores a timeline parameter at
                       the end of the object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01575239;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = DeepParticle::Timeline::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00871e20(uVar1);
  local_4 = 1;
  FUN_00871660();
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = in_stack_00000004;
  *(undefined4 *)((int)this + 0x544) = 0;
  ExceptionList = local_c;
  return this;
}

