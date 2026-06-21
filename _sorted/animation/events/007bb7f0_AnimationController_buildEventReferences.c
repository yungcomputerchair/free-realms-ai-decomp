// addr: 0x007bb7f0
// name: AnimationController_buildEventReferences
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationController_buildEventReferences(void * this) */

void __fastcall AnimationController_buildEventReferences(void *this)

{
  int iVar1;
  void **ppvVar2;
  void *pvVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds runtime animation event reference objects for sound, particle, and
                       composite effect lists in the animation resource and links each reference to
                       its source node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155f791;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  for (iVar1 = *(int *)(*(int *)((int)this + 4) + 4); ExceptionList = ppvVar2, iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 0x60)) {
    pvVar3 = Mem_Alloc(0x48);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = AnimationSoundReference_ctor
                        (*(undefined4 *)((int)this + 0xc),*(undefined4 *)(iVar1 + 0x3c));
    }
    local_4 = 0xffffffff;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x38;
    }
    FUN_007bb730(iVar4,iVar1);
    ppvVar2 = ExceptionList;
  }
  for (iVar1 = *(int *)(*(int *)((int)this + 4) + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60))
  {
    pvVar3 = Mem_Alloc(0x4c);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = AnimationParticleReference_ctor
                        (*(undefined4 *)((int)this + 0xc),*(undefined4 *)(iVar1 + 0x3c));
    }
    local_4 = 0xffffffff;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x3c;
    }
    FUN_007bb730(iVar4,iVar1);
  }
  for (iVar1 = *(int *)(*(int *)((int)this + 4) + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60))
  {
    pvVar3 = Mem_Alloc(0x48);
    local_4 = 2;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = AnimationCompositeEffectReference_ctor
                        (*(undefined4 *)((int)this + 0xc),*(undefined4 *)(iVar1 + 0x3c));
    }
    local_4 = 0xffffffff;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x38;
    }
    FUN_007bb730(iVar4,iVar1);
  }
  ExceptionList = local_c;
  return;
}

