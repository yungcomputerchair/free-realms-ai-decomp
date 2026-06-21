// addr: 0x0101ba50
// name: TargetBoneHolder_setActorBoneIdDefault
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetBoneHolder_setActorBoneIdDefault(void * this) */

void __thiscall TargetBoneHolder_setActorBoneIdDefault(void *this)

{
  void *pvVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces an owned target bone object with a newly allocated TargetActorBoneId
                       using default constructor arguments. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01634a5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))();
  }
  pvVar1 = Mem_Alloc(0x30);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TargetActorBoneId_ctor(pvVar1,in_stack_00000004,in_stack_00000008);
  }
  *(void **)((int)this + 4) = pvVar1;
  ExceptionList = local_c;
  return;
}

