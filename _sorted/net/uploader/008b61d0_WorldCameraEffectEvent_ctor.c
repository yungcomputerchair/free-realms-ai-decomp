// addr: 0x008b61d0
// name: WorldCameraEffectEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldCameraEffectEvent_ctor(void * this) */

void * __thiscall WorldCameraEffectEvent_ctor(void *this)

{
  int iVar1;
  void *in_stack_00000004;
  void *in_stack_00000008;
  int *in_stack_0000000c;
  uint in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a WorldCameraEffectEvent object: runs its base constructor,
                       installs the WorldCameraEffectEvent vtable, and initializes owned fields. It
                       runs WorldEffectEvent construction, installs WorldCameraEffectEvent vtables,
                       stores an asset pointer, and AddRefs it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01580908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WorldEffectEvent_ctor(this,in_stack_00000004,in_stack_00000008,in_stack_00000010);
  local_4 = 0;
  *(undefined ***)this = WorldCameraEffectEvent::vftable;
  *(undefined ***)((int)this + 0x44) = WorldCameraEffectEvent::vftable;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(int **)((int)this + 0x90) = in_stack_0000000c;
  iVar1 = in_stack_0000000c[2];
  in_stack_0000000c[2] = iVar1 + 1;
  if (iVar1 == 0) {
    (**(code **)(*in_stack_0000000c + 0x24))();
  }
  ExceptionList = local_c;
  return this;
}

