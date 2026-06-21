// addr: 0x0101b910
// name: TargetBoneHolder_setCharacterBoneIdDefault
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetBoneHolder_setCharacterBoneIdDefault(void * this) */

void __thiscall TargetBoneHolder_setCharacterBoneIdDefault(void *this)

{
  void *pvVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces an owned target bone object with a newly allocated
                       TargetCharacterBoneId using default constructor arguments. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016349fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))();
  }
  pvVar1 = Mem_Alloc(0x40);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TargetCharacterBoneId_ctor
                       (pvVar1,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  }
  *(void **)((int)this + 4) = pvVar1;
  ExceptionList = local_c;
  return;
}

