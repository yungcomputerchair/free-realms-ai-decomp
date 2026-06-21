// addr: 0x007dd930
// name: ActorParticleEmitter_createForCurrentActor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * ActorParticleEmitter_createForCurrentActor(void) */

void * ActorParticleEmitter_createForCurrentActor(void)

{
  int extraout_EAX;
  void *pvVar1;
  void *in_ECX;
  void *in_stack_00000004;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Gets the current actor/effect context, allocates and constructs
                       ActorParticleEmitter, then initializes it with the matching emitter setup
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01562adb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  releaseMemberInterface(in_ECX);
  if ((extraout_EAX != 0) && (*(char *)(extraout_EAX + 0x22d) != '\0')) {
    pvVar1 = Mem_Alloc(0xc0);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      local_10 = &stack0xffffffd8;
      pvVar1 = ActorParticleEmitter_ctor
                         (pvVar1,*(void **)(extraout_EAX + 0x360),*(void **)(extraout_EAX + 0x268),
                          in_stack_00000004,*(void **)((int)in_ECX + 0xa4));
    }
    local_4 = 0xffffffff;
    FUN_007c3240();
    ExceptionList = local_10;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

