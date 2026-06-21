// addr: 0x0095f760
// name: ActorParticleEmitter_createFromCurrentTarget
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * ActorParticleEmitter_createFromCurrentTarget(void) */

void * ActorParticleEmitter_createFromCurrentTarget(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Gets the current target actor/model, allocates an ActorParticleEmitter from
                       its asset data, and performs post-create registration. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01595aab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ae2470();
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  if (iVar2 != 0) {
    if ((piVar1[0x142] == 0) || (iVar2 = (**(code **)(*(int *)piVar1[0x1cd] + 0x10))(), iVar2 == 0))
    {
      iVar2 = (**(code **)(*piVar1 + 0x24))();
    }
    pvVar3 = Mem_Alloc(0xc0);
    uStack_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = ActorParticleEmitter_ctor
                         (pvVar3,*(void **)(iVar2 + 0x360),*(void **)(iVar2 + 0x268),
                          in_stack_00000004,*(void **)(in_ECX + 0xa4));
    }
    uStack_4 = 0xffffffff;
    FUN_007c3240();
    ExceptionList = local_c;
    return pvVar3;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

