// addr: 0x007cd800
// name: SoundDefinition_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoundDefinition_ctor(void * this) */

void * __thiscall SoundDefinition_ctor(void *this)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs a SoundDefinition object: runs its base constructor, installs the
                       SoundDefinition vtable, and initializes owned fields. It stores a sound
                       id/definition field and copies reference-array data before final
                       initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015615b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007cc650(in_stack_00000008);
  local_4 = 0;
  *(undefined ***)this = SoundDefinition::vftable;
  *(undefined4 *)((int)this + 0x2c) = in_stack_00000004;
  pvVar1 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = RefArray_ctor_copyData(in_stack_0000000c,in_stack_00000010);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined1 *)((int)this + 0x1c) = 1;
  FUN_007cd660(this);
  ExceptionList = local_c;
  return this;
}

